#include "PieceRenderer.hpp"   

PieceRenderer::PieceRenderer(IPiece &piece): m_piece(piece)
{
    m_sprite.setTexture(Engine::getInstance().getTexturesManager().getPieceTexture(m_piece.getColor(), m_piece.getType()));
    m_sprite.setOrigin(((int)m_sprite.getTexture()->getSize().x - (int)m_sprite.getTexture()->getSize().y) / 2.0f, 0);
    m_sprite.setPosition(sf::Vector2f(m_piece.getPosition() * BoardBackground::getSquareSize()));

    m_piece.onUpdate([this]() {
        m_sprite.setPosition(sf::Vector2f(m_piece.getPosition() * BoardBackground::getSquareSize()));
    });
}

void PieceRenderer::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(m_sprite, states);
}
