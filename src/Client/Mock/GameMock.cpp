#include "GameMock.hpp"

GameMock::GameMock()
{
}

const IBoard &GameMock::getBoard() const
{
    return m_board;
}
