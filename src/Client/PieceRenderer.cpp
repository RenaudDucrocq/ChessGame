#include "PieceRenderer.hpp"    

PieceRenderer::PieceRenderer(IPiece &piece): m_piece(piece)
{
    m_texture.loadFromFile("assets/128px/w_pawn.png");
    m_texture.setSmooth(true);
    m_sprite.setTexture(m_texture);
    m_sprite.setOrigin(((int)m_texture.getSize().x - (int)m_texture.getSize().y) / 2.0f, 0);
    m_sprite.setPosition(sf::Vector2f(m_piece.getPosition() * BoardBackground::getSquareSize()));

    m_piece.setUpdateCallback([this]() {
        m_sprite.setPosition(sf::Vector2f(m_piece.getPosition() * BoardBackground::getSquareSize()));
    });
}

void PieceRenderer::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(m_sprite, states);
}
