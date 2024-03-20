
#include "Spell.hpp"



Spell::Spell(std::string const& pName,std::string const& pCat,short int pCost,short int pDam,
		float const& pCastT,bool const& pIsL,bool const& pCanL):m_name(pName),m_category(pCat),
		m_cost(pCost),m_damage(pDam),m_castTime(pCastT),m_learned(pIsL),m_canLearn(pCanL){

}

void Spell::learn(){m_learned = true;}

void Spell::cast(){}


std::string Spell::getName()const{return m_name;}
std::string Spell::getCategory()const{return m_category;}
short int Spell::getCost()const{return m_cost;}
short int Spell::getDamage()const{return m_damage;}
float Spell::getCastTime()const{return m_castTime;}
bool Spell::isLearned()const{return m_learned;}
bool Spell::canBeLearn()const{return m_canLearn;}












