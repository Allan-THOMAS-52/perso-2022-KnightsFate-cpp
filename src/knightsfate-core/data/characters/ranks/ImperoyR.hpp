#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_IMPEROYR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_IMPEROYR_HPP_

#include "Rank.hpp"

enum MaleImperoy{
	COMMONER_MI,
	TECHNICIAN_MI,
	WARLORD,
	GOVERNOR_MI,
	INQUISITOR_MI,
	PRIMARCH_MI,
	EMPEROR
};

enum FemaleImperoy{
	COMMONER_FI,
	TECHNICIAN_FI,
	WARLADY,
	GOVERNOR_FI,
	INQUISITOR_FI,
	PRIMARCH_FI,
	EMPERESS
};

class ImperoyR:public Rank{

	public:

		ImperoyR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~ImperoyR();


};
#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_IMPEROYR_HPP_ */
