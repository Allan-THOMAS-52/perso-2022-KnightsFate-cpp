#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_SCROLLS_SCROLL_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_SCROLLS_SCROLL_HPP_

#include "../Item.hpp"

enum ScrollEffects{
	HRECOVERY_S,
	MRECOVERY_S,
	SRECOVERY_S,
	LEVITATION_S,
	FIRE_EXPLOSION_S
	//...
};

class Scroll: public Item{

	public:

		Scroll(float const& pCastT, float const& pDur,float const& pFEff,ScrollEffects const& pEffects,
			 short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,short int const& pID);

		Scroll(Scroll const& pScro);

		void info() const;

		float getCastDur() const;
		float getDuration() const;
		float getFEffect() const;
		ScrollEffects getEffects() const;

		void setCastDuration(float mCastDuration);
		void setDuration(float mDuration);
		void setEffects(ScrollEffects mEffects);
		void setFEffect(float mFEffect);

		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator<(Item const& pOther)  const override;
		bool operator>(Item const& pOther)  const override;

		~Scroll();


	private:

		float m_castDuration;
		float m_duration;
		float m_fEffect;
		ScrollEffects m_effects;

};



#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_SCROLLS_SCROLL_HPP_ */
