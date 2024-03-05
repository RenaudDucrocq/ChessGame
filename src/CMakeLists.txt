include_directories(${CMAKE_SOURCE_DIR}/src)

if(WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

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
        Action.cpp
        Action.hpp
    Board.cpp
    Board.hpp
        Couleur.hpp
)

add_subdirectory(Pieces)

if (WIN32)
    target_link_libraries(main -static sfml-graphics sfml-window sfml-system)
else()
    target_link_libraries(main sfml-graphics sfml-window sfml-system)
endif()

############################################################################
###### Enable this option for final release. Disable console & stdout ######
############################################################################

# target_link_options(main PRIVATE -mwindows)