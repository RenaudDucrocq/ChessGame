#include "TextureManager.hpp"

TextureManager::TextureManager()
{
    std::map<IPiece::Type, std::string> texturePaths {
        {IPiece::Type::BISHOP, "bishop.png"},
        {IPiece::Type::KING, "king.png"},
        {IPiece::Type::KNIGHT, "knight.png"},
        {IPiece::Type::PAWN, "pawn.png"},
        {IPiece::Type::QUEEN, "queen.png"},
        {IPiece::Type::ROOK, "rook.png"}
    };

    for (auto color : std::map<IPiece::Color, std::string> {{IPiece::Color::WHITE, "w_"}, {IPiece::Color::BLACK, "b_"}})
    {
        m_pieceTextures[color.first] = {};
        for (auto piece : texturePaths)
        {
            std::string texturePath = "assets/128px/" + color.second + piece.second;
            std::shared_ptr<sf::Texture> pieceTexture = std::make_shared<sf::Texture>();
            pieceTexture->loadFromFile(texturePath);
            pieceTexture->setSmooth(true);

            m_pieceTextures[color.first][piece.first] = pieceTexture;
        }
    }
}

const sf::Texture &TextureManager::getPieceTexture(const IPiece::Color &color, const IPiece::Type &type) const
{
    return *(m_pieceTextures.at(color).at(type));
}
