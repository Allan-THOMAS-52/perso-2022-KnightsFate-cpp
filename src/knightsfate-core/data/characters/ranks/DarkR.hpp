#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_DARKR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_DARKR_HPP_

#include "Rank.hpp"

enum MaleDark{
	COMMONER_MD,
	APPRENTICE_MD,
	ARTISAN_MD,
	DARKKNIGHT,
	SHADOWCASTER_MD,
	SHADOWLORD,
	ARCHON_MD,
	HIGHARCHON_MD
};

enum FemaleDark{
	COMMONER_FD,
	APPRENTICE_FD,
	ARTISAN_FD,
	DARKDAME,
	SHADOWCASTER_FD,
	SHADOWLADY,
	ARCHON_FD,
	HIGHARCHON_FD
};

class DarkR:public Rank{

	public:

		DarkR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~DarkR();


};




#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_DARKR_HPP_ */
