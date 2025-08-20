cmake_minimum_required(VERSION 3.16)
project(CelestialSnitchQt LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories(include)

add_executable(CelestialSnitchQt
    main.cpp
    src/MainWindow.cpp
)

target_link_libraries(CelestialSnitchQt PRIVATE Qt6::Widgets)
    
    # Enable and add tests
    add_subdirectory(Testing)
