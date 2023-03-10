#include "Game.hpp"

void Game::Initialise()
{
  Unit unit1("Jeanne", 'B', 'A', 'A', 'A', 'Q');
  Unit unit2("Okita", 'B', 'B', 'A', 'Q', 'Q');
  Unit unit3("Merlin", 'B', 'A', 'A', 'A', 'Q');

  std::vector<Unit>units;
  units.push_back(unit1);
  units.push_back(unit2);
  units.push_back(unit3);

  BattleSystem battleSystem(units);
}