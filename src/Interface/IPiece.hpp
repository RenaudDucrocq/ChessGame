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
    std::function<void()> m_updateCallback;
public:
    virtual ~IPiece();
    virtual const Color &getColor() = 0;
    virtual const sf::Vector2u &getPosition() const = 0;
    virtual void setPosition();
    virtual const Type &getType() const = 0;
    const std::string &getLabel();
    bool operator==(const IPiece &piece);
    void onUpdate(const std::function<void()> &callback);
};

#endif // IPIECE_H_INCLUDED