#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_ELFR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_ELFR_HPP_

#include "Rank.hpp"

enum MaleElf{
	SERF_ME,
	ARTISAN_ME,
	KNIGHT,
	BARON,
	COUNT,
	DUKE,
	KING
};

enum FemaleElf{
	SELF_FE,
	ARTISAN_FE,
	DAME,
	BARONESS,
	COUNTESS,
	DUCHESS,
	QUEEN
};

class ElfR:public Rank{

	public:

		ElfR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~ElfR();


};
#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_ELFR_HPP_ */
