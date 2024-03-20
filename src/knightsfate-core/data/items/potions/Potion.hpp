#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_POTIONS_POTION_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_POTIONS_POTION_HPP_

#include "../Item.hpp"
#include <string>

enum PotionEffects{
	ABJURATOR,
	ABSORBING,
	AEROMANCER,
	ARCHERY,
	ARTISAN,
	BARGAIN,
	BERSERKER,
	CAMOUFLAGE,
	CELERITY,
	CONJURATOR,
	COUNTERFEIT,
	CURE_DISEASE,
	CURE_POISON,
	CURE_PARALYSIS,
	DIVINATOR,
	ENCHANTER,
	EVOCATOR,
	GEOMANCER,
	GRANDILOQUENCE,
	HEALTH_P,
	HUNTER,
	HYDROMANCER,
	ILLUSIONER,
	KNIGHT,
	LASTING_POTENCY,
	LEVITATION,
	LOCKPICKING,
	MANA_P,
	NECROMANCER,
	NOISE_CANCELLING,
	PICKPOCKETING,
	PUGILIST,
	PYROMANCER,
	REGENERATION,
	SHAMAN,
	SKIRMISHER,
	STAMINA_P,
	STRENGTH,
	TRANSMUTATOR,
	VIGOR,
	WATERBREATHING,
	WARRIOR
};

class Potion: public Item{

	public:

		Potion(PotionEffects const& pEffects,short int const& pVal, ItemType const& pType, float const& pWeight,
				std::string const& pName,short int const& pID);

		Potion(Potion const& pOt);

		//void info() const;

		float getDuration() const;
		float getFEffect() const;
		PotionEffects getEffects() const;

		void setDuration(float mDuration);
		void setEffects(PotionEffects mEffects);
		void setFEffect(float mFEffect);

		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator<(Item const& pOther)  const override;
		bool operator>(Item const& pOther)  const override;

		~Potion();

	private:

		float m_duration;
		float m_fEffect;
		PotionEffects m_effects;

};


#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_POTIONS_POTION_HPP_ */
