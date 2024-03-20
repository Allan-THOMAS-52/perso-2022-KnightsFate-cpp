#include "OtherItem.hpp"

OtherItem::OtherItem(short int const& pVal, float const& pWeight,std::string const& pName,
		short int const& pID):Item(pVal,OTHERS,pWeight,pName,pID){}

OtherItem::OtherItem(OtherItem const& pItem):Item(pItem){

}


void OtherItem::info() const{

}


bool OtherItem::operator==(Item const& pOther) const {
	 try{
		// Try to downcast to Armor using dynamic_cast
		OtherItem const& OtherOItem = dynamic_cast<OtherItem const&>(pOther);
		return  m_ID == OtherOItem.m_ID;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool OtherItem::operator!=(Item const& pOther) const {return !(*this==pOther);}

bool OtherItem::operator>(Item const& pOther) const {return false;}
bool OtherItem::operator<(Item const& pOther) const {return false;}


OtherItem::~OtherItem(){}




