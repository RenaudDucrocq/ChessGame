#include "Engine.hpp"

Engine::Engine()
{
}

Engine &Engine::getInstance()
{
    static Engine engine;
    return engine;
}

const TextureManager &Engine::getTexturesManager() const
{
    return m_texturesManager;
}
