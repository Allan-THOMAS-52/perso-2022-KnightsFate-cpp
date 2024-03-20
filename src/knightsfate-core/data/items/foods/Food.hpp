#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_FOODS_FOOD_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_FOODS_FOOD_HPP_

#include "../Item.hpp"

#include <string>
#include <memory>

enum FoodEffects{
	HRECOVERY_F,
	MRECOVERY_F,
	SRECOVERY_F,
	MAX_HEALTH,
	MAX_MANA,
	MAX_STAMINA
};

enum FoodType{
	BREAD,
	STEW,
	ROAST,
	CAKE,
	PIE,
	CHEESE,
	RICE,
	POTATOE,
	MASHED_POTATOES,
	FILET,
	SKEWER,
	HAUNCH,
	SALAD,
	FRIES,
	PRESERVES,
	RHUM,
	BEER,
	WINE,
	WHISKEY,
	GROG,
	TEA,
	TONIC,
	SMOOTHIE,
	INFUSION,
	WATER,
	SPARKING_WATER
};

class Food: public Item{

	public:

		Food(float const& pTime,float const& pDur,float const& pFEff,FoodEffects const& pEffects,FoodType const& pFoodType,
			 short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,short int const& pID);

		Food(Food const& pFood);

		float getTimeUse() const;
		float getDuration() const;
		float getFEffect() const;
		FoodEffects getEffects() const;
		FoodType getFoodType() const;

		void setDuration(float mDuration);
		void setEffects(FoodEffects mEffects);
		void setFEffect(float mFEffect);
		void setFoodType(FoodType mFoodType);
		void setTimeToUse(float mTimeToUse);


		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator<(Item const& pOther)  const override;
		bool operator>(Item const& pOther)  const override;

		~Food();

	private:

		float m_timeToUse;
		float m_duration;
		float m_fEffect;
		FoodEffects m_effects;
		FoodType m_foodType;

};



#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_FOODS_FOOD_HPP_ */
