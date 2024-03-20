
#include "PtahR.hpp"

PtahR::PtahR(Gender const& pGender,Race const& pRace):Rank(pGender,pRace){
	switch(m_race){
		case ELF:m_rank="Serf";break;
		default:m_rank="Commoner";break;
	}
}

void PtahR::setRank(Gender const& pGender,Race const& pRace,std::string const& pRank){

}

PtahR::~PtahR(){}
