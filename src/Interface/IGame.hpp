#ifndef IGAME_H_INCLUDED
#define IGAME_H_INCLUDED

#include <vector>
#include "IBoard.hpp"

class IGame
{
private:
    
public:
    virtual const IBoard &getBoard() const = 0;
};

#endif //IGAME_H_INCLUDED