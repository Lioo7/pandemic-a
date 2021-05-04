#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class GeneSplicer : public player
    {
        private:

        public: 
        GeneSplicer(Board board, City city) : Player(board, city){};
    };
}