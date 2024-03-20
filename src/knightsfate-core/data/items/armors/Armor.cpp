
#include <iostream>

#include "Armor.hpp"

Armor::Armor(ArmorType const& pType,ArmorPart const& pPart,ArmorMaterial const& pMat,short int const& pVal,
		ItemType const& pIType,float const& pWeight,std::string const& pName,short int const& pID,std::shared_ptr<Enchant> const& pEnch):
	Item(pVal,pIType,pWeight,pName,pID),m_armor(0.0),m_enchant(pEnch),m_type(pType),m_part(pPart),m_material(pMat){

}

Armor::Armor(Armor const& pArm):Item(pArm){
	m_armor=pArm.m_armor;
	m_enchant=pArm.m_enchant;
	m_type=pArm.m_type;
	m_part=pArm.m_part;
	m_material=pArm.m_material;
}

/*
void Armor::setName(){
	switch(m_rarity){
		case COMMON: m_name ="Trifling " ; break;
		case RARE:	m_name = "Lesser "; break;
		case EPIC: m_name = "Major "; break;
		case LEGENDARY: m_name = "Truly superb " ; break;
		case UNFATHOMABLE: m_name = "Unfathomable "; break;
	}
	switch(m_material){
		case IRON:m_name+="iron "; break;
		case RUNERON:m_name+="runeron "; break;
		case VANARITE:m_name+="vanarite "; break;
		case DARKSTEEL:m_name+="darksteel "; break;
		case ORICHALCUM:m_name+="orichalcum "; break;
		case VOIDMETAL:m_name+="voidmetal "; break;
		case ZERIUM:m_name+="zerium "; break;
		case MOONSTEEL:m_name+="moonsteel "; break;
		case MITHRIL:m_name+="mithril "; break;
		case PALLADIUM:m_name+="palladium "; break;
		case LEATHER:m_name+="leather "; break;
		case REDLEATHER:m_name+="red leather "; break;
		case IRONSKIN:m_name+="ironskin "; break;
		case GRIFFONFEATHER:m_name+="griffon feather "; break;
		case BASILISKSCALEMESH:m_name+="basilisk scale mesh "; break;
		case OLDTROLLHIDE:m_name+="old troll hide "; break;
		case VOIDSCALE:m_name+="voidscale "; break;
		case MINOTAURFUR:m_name+="minotaur fur "; break;
		case WYVERNSCALE:m_name+="wyvern scale "; break;
		case KRAKENSKIN:m_name+="kraken skin "; break;
		case JUTE:m_name+="jute "; break;
		case COTTON:m_name+="cotton "; break;
		case WOOL:m_name+="wool "; break;
		case SILK:m_name+="silk "; break;
		case IRONTHREAD:m_name+="iron thread "; break;
		case SILVERWEAVE:m_name+="silver weave "; break;
		case HARPYFEATHER:m_name+="harpy feather "; break;
		case VOIDCLOTH:m_name+="voidclothe "; break;
		case WYVERNSKIN:m_name+="wyvern skin "; break;
		case PHOENIXFEATHER:m_name+="phoenix feather "; break;
		case CANVAS:m_name+="canvas "; break;
		case LINEN:m_name+="linen "; break;
		case CASHMERE:m_name+="cashmere "; break;
		case VELVET:m_name+="velvet "; break;
		case VICUNAWOOL:m_name+="vicuna wool "; break;
	}
	switch(m_type){
		case LIGHT:
			switch(m_part){
				case HEAD: m_name += "hood"; break;
				case CHEST: m_name += "jacket"; break;
				case LEGS: m_name += "breeches"; break;
				case BOOTS: m_name += "shoes"; break;
			} break;
		case MEDIUM:
			switch(m_part){
				case HEAD: m_name += "helmet"; break;
				case CHEST: m_name += "vest"; break;
				case LEGS: m_name += "gards"; break;
				case BOOTS: m_name += "boots"; break;
			} break;
		case HEAVY:
			switch(m_part){
				case HEAD: m_name += "helm"; break;
				case CHEST: m_name += "cuirass"; break;
				case LEGS: m_name += "greave"; break;
				case BOOTS: m_name += "sabatons"; break;
			} break;
		case CLOTHES:
			switch(m_part){
				case HEAD: m_name += "hat"; break;
				case CHEST: m_name += "shirt"; break;
				case LEGS: m_name += "pants"; break;
				case BOOTS: m_name += "shoes"; break;
			} break;
	}


}
*/

void Armor::unEnchant(){m_enchant.reset();}

float Armor::getArmor() const{ return m_armor; }
ArmorType Armor::getArmorType() const{ return m_type; }
ArmorPart Armor::getPart() const{ return m_part; }
ArmorMaterial Armor::getMaterial() const{return m_material;}
std::shared_ptr<Enchant> Armor::getEnchant() const{return m_enchant;}

void Armor::setArmor(float const& pArmor){m_armor=pArmor;}
void Armor::setArmorType(ArmorType const& pAType){m_type=pAType;}
void Armor::setPart(ArmorPart const& pPart){m_part=pPart;}
void Armor::setMaterial(ArmorMaterial const& pMat){m_material=pMat;}
void Armor::setEnchant(std::shared_ptr<Enchant> const& pEnch){
	m_enchant.reset();
	m_enchant = pEnch;
}
/*
void Armor::info() const{
	std::cout << m_name << std::endl;
	switch(m_type){
		case LIGHT: std::cout << "Light armor" << std::endl; break;
		case MEDIUM: std::cout << "Medium armor" << std::endl; break;
		case HEAVY: std::cout << "Heavy armor" << std::endl; break;
		case CLOTHES: std::cout << "Clothes" << std::endl; break;
	}
	switch(m_part){
	case HEAD:std::cout<<"Armor part: head"<<std::endl;break;
	case CHEST:std::cout<<"Armor part: torso"<<std::endl;break;
	case LEGS:std::cout<<"Armor part: legs"<<std::endl;break;
	case BOOTS:std::cout<<"Armor part: feet"<<std::endl;break;
	}
	switch(m_material){
		case IRON:std::cout << "Material: Iron" << std::endl; break;
		case RUNERON:std::cout << "Material: Runeron" << std::endl; break;
		case VANARITE:std::cout << "Material: Vanarite" << std::endl; break;
		case DARKSTEEL:std::cout << "Material: Darksteel" << std::endl; break;
		case ORICHALCUM:std::cout << "Material: Orichalcum" << std::endl; break;
		case VOIDMETAL:std::cout << "Material: Voidmetal" << std::endl; break;
		case ZERIUM:std::cout << "Material: Zerium" << std::endl; break;
		case MOONSTEEL:std::cout << "Material: Moonsteel" << std::endl; break;
		case MITHRIL:std::cout << "Material: Mithril" << std::endl; break;
		case PALLADIUM:std::cout << "Material: Palladium" << std::endl; break;
		case LEATHER:std::cout << "Material: Leather" << std::endl; break;
		case REDLEATHER:std::cout << "Material: Red leather" << std::endl; break;
		case IRONSKIN:std::cout << "Material: Ironskin" << std::endl; break;
		case GRIFFONFEATHER:std::cout << "Material: Griffon feather" << std::endl; break;
		case BASILISKSCALEMESH:std::cout << "Material: Basilisk scale mesh" << std::endl; break;
		case OLDTROLLHIDE:std::cout << "Material: Old troll hide" << std::endl; break;
		case VOIDSCALE:std::cout << "Material: Voidscale" << std::endl; break;
		case MINOTAURFUR:std::cout << "Material: Minotaur fur" << std::endl; break;
		case WYVERNSCALE:std::cout << "Material: Wyvern scale" << std::endl; break;
		case KRAKENSKIN:std::cout << "Material: Kraken skin" << std::endl; break;
		case JUTE:std::cout << "Material: Jute" << std::endl; break;
		case COTTON:std::cout << "Material: Cotton" << std::endl; break;
		case WOOL:std::cout << "Material: Wool" << std::endl; break;
		case SILK:std::cout << "Material: Silk" << std::endl; break;
		case IRONTHREAD:std::cout << "Material: Iron thread" << std::endl; break;
		case SILVERWEAVE:std::cout << "Material: Silver weave" << std::endl; break;
		case HARPYFEATHER:std::cout << "Material: Harpy feather" << std::endl; break;
		case VOIDCLOTH: std::cout << "Material: Voidcloth" << std::endl; break;
		case WYVERNSKIN:std::cout << "Material: Wyvern skin" << std::endl; break;
		case PHOENIXFEATHER:std::cout << "Material: Phoenix feather" << std::endl; break;
		case CANVAS: std::cout << "Material: Canvas" << std::endl; break;
		case LINEN:std::cout << "Material: Linen" << std::endl; break;
		case CASHMERE:std::cout << "Material: Cashmere" << std::endl; break;
		case VELVET:std::cout << "Material: Velvet" << std::endl; break;
		case VICUNAWOOL:std::cout << "Material: Vicuna wool" << std::endl; break;
	}

	std::cout << "Armor : " << m_armor << std::endl;
	switch( m_rarity ){
		case COMMON:	std::cout << "Rarity : common" << std::endl; break;
		case RARE:		std::cout << "Rarity : rare" << std::endl; break;
		case EPIC:		std::cout << "Rarity : epic" << std::endl; break;
		case LEGENDARY: std::cout << "Rarity : legendary" << std::endl; break;
		case UNFATHOMABLE: std::cout << "Rarity : unfathomable"<<std::endl;break;
	}

}
*/

bool Armor::operator==(Item const& pOther) const {
    try{
        // Try to downcast to Armor using dynamic_cast
        Armor const& otherArmor = dynamic_cast<Armor const&>(pOther);

        return m_ID == otherArmor.m_ID &&
        	   m_part == otherArmor.m_part &&
               m_type == otherArmor.m_type &&
               m_material == otherArmor.m_material &&
			   m_enchant == otherArmor.m_enchant &&
			   m_armor == otherArmor.m_armor &&
			   m_value == otherArmor.m_value;
    }catch (const std::bad_cast&) {
        return false; // If the downcast fails, return false
    }
}


bool Armor::operator!=(Item const& pOther) const { return !(*this == pOther); }

bool Armor::operator<(Item const& pOther) const {return false;}

bool Armor::operator>(Item const& pOther) const {return false;}

Armor::~Armor(){

}








