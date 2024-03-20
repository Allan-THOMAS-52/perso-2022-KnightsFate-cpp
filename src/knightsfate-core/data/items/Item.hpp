#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_ITEM_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_ITEM_HPP_

#include <string>
#include <memory>

enum ItemType{
	ARMOR, //UNIQUE
	FOOD,  //UNIQUE
	INGREDIENT, //BULK
	JEWEL, //UNIQUE
	OTHERS, //BULK
	POTIONS, //UNIQUE
	SCROLL, //BULK
	WEAPON //UNIQUE
};

class Item{

	public:

		Item(short int const& pVal, ItemType const& pType, float const& pWeight,
			std::string const& pName,short int const& pID);

		Item(Item const& pItem);

		virtual float getValue() const;
		virtual ItemType getType() const;
		virtual float getWeight() const;
		virtual std::string getName() const;
		virtual short int getID() const;

		virtual void setValue(short int const& pVal);
		virtual void setWeight(float const& pWeight);
		virtual void setName(std::string const& pName);

		virtual bool operator==(Item const& pOther) const =0;
		virtual bool operator!=(Item const& pOther) const =0;
		virtual bool operator>( Item const& pOther) const =0;
		virtual bool operator<( Item const& pOther) const =0;

		virtual ~Item() =0;

	protected:

		short int m_value;
		ItemType m_itemType;
		float m_weight;
		std::string m_name;
		short int m_ID;

};



#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_OBJECTS_ITEM_HPP_ */
