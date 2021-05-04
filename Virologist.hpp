#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Virologist : public player
    {
        private:

        public: 
        Virologist(Board board, City city) : Player(board, city){};
    };
}