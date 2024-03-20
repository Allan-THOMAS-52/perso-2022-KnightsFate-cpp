#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_MOROYANR_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_MOROYANR_HPP_

#include "Rank.hpp"

enum MaleMoroyan{
	COMMONER_MM,
	ARTISAN_MM,
	JISHA_MM,
	KANNUSHI_MM,
	GOKERIN_MM,
	HIGHSMITH_MM,
	DAIMYO_MM,
	EMPEROR
};

enum FemaleMoroyan{
	COMMONER_FM,
	ARTISAN_FM,
	JISHA_FM,
	KANNUSHI_FM,
	GOKERIN_FM,
	HIGHSMITH_FM,
	DAIMYO_FM,
	EMPERESS
};

class MoroyanR:public Rank{

	public:

		MoroyanR(Gender const& pGender,Race const& pRace);
		std::string getRank();
		void setRank(Gender const& pGender,Race const& pRace,
							std::string const& pRank);

		~MoroyanR();


};

#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_MOROYANR_HPP_ */
