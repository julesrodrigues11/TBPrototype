#pragma once

#include <string>
#include <iostream>

class Unit
{
private:
  std::string unitName;
  //char cardDeck[5];

public:
  char cardDeck[5];
  Unit(std::string name, char card1, char card2, char card3, char card4, char card5);
  std::string getName();
  void setName(std::string name);

  void getDeck();
  void setDeck(char card1, char card2, char card3, char card4, char card5);
};