#include "BoardMock.hpp"

BoardMock::BoardMock()
{
    for (int i = 0; i < 64; i++)
        if (i < 16 || i >= 48)
            m_pieces.push_back(new PieceMock(sf::Vector2u(i % 8, i / 8)));
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