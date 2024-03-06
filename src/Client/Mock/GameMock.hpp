#ifndef GAMEMOCK_H_INCLUDED
#define GAMEMOCK_H_INCLUDED

#include "Interface/IGame.hpp"
#include "Client/Mock/BoardMock.hpp"

class GameMock: public IGame
{
private:
    BoardMock m_board;
public:
    GameMock();
    virtual const IBoard &getBoard() const;
};

#endif // GAMEMOCK_H_INCLUDED