#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Unit.hpp"

class BattleSystem
{
private:
  std::vector<Unit>unitsInBattle;
  std::vector<Unit>activeUnits;

  std::vector<std::string>cardCollection;
  std::vector<std::string>currentHand;

  bool turnReset=false;

public:
  BattleSystem(std::vector<Unit>units);

  void setUnitsInBattle(std::vector<Unit>units);

  void setCardCollection();
  void getCardCollection();

  void generateHand();
  void popCard();
};