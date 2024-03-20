#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_OTHERS_OTHERITEM_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_OTHERS_OTHERITEM_HPP_

#include "../Item.hpp"

class OtherItem:public Item{

	public:

		OtherItem(short int const& pVal, float const& pWeight,
				std::string const& pName,short int const& pID);

		OtherItem(OtherItem const& pItem);

		void info() const;

		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator>(Item const& pOther) const override;
		bool operator<(Item const& pOther) const override;

		~OtherItem();

	private:




};


#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_OTHERS_OTHERITEM_HPP_ */
