cmake_minimum_required(VERSION 3.7.1)

project("TS2D")

add_library(
    JoseDK
    src/JoseDK/number.cpp
    src/JoseDK/text.cpp
    src/JoseDK/throttle.cpp
    src/JoseDK/window.cpp

    include/number.h
    include/text.h
    include/throttle.h
    include/window.h
)

add_executable(
    SFML
    ...
)

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "main.cpp" DESTINATION src) #${CMAKE_INSTALL_PREFIX}/src

target_link_libraries(${PROJECT_NAME} PRIVATE JoseDK)
target_link_libraries(${PROJECT_NAME} PRIVATE SFML)