# Pandemic

“To practice for global pandemics, we need games.”  
— [Bill Gates, 2015](https://www.ted.com/talks/bill_gates_the_next_outbreak_we_re_not_ready#t-389693)

Pandemic is a cooperative board game where players work together to cure diseases and find cures. This project implements a single-player version of the game’s core mechanics.

## The Board
The game board represents a map of the world with 48 cities, divided into four colors: Blue, Yellow, Black, and Red. Cities are connected, allowing travel between them.

You can view the city connections [here](https://media.wnyc.org/i/1500/900/c/80/1/1537_Pandemic_main.jpg) and refer to the file `cities_map.txt` for city names and connections (optional).

The board is represented by the `Board` class.

## Cards
There are 48 cards, one for each city. City names in code should match those on the map exactly (e.g., `NewYork` for New York) to avoid compilation errors.

## Diseases
Diseases come in four colors matching the city colors. Cities can have disease cubes corresponding to the disease color.

The `Board` class must implement the following methods:

- **Index Operator (`[]`)**: Access or update the number of disease cubes in a city. For example, `board[City::HongKong] = 2` sets two red disease cubes in Hong Kong.
- **Output Operator**: Display the board's state, including:
  - Disease levels in each city
  - Discovered cures
  - Research stations built
- **`is_clean`**: Returns `true` if there are no disease cubes on the board.
- **`remove_cures`**: Removes all discovered cures (for testing purposes only). It does not throw exceptions.

## Player Actions
Players start in a city and receive a number of cards. Each turn, a player can perform one of the following actions:

1. **Drive (`drive`)**: Move to an adjacent city.
2. **Direct Flight (`fly_direct`)**: Move to a city shown on a card in hand, discarding the card.
3. **Charter Flight (`fly_charter`)**: Move to any city by discarding a card of the current city.
4. **Shuttle Flight (`fly_shuttle`)**: Move between cities with research stations.
5. **Build (`build`)**: Build a research station in the current city by discarding the city card.
6. **Discover Cure (`discover_cure`)**: Discover a cure by discarding 5 cards of the same color at a research station.
7. **Treat (`treat`)**: Remove one disease cube from the current city, or all cubes if a cure is discovered.

Actions must update the board state and player’s location. Invalid actions should throw appropriate exceptions.

Additional methods to implement:

- **`role`**: Returns the player’s role for display.
- **`take_card`**: Draws a city card. If the card is already in hand, there is no change.

## Roles

Players have special roles with unique abilities:

1. **Operations Expert (`OperationsExpert`)**: Can build research stations without discarding a card.
2. **Dispatcher (`Dispatcher`)**: Can perform direct flights from a research station without discarding a card.
3. **Scientist (`Scientist`)**: Can discover cures with `n` cards instead of 5 (default `n=4`).
4. **Researcher (`Researcher`)**: Can discover cures in any city.
5. **Medic (`Medic`)**: Removes all disease cubes in the current city when treating, and automatically removes all cubes if a cure is discovered.
6. **Virologist (`Virologist`)**: Can treat diseases in any city with the corresponding city card.
7. **Gene Splicer (`GeneSplicer`)**: Can discover cures using 5 cards of any color.
8. **Field Doctor (`FieldDoctor`)**: Can treat diseases in adjacent cities.
