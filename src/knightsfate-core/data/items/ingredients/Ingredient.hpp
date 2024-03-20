#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_INGREDIENTS_INGREDIENT_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_INGREDIENTS_INGREDIENT_HPP_

#include "../Item.hpp"

enum IngredientEffects{
	HRECOVERY_I,
	MRECOVERY_I,
	SRECOVERY_I,
	MAX_HEALTH_I,
	MAX_MANA_I,
	MAX_STAMINA_I
};

class Ingredient: public Item{

	public:

		Ingredient(IngredientEffects const& pEffects1,IngredientEffects const& pEffects2,
				short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,
				short int const& pID);

		Ingredient(Ingredient const& pIng);

		IngredientEffects getEffects1() const;
		IngredientEffects getEffects2() const;

		void setEff1(IngredientEffects const& pEff);
		void setEff2(IngredientEffects const& pEff);

		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator>(Item const& pOther) const override;
		bool operator<(Item const& pOther) const override;

		~Ingredient();

	private:

		IngredientEffects m_effects1;
		IngredientEffects m_effects2;

};





#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_INGREDIENTS_INGREDIENT_HPP_ */
