#include <iostream>
#inclide "City.hpp"

namespace pandemic
{
    class Board
    {
    private:
    public:
        Board();
        // This function gets city name and returns the level of illness in the city
        int &operator[](City city);
        // This funciton display the status of the board
        friend ostream &operator<<(ostream &output, const Board &board);
        // This function returns true iff the board is clean(no illness cubes)
        bool is_clean();
        // This function removes all the cures that discovered from the board
        void remove_cures();
    };
}
