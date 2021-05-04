#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class FieldDoctor : public player
    {
        private:

        public: 
        FieldDoctor(Board board, City city) : Player(board, city){};
    };
}