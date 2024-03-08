#include "BoardMock.hpp"

BoardMock::BoardMock()
{
    m_pieces.push_back(new PieceMock());
}

BoardMock::~BoardMock()
{
    for (auto piece : m_pieces)
    {
        delete piece;
    }
    m_pieces.clear();
}

std::vector<IPiece *> BoardMock::getPieces() const
{
    return m_pieces;
}