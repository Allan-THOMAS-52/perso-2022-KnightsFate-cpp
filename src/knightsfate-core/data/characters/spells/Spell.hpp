#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SPELLS_SPELL_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SPELLS_SPELL_HPP_

#include <string>

enum SpellCategory{
	AEROMANCY,
	ABJURATION,
	DIVINATION,
	EVOCATION,
	ILLUSION,
	HYDROMANCY,
	GEOMANCY,
	NECROMANCY,
	PYROMANCY,
	TRAMSUTATION,
};


class Spell{

	public:

		Spell(std::string const& pName,std::string const& pCat,short int pCost,short int pDam,
				float const& pCastT,bool const& pIsL,bool const& pCanL);

		void learn();

		virtual void cast()=0;

		std::string getName()const;
		std::string getCategory()const;
		short int getCost()const;
		short int getDamage()const;
		float getCastTime()const;
		bool isLearned()const;
		bool canBeLearn()const;

		virtual ~Spell()=0;

	protected:

		std::string m_name;
		std::string m_category;
		short int m_cost;
		short int m_damage;
		float m_castTime;
		bool m_learned;
		bool m_canLearn;


};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SPELLS_SPELL_HPP_ */
