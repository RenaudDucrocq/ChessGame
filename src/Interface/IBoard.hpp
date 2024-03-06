#ifndef IBOARD_H_INCLUDED
#define IBOARD_H_INCLUDED

#include <vector>
#include "IPiece.hpp"

class IBoard
{
private:
    
public:
    virtual std::vector<IPiece> getPieces() = 0;
};

#endif //IBOARD_H_INCLUDED