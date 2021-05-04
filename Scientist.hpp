#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Scientist : public player
    {
        private:

        public: 
        Scientist(Board board, City city) : Player(board, city){};
    };
}