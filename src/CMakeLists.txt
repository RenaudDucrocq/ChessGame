include_directories(${CMAKE_SOURCE_DIR}/src)

link_directories()

#add_library(main.cpp)

#target_link_libraries(main)

add_executable(main main.cpp Coordonnees.hpp Coordonnees.cpp FromTo.cpp FromTo.hpp Pieces/Piece.cpp Pieces/Piece.hpp Player.cpp Player.hpp Move.cpp Move.hpp Board.cpp Board.hpp Pieces/Bishop.cpp Pieces/Bishop.hpp)

target_link_libraries(main)