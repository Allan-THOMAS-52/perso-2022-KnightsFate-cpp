
#include "Rank.hpp"

Rank::Rank(Gender const& pGender,Race const& pRace):m_gender(pGender),m_race(pRace){
	switch(m_race){
		case ELF:m_rank="Serf";break;
		default:m_rank="Commoner";break;
	}
}

std::string Rank::getRank()const{return m_rank;}

void Rank::setRank(Gender const& pGender,Race const& pRace,std::string const& pRank){

}

Rank::~Rank(){}
