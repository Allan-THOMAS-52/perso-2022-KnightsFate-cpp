
#include "ThenonR.hpp"

ThenonR::ThenonR(Gender const& pGender,Race const& pRace):Rank(pGender,pRace){
	switch(m_race){
		case ELF:m_rank="Serf";break;
		default:m_rank="Commoner";break;
	}
}

void ThenonR::setRank(Gender const& pGender,Race const& pRace,std::string const& pRank){

}

ThenonR::~ThenonR(){}
