
#include <iostream>
#include "Jewel.hpp"

Jewel::Jewel(JewelType const& pJewType,JewelMaterial const& pMat,std::shared_ptr<Enchant> const& pEnch,
		short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,short int const& pID):
	Item(pVal,JEWEL,pWeight,pName,pID),m_enchant(pEnch),m_type(pJewType),m_material(pMat){
}

Jewel::Jewel(Jewel const& pJewel):Item(pJewel){
	m_enchant=pJewel.m_enchant;
	m_type=pJewel.m_type;
	m_material=pJewel.m_material;
}

/*
void Jewel::setName(){
	switch(m_rarity){
		case COMMON: m_name ="Trifling " ; break;
		case RARE:	m_name = "Lesser "; break;
		case EPIC: m_name = "Major "; break;
		case LEGENDARY: m_name = "Truly superb " ; break;
		case UNFATHOMABLE: m_name = "Unfathomable "; break;
	}
	switch(m_material){
		case BRONZE:m_name+="bronze "; break;
		case SILVER:m_name+="silver "; break;
		case GOLD:m_name+="gold "; break;
		case RUNERON_J:m_name+="runeron "; break;
		case ELECTRUM:m_name+="electrum "; break;
		case PLATINUM:m_name+="platinum "; break;
		case RODHIUM:m_name+="rodhium "; break;
		case VOIDMETAL_J:m_name+="voidmetal "; break;
		case COBYNITE:m_name+="cobynite "; break;
		case ACTINURE:m_name+="actinure "; break;
	}
	switch(m_type){
		case RING:m_name += "ring";break;
		case NECKLACE:m_name += "necklace";break;
		case EARRINGS:m_name += "earrings";break;
	}
	if( m_enchant->getType() != -1 ){
		switch(m_enchant->getType()){
			case HEALTH: m_name += " of health"; break;
			case MANA: m_name += " of mana"; break;
			case STAMINA: m_name += " of stamina"; break;
			case HRECOVERY: m_name += " of health recovery"; break;
			case MRECOVERY: m_name += " of mana recovery"; break;
			case SRECOVERY: m_name += " of stamina recovery"; break;
			case ICE: break;
			case SHOCK:break;
			case POISON: break;
			case FIRE: break;
		}
	}
}
*/



void Jewel::unEnchant(){m_enchant.reset();}

JewelMaterial Jewel::getMaterial()const{return m_material;}
JewelType Jewel::getJewelType() const{return m_type;}
std::shared_ptr<Enchant> Jewel::getEnchant() const{return m_enchant;}


void Jewel::setJewelType(JewelType const& pType){m_type=pType;}
void Jewel::setMaterial(JewelMaterial const& pMat){m_material=pMat;}
void Jewel::setEnchant(std::shared_ptr<Enchant> const& pEnch){
	m_enchant.reset();
	m_enchant = pEnch;
}


void Jewel::info() const{
	std::cout<<m_name<<std::endl;
	switch(m_type){
		case RING:std::cout << "Jewel type: Ring" << std::endl; break;
		case NECKLACE:std::cout << "Jewel type: Necklace" << std::endl; break;
		case EARRINGS:std::cout << "Jewel type: Earrings" << std::endl; break;
	}
	switch(m_material){
		case BRONZE:std::cout << "Material: Bronze" << std::endl; break;
		case SILVER:std::cout << "Material: Silver" << std::endl; break;
		case GOLD:std::cout << "Material: Gold" << std::endl; break;
		case RUNERON_J:std::cout << "Material: Runeron" << std::endl; break;
		case ELECTRUM:std::cout << "Material: Electrum" << std::endl; break;
		case PLATINUM:std::cout << "Material: Platinum" << std::endl; break;
		case RODHIUM:std::cout << "Material: Rodhium" << std::endl; break;
		case VOIDMETAL_J:std::cout << "Material: Voidmetal" << std::endl; break;
		case COBYNITE:std::cout << "Material: Cobynite" << std::endl; break;
		case ACTINURE:std::cout << "Material: Actinure" << std::endl; break;
	}/*
	if( m_enchant->getType() != -1 ){
		std::cout << "Enchant : " << m_enchant->getSEffect() << std::endl;
	}
	switch( m_rarity ){
		case COMMON:	std::cout << "Rarity : Trifling" << std::endl; break;
		case RARE:		std::cout << "Rarity : Lesser" << std::endl; break;
		case EPIC:		std::cout << "Rarity : Major" << std::endl; break;
		case LEGENDARY: std::cout << "Rarity : Truly superb" << std::endl; break;
		case UNFATHOMABLE: std::cout << "Rarity : Unfathomable" << std::endl; break;
	}*/
}


bool Jewel::operator==(Item const& pOther) const {
	 try{
	    // Try to downcast to Armor using dynamic_cast
		Jewel const& otherJewel = dynamic_cast<Jewel const&>(pOther);
		return	m_ID == otherJewel.m_ID &&
				m_type == otherJewel.m_type &&
				m_material == otherJewel.m_material &&
				m_enchant == otherJewel.m_enchant &&
				m_value == otherJewel.m_value;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool Jewel::operator!=(Item const& pOther) const { return !(*this == pOther); }

bool Jewel::operator<(Item const& pOther) const {return false;}

bool Jewel::operator>(Item const& pOther) const {return false;}

Jewel::~Jewel(){}


