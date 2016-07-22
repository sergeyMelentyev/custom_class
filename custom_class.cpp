//
// Created by Melentyev on 22.07.16.
//

#include "custom_class.h"


/*** SUPER CLASS ***/
class ChessBoard {
    public:
        ChessBoard();                                                   // class constructor
        ChessBoard& operator= (const ChessBoard& other);                // operator overloading (assign)
        ~ChessBoard();                                                  // class destructor
        virtual void any_method_name() = 0;                             // method must be implemented in subclass
    private:
        int _move_count;
        int _value_count;
};

ChessBoard::ChessBoard():_move_count(0), _value_count(0) {              // class initializing
    // with list values
}
ChessBoard& ChessBoard::operator=(const ChessBoard &other) {            // operator overloading (assign)
    if (this == &other)
        return *this;
    // logic here
}
ChessBoard::~ChessBoard() {                                             // class destructor
    // logic here
}


/*** CHILD CLASS ***/
class ChessFigure: public ChessBoard {                                  // inheritance example
    public:
        virtual void any_method_name();                                 // inherited virtual method declaration
};
void ChessFigure::any_method_name() {                                   // inherited virtual method implementation
    // logic here
}
