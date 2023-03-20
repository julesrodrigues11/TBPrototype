#include "include/BattleSystem.hpp"

BattleSystem::BattleSystem(std::vector<Unit>units)
{
  int count = 0;
  setUnitsInBattle(units);
  std::cout<<"Battle System has been created with ";

  //For loop that iterates through the vector of units
  for(auto it=unitsInBattle.begin(); it!=unitsInBattle.end(); ++it)
  {
    //Getting the name of the current unit
    std::cout << (*it).getName();
    //Check if the element that follows the current element is the last element
    if(std::next(it)!=unitsInBattle.end())
    {
      std::cout <<  ", ";
    }
    //Add the first three units to the active units vector and increment counter
    if(count < 3)
    {
      activeUnits.push_back((*it));
    }
    count++;
  }
  std::cout << std::endl << std::endl;

  setCardCollection();

  generateHand();
}

void BattleSystem::setUnitsInBattle(std::vector<Unit>units)
{
  unitsInBattle = units;
}

void BattleSystem::setCardCollection()
{
  for(auto it=this->activeUnits.begin(); it!=this->activeUnits.end(); ++it)
    {
        for(int i = 0; i < 5; i++)
        {
          std::string temp = (*it).getName();
          temp += (*it).cardDeck[i];
          this->cardCollection.push_back(temp);
          //std::cout<<(*it).getName()<<(*it).cardDeck[i]<<std::endl;
        }
    }
}

void BattleSystem::getCardCollection()
{
  for(auto it=this->cardCollection.begin(); it!=this->cardCollection.end(); ++it)
    {
      std::cout<<*it<<std::endl;
    }
}

void BattleSystem::popCard()
{
  srand((int)time(0));
  
  //std::cout<<this->cardCollection.size()<<std::endl; //Debugging Purposes Only
  int indexToPop = rand()%this->cardCollection.size();
  
  //std::cout<<this->cardCollection[indexToPop]<<std::endl; //Debugging Purposes Only
  this->currentHand.push_back(cardCollection[indexToPop]);
  
  this->cardCollection.erase(this->cardCollection.begin()+indexToPop);
  //std::cout<<this->cardCollection.size()<<std::endl; //Debugging Purposes Only
  
  //getCardCollection(); //Debugging Purposes Only
}

void listDeck(std::vector<std::string>deck)
{
  for(int i=0;i<deck.size();i++)
    {
      std::cout<<deck[i];
      if(i!=deck.size()-1)
        std::cout<<", ";
      else 
        std::cout<<std::endl<<std::endl;
    }
}

void BattleSystem::generateHand()
{
  turnReset = false;
  for(int i = 0; i < activeUnits.size(); i++)
  {
    std::cout << "Turn " << i + 1 << std::endl;
    for(int i = 0; i < 5; i++)
    {
      popCard();
    }
    listDeck(this->currentHand);

    if(this->cardCollection.size() == 0)
      turnReset = true;
    
    this->currentHand.clear();
  }
}