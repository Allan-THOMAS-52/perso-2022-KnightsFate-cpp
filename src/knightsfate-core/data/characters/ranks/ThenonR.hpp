#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_THENONR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_THENONR_HPP_

#include "Rank.hpp"

enum Thenon{
	COMMONER,
	ARTISAN,
	BIOLOGIST,
	ENGINEER,
	ARCHIVIST,
	INNOVATOR,
	MAYOR,
	GOVERNOR,
	AMBASSADOR,
	CHIEFBIOLOGIST,
	CHIEFENGINEER,
	CHIEFARCHIVIST,
	CHIEFINNOVATOR
};

class ThenonR:public Rank{

	public:

		ThenonR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~ThenonR();


};

#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_THENONR_HPP_ */
