#pragma once
#include "City.hpp"
#include <iostream>
#include <fstream>
#include <map>

namespace pandemic
{
    class Board
    {
    private:
        std::map<City, int> cure_level;

    public:
        Board() {}
        // This function gets city name and returns the level of illness in the city
        int &operator[](City city);
        // This funciton display the status of the board
        friend std::ostream &operator<<(std::ostream &output, const Board &board);
        // This function returns true iff the board is clean(no illness cubes)
        static bool is_clean();
        // This function removes all the cures that discovered from the board
        void remove_cures();
    };
}