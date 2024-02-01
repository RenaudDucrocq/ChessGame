include_directories(${CMAKE_SOURCE_DIR}/src)

set(SFML_STATIC_LIBRARIES TRUE)

link_directories()

find_package(SFML REQUIRED COMPONENTS graphics window system) # Look for SFML

add_executable(
    main
    main.cpp
    Coordonnees.hpp
    Coordonnees.cpp
    FromTo.cpp
    FromTo.hpp
    Player.cpp
    Player.hpp
    Move.cpp
    Move.hpp
    Board.cpp
    Board.hpp
)

add_subdirectory(Pieces)

target_link_libraries(main -static sfml-graphics sfml-window sfml-system)

############################################################################
###### Enable this option for final release. Disable console & stdout ######
############################################################################

# target_link_options(main PRIVATE -mwindows)