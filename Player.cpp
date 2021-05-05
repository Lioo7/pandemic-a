#include "Player.hpp"

namespace pandemic
{
        // This function drives the player from the current city to the nearby city 
        Player& Player::drive(City nearby_city) {return *this;}
        // This funciton takes the player from the current city to the given city 
        Player& Player::fly_direct(City given_city){return *this;}
        // This funciton takes the player from the current city to any city in the board
        Player& Player::fly_charter(City any_city){return *this;}
        // This function takes the player to another city with a research station iff the current city has one
        Player& Player::fly_shuttle(City research_city){return *this;}
        // This function builds a research station in the current city 
        Player& Player::build(){return *this;}
        // This function discovers a cure for the disease according to the given color
        Player& Player::discover_cure(Color disease_color){return *this;}
        // This function reduces the level of illness in the current city by one
        Player& Player::treat(City city){return *this;}
        // This function returns the role of the player
        string Player::role(){return "null";}
        // This function adds the given card to this player 
        Player& Player::take_card(City city){return *this;}
}