#ifndef IPIECE_H_INCLUDED
#define IPIECE_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <map>
#include <string>
#include <functional>

class IPiece
{
public:
    enum Color
    {
        WHITE,
        BLACK
    };

    enum Type
    {
        BISHOP,
        KING,
        KNIGHT,
        PAWN,
        QUEEN,
        ROOK
    };
private:
    static const std::map<Type, std::string> g_typeLabels;
    Type m_type;
    std::function<void()> m_updateCallback;
public:
    IPiece(Type type);
    virtual ~IPiece();
    virtual const Color &getColor() = 0;
    virtual const sf::Vector2u &getPosition() const = 0;
    virtual void setPosition();
    virtual const Type &getType() = 0;
    const std::string &getLabel();
    bool operator==(const IPiece &piece);
    void setUpdateCallback(const std::function<void()> &callback);
};

#endif // IPIECE_H_INCLUDED