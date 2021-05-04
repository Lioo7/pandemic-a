#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Dispatcher : public player
    {
        private:

        public: 
        Dispatcher(Board board, City city) : Player(board, city){};
    };
}