#include "IPiece.hpp"

const std::map<IPiece::Type, std::string> IPiece::g_typeLabels {
    {Type::BISHOP, "BISHOP"},
    {Type::KING, "KING"},
    {Type::KNIGHT, "KNIGHT"},
    {Type::PAWN, "PAWN"},
    {Type::QUEEN, "QUEEN"},
    {Type::ROOK, "ROOK"}
};

IPiece::IPiece(Type type): m_type(type)
{
}

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
    return g_typeLabels.at(m_type);
}

bool IPiece::operator==(const IPiece &piece)
{
    return m_type == piece.m_type && getPosition() == piece.getPosition();
}

void IPiece::setUpdateCallback(const std::function<void()> &callback)
{
    m_updateCallback = callback;
}
