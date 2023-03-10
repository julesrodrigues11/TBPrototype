#include "Unit.hpp"

Unit::Unit(std::string name, char card1, char card2, char card3, char card4, char card5)
{
  this->setName(name);
  this->setDeck(card1, card2, card3, card4, card5);

  std::cout<<"Unit ";
  std::cout<<this->getName()<<" has been created with deck ";
  this->getDeck();
  std::cout<<std::endl;
}

std::string Unit::getName()
{
  return Unit::unitName;
}

void Unit::setName(std::string name)
{
  Unit::unitName = name;
}

void Unit::getDeck()
{
  std::cout<<this->cardDeck[0]<<this->cardDeck[1]<<this->cardDeck[2]<<this->cardDeck[3]<<this->cardDeck[4]<<std::endl;
}

void Unit::setDeck(char card1, char card2, char card3, char card4, char card5)
{
  cardDeck[0]=card1;
  cardDeck[1]=card2;
  cardDeck[2]=card3;
  cardDeck[3]=card4;
  cardDeck[4]=card5;
}