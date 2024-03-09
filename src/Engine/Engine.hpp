#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include "Engine/TextureManager.hpp"

class Engine
{
private:
    TextureManager m_texturesManager;

    Engine();

public:
    static Engine &getInstance();
    const TextureManager &getTexturesManager() const;
};

#endif // ENGINE_H_INCLUDED