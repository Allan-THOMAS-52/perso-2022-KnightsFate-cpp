
#include "Ingredient.hpp"

Ingredient::Ingredient(IngredientEffects const& pEffects1,IngredientEffects const& pEffects2,
		short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,
		short int const& pID):
		Item(pVal,INGREDIENT,pWeight,pName,pID),m_effects1(pEffects1),m_effects2(pEffects2){

}

Ingredient::Ingredient(Ingredient const& pIng):Item(pIng){
	m_effects1=pIng.m_effects1;
	m_effects2=pIng.m_effects2;
}

IngredientEffects Ingredient::getEffects1() const{return m_effects1;}
IngredientEffects Ingredient::getEffects2() const{return m_effects2;}

void Ingredient::setEff1(IngredientEffects const& pEff){m_effects1=pEff;}
void Ingredient::setEff2(IngredientEffects const& pEff){m_effects2=pEff;}

bool Ingredient::operator==(Item const& pOther) const {
	 try{
	    // Try to downcast to Armor using dynamic_cast
		Ingredient const& otherIngredient = dynamic_cast<Ingredient const&>(pOther);
		return  m_ID == otherIngredient.m_ID;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool Ingredient::operator!=(Item const& pOther) const {return !(*this==pOther);}
bool Ingredient::operator>(Item const& pOther) const{return false;}
bool Ingredient::operator<(Item const& pOther) const{return false;}

Ingredient::~Ingredient(){}
