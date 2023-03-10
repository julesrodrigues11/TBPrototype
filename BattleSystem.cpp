#include "BattleSystem.hpp"

BattleSystem::BattleSystem(Unit unit1, Unit unit2, Unit unit3)
{
  setUnitsInBattle(unit1, unit2, unit3);
  std::cout<<"Battle System has been created with ";
  std::cout<<unit1.getName()<<", "<<unit2.getName()<<" and "<<unit3.getName()<<std::endl<<std::endl;

  setCardCollection();

  generateHand();
}

void BattleSystem::setUnitsInBattle(Unit unit1, Unit unit2, Unit unit3)
{
  unitsInBattle.push_back(unit1);
  unitsInBattle.push_back(unit2);
  unitsInBattle.push_back(unit3);
}

void BattleSystem::setCardCollection()
{
  for(auto it=this->unitsInBattle.begin(); it!=this->unitsInBattle.end(); ++it)
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
  turnReset=false;
  for(int i = 0; i < 3; i++)
  {
    std::cout<<"Turn "<<i+1<<std::endl;
    for(int i = 0; i < 5; i++)
    {
      popCard();
    }
    listDeck(this->currentHand);
    
    if(this->cardCollection.size()==0)
      turnReset=true;
    
    this->currentHand.clear();
  }
}