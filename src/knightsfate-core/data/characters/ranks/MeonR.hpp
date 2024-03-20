#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_MEONR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_MEONR_HPP_

#include "Rank.hpp"

enum  Meon{
	COMMONER,
	INVESTOR,
	MAGNATE,
	OLIGARCH,
	MERCHANTMASTER
};

class MeonR:public Rank{

	public:

		MeonR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~MeonR();


};
#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_MEONR_HPP_ */
