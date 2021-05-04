#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class OperationsExpert : public player
    {
        private:

        public: 
        OperationsExpert(Board board, City city) : Player(board, city){};
    };
}