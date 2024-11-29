#ifndef TEXTUREMANAGER_H_INCLUDED
#define TEXTUREMANAGER_H_INCLUDED

#include <map>
#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "Interface/IPiece.hpp"

class TextureManager
{
private:
    std::map<IPiece::Color, std::map<IPiece::Type, std::shared_ptr<sf::Texture>>> m_pieceTextures;
public:
    TextureManager();
    const sf::Texture &getPieceTexture(const IPiece::Color &color, const IPiece::Type &type) const;
};

#endif // TEXTUREMANAGER_H_INCLUDED