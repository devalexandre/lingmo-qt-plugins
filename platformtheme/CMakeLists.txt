project(platformthemeplugin)
include(GNUInstallDirs)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets QuickControls2 DBus Gui)
find_package(Qt6GuiPrivate REQUIRED)
find_package(KF6WindowSystem REQUIRED)
find_package(PkgConfig REQUIRED)

# qdbusmenubar uses them
remove_definitions(-DQT_NO_SIGNALS_SLOTS_KEYWORDS)

pkg_check_modules(XCB_EWMH REQUIRED xcb xcb-ewmh x11)

set (SRCS
    main.cpp
    platformtheme.h
    platformtheme.cpp
    hintsettings.h
    hintsettings.cpp
    systemtrayicon.h
    systemtrayicon.cpp
    qdbusmenubar_p.h
    qdbusmenubar.cpp
    x11integration.h
    x11integration.cpp
    statusnotifier/dbustypes.h
    statusnotifier/dbustypes.cpp
    statusnotifier/statusnotifieritem.h
    statusnotifier/statusnotifieritem.cpp
)

qt6_add_dbus_interface(SRCS org.kde.StatusNotifierWatcher.xml statusnotifierwatcher_interface)

qt6_add_dbus_adaptor(SRCS
    statusnotifier/org.kde.StatusNotifierItem.xml
    statusnotifier/statusnotifieritem.h
    StatusNotifierItem
)

add_library(lingmoplatformtheme MODULE ${SRCS})

target_compile_definitions(lingmoplatformtheme
    PRIVATE
        "QT_NO_FOREACH"
        "LIB_FM_QT_SONAME=\"${LIB_FM_QT_SONAME}\""
)

target_include_directories(lingmoplatformtheme PRIVATE ${XCB_EWMH_INCLUDE_DIRS})

target_link_libraries(lingmoplatformtheme PRIVATE
    Qt6::GuiPrivate
    Qt6::Widgets
    Qt6::QuickControls2
    Qt6::Core
    Qt6::DBus
    KF6::WindowSystem
    ${XCB_EWMH_LIBRARIES}
)

find_program(QTPATHS_EXECUTABLE qtpaths)
if(NOT QTPATHS_EXECUTABLE)
    message(FATAL_ERROR "qtpaths is not found.")
endif()

execute_process(COMMAND ${QTPATHS_EXECUTABLE} --plugin-dir
    OUTPUT_VARIABLE QT_PLUGINS_DIR
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
if(QT_PLUGINS_DIR)
    message(STATUS "Qt6 plugin directory:" "${QT_PLUGINS_DIR}")
else()
    message(FATAL_ERROR "Qt6 plugin directory cannot be detected.")
endif()

install(TARGETS lingmoplatformtheme LIBRARY DESTINATION "${QT_PLUGINS_DIR}/platformthemes")
