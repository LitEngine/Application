set(SDL2_DIR "SDL2")
find_package(SDL2 REQUIRED)
message("${SDL2_INCLUDE_DIRS}")
include_directories(${SDL2_INCLUDE_DIRS})