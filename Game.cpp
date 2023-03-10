#include "Game.hpp"

void Game::Initialise()
{
  Unit unit1("Jeanne", 'B', 'A', 'A', 'A', 'Q');
  Unit unit2("Okita", 'B', 'B', 'A', 'Q', 'Q');
  Unit unit3("Merlin", 'B', 'A', 'A', 'A', 'Q');

  BattleSystem battleSystem(unit1, unit2, unit3);
}