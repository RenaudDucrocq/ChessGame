#include "IPiece.hpp"

const std::map<IPiece::Type, std::string> IPiece::g_typeLabels {
    {Type::BISHOP, "BISHOP"},
    {Type::KING, "KING"},
    {Type::KNIGHT, "KNIGHT"},
    {Type::PAWN, "PAWN"},
    {Type::QUEEN, "QUEEN"},
    {Type::ROOK, "ROOK"}
};

IPiece::~IPiece()
{
}

void IPiece::setPosition()
{
    if (m_updateCallback)
        m_updateCallback();
}

const std::string &IPiece::getLabel()
{
    return g_typeLabels.at(getType());
}

bool IPiece::operator==(const IPiece &piece)
{
    return getType() == piece.getType() && getPosition() == piece.getPosition();
}

void IPiece::onUpdate(const std::function<void()> &callback)
{
    m_updateCallback = callback;
}
