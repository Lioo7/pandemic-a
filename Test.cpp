#include "doctest.h"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Scientist.hpp"
#include "Researcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "GeneSplicer.hpp"
#include "FieldDoctor.hpp"
#include <iostream>
using namespace std;
using namespace pandemic;

TEST_CASE("OperationsExpert")
{
    Board board;                    // Initialize an empty board (with 0 disease cubes in any city).
    board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
    board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
    board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
    board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
    board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago

    OperationsExpert player{board, City::Atlanta}; // initialize an OperationsExpert on the given board, in Atlanta.
    player.take_card(City::Johannesburg)
        .take_card(City::Khartoum)
        .take_card(City::SaoPaulo)
        .take_card(City::BuenosAires)
        .take_card(City::HoChiMinhCity);

    CHECK(board[City::Kinshasa] == 2);
    CHECK(board[City::MexicoCity] == 3);
    CHECK(board[City::HoChiMinhCity] == 1);
    CHECK(board[City::Chicago] == 1);
    CHECK(board.is_clean() == 0); // is not clean
    board.remove_cures();         // cleans the board
    CHECK(board.is_clean() == 1); // clean

    board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
    board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
    board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
    board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
    board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago

    CHECK(player.role() == string("OperationsExpert"));
    CHECK_THROWS_AS(player.treat(City::Taipei), std::invalid_argument);
    CHECK_THROWS_AS(player.drive(City::Madrid), std::invalid_argument);
    CHECK_THROWS_AS(player.fly_charter(City::Seoul), std::invalid_argument);
    CHECK_THROWS_AS(player.fly_shuttle(City::Chicago), std::invalid_argument);
    CHECK_THROWS_AS(player.discover_cure(Color::Yellow), std::invalid_argument);
}

TEST_CASE("Dispatcher")
{
    Board board;                    // Initialize an empty board (with 0 disease cubes in any city).
    board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
    board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
    board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
    board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
    board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago

    Dispatcher player{board, City::Atlanta}; // initialize a Dispatcher on the given board, in Atlanta.
    player.take_card(City::Johannesburg)
        .take_card(City::Khartoum)
        .take_card(City::SaoPaulo)
        .take_card(City::BuenosAires)
        .take_card(City::HoChiMinhCity);

    CHECK(board[City::Kinshasa] == 2);
    CHECK(board[City::MexicoCity] == 3);
    CHECK(board[City::HoChiMinhCity] == 1);
    CHECK(board[City::Chicago] == 1);
    CHECK(board.is_clean() == 0); // is not clean
    board.remove_cures();         // cleans the board
    CHECK(board.is_clean() == 1); // clean

    board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
    board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
    board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
    board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
    board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago

    CHECK(player.role() == string("OperationsExpert"));
    CHECK_THROWS_AS(player.treat(City::Taipei), std::invalid_argument);
    CHECK_THROWS_AS(player.drive(City::Madrid), std::invalid_argument);
    CHECK_THROWS_AS(player.fly_charter(City::Seoul), std::invalid_argument);
    CHECK_THROWS_AS(player.fly_shuttle(City::Chicago), std::invalid_argument);
    CHECK_THROWS_AS(player.discover_cure(Color::Yellow), std::invalid_argument);
}
