cmake_minimum_required(VERSION 3.12)
project(LiteEngine.Application)
set(CMAKE_CXX_STANDARD 20)

set(
        HEADERS
        include/application/application.hpp
        include/application/window.hpp
        include/application/window_listener.hpp
        include/application/window_renderer.hpp
)

set(
        SOURCES
        src/application.cpp
        src/window.cpp
)

add_subdirectory(LiteEngine.Common)
add_subdirectory(LiteEngine.Glew)
add_subdirectory(LiteEngine.SDL2)

add_library(lite_engine_application ${HEADERS} ${SOURCES})
target_include_directories(lite_engine_application PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(lite_engine_application PUBLIC lite_engine_common lite_engine_glew lite_engine_sdl2)

add_executable(lite_engine_application_example example.cpp)
target_link_libraries(lite_engine_application_example PUBLIC lite_engine_application)
