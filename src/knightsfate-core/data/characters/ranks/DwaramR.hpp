#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_DWARAMR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_DWARAMR_HPP_

#include "Rank.hpp"

enum Dwaram{
	COMMONER,
	APPRENTICE,
	ARTISAN,
	MASTER,
	COUNCILOR,
	CHANCELLOR,
	HIGHENCHANTER
};

class DwaramR:public Rank{

	public:

		DwaramR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~DwaramR();


};




#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_DWARAMR_HPP_ */
