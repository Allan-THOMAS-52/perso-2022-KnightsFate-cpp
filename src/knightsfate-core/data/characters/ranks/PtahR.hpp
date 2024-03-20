#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_PTAHR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_PTAHR_HPP_

#include "Rank.hpp"

enum MalePtah{
	COMMONER_MP,
	ARTISAN_MP,
	MUNJI,
	QADI,
	WALI,
	SULTAN,
	EMIR
};

enum FemalePtah{
	COMMONER_FP,
	ARTISAN_FP,
	MUNKA,
	QADIYAH,
	WALIYAH,
	SULATANA,
	EMIRA
};

class PtahR:public Rank{

	public:

		PtahR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~PtahR();


};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_PTAHR_HPP_ */
