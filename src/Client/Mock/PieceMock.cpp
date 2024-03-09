#include "PieceMock.hpp"

PieceMock::PieceMock(sf::Vector2u position): m_color(Color::BLACK), m_position(position), m_type(Type::PAWN)
{
}

const IPiece::Color &PieceMock::getColor()
{
    return m_color;
}

const sf::Vector2u &PieceMock::getPosition() const
{
    return m_position;
}

const IPiece::Type &PieceMock::getType() const
{
    return m_type;
}
