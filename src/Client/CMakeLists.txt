target_sources(
    main_client
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/BoardBackground.cpp
    ${CMAKE_CURRENT_LIST_DIR}/PieceRenderer.cpp
)

add_subdirectory(Mock)
