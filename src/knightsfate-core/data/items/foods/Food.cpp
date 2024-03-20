
#include "Food.hpp"

Food::Food(float const& pTime,float const& pDur,float const& pFEff,FoodEffects const& pEffects,FoodType const& pFoodType,
		 short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,short int const& pID):
	Item(pVal,pType,pWeight,pName,pID),m_timeToUse(pTime),m_duration(pDur),m_fEffect(0.0),m_effects(pEffects),m_foodType(pFoodType){

}

Food::Food(Food const& pFood):Item(pFood){
	 m_timeToUse=pFood.m_timeToUse;
	 m_duration=pFood.m_duration;
	 m_fEffect=pFood.m_fEffect;
	 m_effects=pFood.m_effects;
	 m_foodType=pFood.m_foodType;
}

float Food::getTimeUse() const{ return m_timeToUse;}
float Food::getDuration() const{ return m_duration;}
float Food::getFEffect() const{return m_fEffect;}
FoodEffects Food::getEffects() const{ return m_effects;}
FoodType Food::getFoodType() const{return m_foodType;}

void Food::setDuration(float mDuration){m_duration = mDuration;}
void Food::setEffects(FoodEffects mEffects){m_effects = mEffects;}
void Food::setFEffect(float mFEffect){m_fEffect = mFEffect;}
void Food::setFoodType(FoodType mFoodType){m_foodType = mFoodType;}
void Food::setTimeToUse(float mTimeToUse){m_timeToUse = mTimeToUse;}

bool Food::operator==(Item const& pOther) const {
	 try{
		// Try to downcast to Armor using dynamic_cast
		Food const& otherFood = dynamic_cast<Food const&>(pOther);
		return	m_ID == otherFood.m_ID &&
				m_effects == otherFood.m_effects &&
				m_foodType == otherFood.m_foodType &&
				m_timeToUse == otherFood.m_timeToUse &&
				m_duration == otherFood.m_duration &&
				m_fEffect == otherFood.m_fEffect &&
				m_value == otherFood.m_value;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool Food::operator!=(Item const& pOther) const {return !(*this==pOther);}
bool Food::operator<(Item const& pOther)  const {return false;}
bool Food::operator>(Item const& pOther)  const {return false;}


Food::~Food(){}

