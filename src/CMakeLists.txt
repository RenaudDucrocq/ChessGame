include_directories(${CMAKE_SOURCE_DIR}/src)

link_directories()

#add_library(main.cpp)

#target_link_libraries(main)

add_executable(main main.cpp Coordonnees.hpp Coordonnees.cpp FromTo.cpp FromTo.hpp Pieces/Piece.cpp Pieces/Piece.hpp Player.cpp Player.hpp Move.cpp Move.hpp Board.cpp Board.hpp Pieces/Bishop.cpp Pieces/Bishop.hpp Pieces/King.cpp Pieces/King.hpp Pieces/Queen.cpp Pieces/Queen.hpp Pieces/Knight.cpp Pieces/Knight.hpp Pieces/Rook.cpp Pieces/Rook.hpp Pieces/Pawn.cpp Pieces/Pawn.hpp)

target_link_libraries(main)