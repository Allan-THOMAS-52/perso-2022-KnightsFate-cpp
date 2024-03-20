#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SPELLS_ABJURATIONS_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SPELLS_ABJURATIONS_HPP_

#include "Spell.hpp"

class AbjurationS:public Spell{

	public:

		AbjurationS(std::string const& pName,std::string const& pCat,
			short int pCost,short int pDam,float const& pCastT,
			bool const& pIsL,bool const& pCanL,Player const& pPlayer);

		void cast();


	private:



};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SPELLS_ABJURATIONS_HPP_ */
