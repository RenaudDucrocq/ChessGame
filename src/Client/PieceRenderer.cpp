#include "PieceRenderer.hpp"   

PieceRenderer::PieceRenderer(IPiece &piece): m_piece(piece)
{
    m_sprite.setTexture(Engine::getInstance().getTexturesManager().getPieceTexture(IPiece::Color::BLACK, IPiece::Type::KING));
    m_sprite.setOrigin(((int)m_sprite.getTexture()->getSize().x - (int)m_sprite.getTexture()->getSize().y) / 2.0f, 0);
    m_sprite.setPosition(sf::Vector2f(m_piece.getPosition() * BoardBackground::getSquareSize()));

    m_piece.setUpdateCallback([this]() {
        m_sprite.setPosition(sf::Vector2f(m_piece.getPosition() * BoardBackground::getSquareSize()));
    });
}

void PieceRenderer::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(m_sprite, states);
}
