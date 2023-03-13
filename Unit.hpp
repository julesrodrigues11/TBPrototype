#pragma once

#include <string>
#include <iostream>

class Unit
{
private:
  std::string unitName;
  bool isActive = false;
  //char cardDeck[5];

public:
  //char array for character card deck
  char cardDeck[5];

  //Constructor
  Unit(std::string name, char card1, char card2, char card3, char card4, char card5);
  //Setter and getter for unit name
  std::string getName();
  void setName(std::string name);

  void setActive();
  bool getActive();

  //Setter and getter for unit deck
  void getDeck();
  void setDeck(char card1, char card2, char card3, char card4, char card5);
};