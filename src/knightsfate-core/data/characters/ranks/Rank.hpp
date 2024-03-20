#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_RANK_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANKS_RANK_HPP_

#include <string>

#include "../utils/RaceGender.hpp"

class Rank{

	public:

		Rank(Gender const& pGender,Race const& pRace);
		virtual std::string getRank()const;
		virtual void setRank(Gender const& pGender,Race const& pRace,std::string const& pRank)=0;

		virtual ~Rank()=0;

	protected:

		Gender m_gender;
		Race m_race;
		std::string m_rank;
};

#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_RANK_HPP_ */
