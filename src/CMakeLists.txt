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
    Pieces/Piece.cpp
    Pieces/Piece.hpp
    Pieces/Bishop.cpp
    Pieces/Bishop.hpp
    Pieces/King.cpp
    Pieces/King.hpp
    Pieces/Queen.cpp
    Pieces/Queen.hpp
    Pieces/Knight.cpp
    Pieces/Knight.hpp
    Pieces/Rook.cpp
    Pieces/Rook.hpp
    Pieces/Pawn.cpp
    Pieces/Pawn.hpp
)

target_link_libraries(main sfml-graphics sfml-window sfml-system)

############################################################################
###### Enable this option for final release. Disable console & stdout ######
############################################################################

# target_link_options(main PRIVATE -mwindows)