#include "include/Game.hpp"

void Game::Initialise()
{
  Unit unit1("Jeanne", 'B', 'A', 'A', 'A', 'Q');
  Unit unit2("Okita", 'B', 'B', 'A', 'Q', 'Q');
  Unit unit3("Merlin", 'B', 'A', 'A', 'A', 'Q');
  Unit unit4("Amor", 'B', 'A', 'A', 'Q', 'Q');
  Unit unit5("Scathach", 'B', 'B', 'A', 'Q', 'Q');
  Unit unit6("Jeanne Alter", 'B', 'B', 'A', 'A', 'Q');

  std::vector<Unit>units;
  units.push_back(unit1);
  units.push_back(unit2);
  units.push_back(unit3);
  units.push_back(unit4);
  units.push_back(unit5);
  units.push_back(unit6);

  BattleSystem battleSystem(units);
}