#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Researcher : public player
    {
        private:

        public: 
        Researcher(Board board, City city) : Player(board, city){};
    };
}