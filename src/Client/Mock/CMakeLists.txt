target_sources(
    main_client
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/BoardMock.cpp
    ${CMAKE_CURRENT_LIST_DIR}/GameMock.cpp
    ${CMAKE_CURRENT_LIST_DIR}/PieceMock.cpp
)