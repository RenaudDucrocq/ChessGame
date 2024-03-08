#ifndef BOARDMOCK_H_INCLUDED
#define BOARDMOCK_H_INCLUDED

#include "Interface/IBoard.hpp"
#include "Client/Mock/PieceMock.hpp"

class BoardMock : public IBoard
{
private:
    std::vector<IPiece *> m_pieces;

public:
    BoardMock();
    ~BoardMock();
    virtual std::vector<IPiece *> getPieces() const;
};

#endif // BOARDMOCK_H_INCLUDED