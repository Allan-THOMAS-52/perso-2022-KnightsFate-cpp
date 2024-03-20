
#include "Item.hpp"

Item::Item(short int const& pVal, ItemType const& pType, float const& pWeight, std::string const& pName,short int const& pID):
		m_value(pVal),m_itemType(pType),m_weight(pWeight),m_name(pName),m_ID(pID){}


Item::Item(Item const& pItem){
	m_value=pItem.m_value;
	m_itemType=pItem.m_itemType;
	m_weight=pItem.m_weight;
	m_name=pItem.m_name;
	m_ID=pItem.m_ID;
}

float Item::getValue() 		const{ return m_value;	}
ItemType Item::getType() 	const{ return m_itemType; }
float Item::getWeight() 	const{ return m_weight; }
std::string Item::getName() const{ return m_name; }
short int Item::getID()		const{ return m_ID;	}

void Item::setValue(short int const& pVal){m_value=pVal;}
void Item::setWeight(float const& pWeight){m_weight=pWeight;}
void Item::setName(std::string const& pName){m_name=pName;}

bool Item::operator==(Item const& pOther) const{
	return this->m_ID == pOther.m_ID;
}

bool Item::operator!=(Item const& pOther) const{
	return !(*this == pOther);
}

bool Item::operator<(Item const& pOther) const{return false;}

bool Item::operator>(Item const& pOther) const{return false;}

Item::~Item(){}
