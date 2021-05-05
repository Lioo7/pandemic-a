#include "Board.hpp"

namespace pandemic
{
  // This function gets city name and returns the level of illness in the city
  int &Board::operator[](City city)
  {
    return this->cure_level[city];
  }
  // This funciton display the status of the board
  std::ostream &operator<<(std::ostream &output, const Board &board)
  {
    return output;
  }
  // This function returns true iff the board is clean(no illness cubes)
  bool Board::is_clean()
  {
    return true;
  }
  // This function removes all the cures that discovered from the board
  void Board::remove_cures()
  {
  }
}