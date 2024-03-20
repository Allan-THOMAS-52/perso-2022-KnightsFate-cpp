
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(short int const& pVal,float const& pWeight,std::string const& pName,ItemType const& pIType,
		WeaponType const& pType,WeaponMaterial const& pMat,short int const& pID,
		float const& pDam,std::shared_ptr<Enchant> const& pEnch):
	Item(pVal,WEAPON,pWeight,pName,pID),m_damage(pDam),m_enchant(pEnch),m_type(pType),m_material(pMat){
}

Weapon::Weapon(Weapon const& pWeap):Item(pWeap){
	m_damage=pWeap.m_damage;
	m_enchant=pWeap.m_enchant;
	m_type=pWeap.m_type;
	m_material=pWeap.m_material;
}

void Weapon::unEnchant(){m_enchant.reset();}


void Weapon::setDamage(float const& pDam){m_damage=pDam;}
void Weapon::setEnchant(std::shared_ptr<Enchant> const& pEnch){
	m_enchant.reset();
	m_enchant = pEnch;
}
void Weapon::setType(WeaponType const& pWType){m_type=pWType;}
void Weapon::setMaterial(WeaponMaterial const& pMat){m_material=pMat;}

float Weapon::getDamage() const{ return m_damage; }
std::shared_ptr<Enchant> Weapon::getEnchant()const{return m_enchant;}
WeaponType Weapon::getWeaponType() const{ return m_type;}
WeaponMaterial Weapon::getMaterial() const{return m_material;}


void Weapon::info() const{
	if(m_type == HANDS){
		std::cout << "Bare hands" << std::endl;
	}else{
		std::cout << m_name << std::endl;
		switch(m_type){
			case AXE: std::cout << "Weapon's type : axe " << std::endl; break;
			case BATTLE_AXE: std::cout << "Weapon's type : battle axe " << std::endl; break;
			case BOW: std::cout << "Weapon's type : bow " << std::endl; break;
			case DAGGER: std::cout << "Weapon's type : dagger " << std::endl; break;
			case MAUL: std::cout << "Weapon's type : maul " << std::endl; break;
			case STAFF: std::cout << "Weapon's type : staff " << std::endl; break;
			case SWORD: std::cout << "Weapon's type : sword " << std::endl; break;
			case GREATSWORD: std::cout << "Weapon's type : greatsword " << std::endl; break;
			case HANDS:break;
			case SHIELD:std::cout<<"Weapon's type : shield"<<std::endl;break;
		}
		switch(m_material){
			case IRON_W:std::cout << "Material: Iron" << std::endl; break;
			case RUNERON_W:std::cout << "Material: Runeron" << std::endl; break;
			case VANARITE_W:std::cout << "Material: Vanarite" << std::endl; break;
			case DARKSTEEL_W:std::cout << "Material: Darksteel" << std::endl; break;
			case ORICHALCUM_W:std::cout << "Material: Orichalcum" << std::endl; break;
			case VOIDMETAL_W:std::cout << "Material: Voidmetal" << std::endl; break;
			case ZERIUM_W:std::cout << "Material: Zerium" << std::endl; break;
			case MOONSTEEL_W:std::cout << "Material: Moonsteel" << std::endl; break;
			case MITHRIL_W:std::cout << "Material: Mithril" << std::endl; break;
			case PALLADIUM_W:std::cout << "Material: Palladium" << std::endl; break;
			case OAK:std::cout << "Material: Oak" << std::endl; break;
			case BIRCH:std::cout << "Material: Birch" << std::endl; break;
			case REDWOOD:std::cout << "Material: Redwood" << std::endl; break;
			case HELLWOOD:std::cout << "Material: Hellwood" << std::endl; break;
			case MAPLE:std::cout << "Material: Maple" << std::endl; break;
			case MAHOGANY:std::cout << "Material: Mahogany" << std::endl; break;
			case BLOODWOOD:std::cout << "Material: Bloodwood" << std::endl; break;
			case MINOTAURHORN:std::cout << "Material: Minotaur horn" << std::endl; break;
			case VOIDWOOD:std::cout << "Material: Voidwood" << std::endl; break;
			case PHOENIXBONE:std::cout << "Material: Phoenix bone" << std::endl; break;
		}
/*
		std::cout << "Damages : " << m_damage << std::endl;
		switch( m_rarity ){
			case COMMON:	std::cout << "Rarity : Trifling" << std::endl; break;
			case RARE:		std::cout << "Rarity : Lesser" << std::endl; break;
			case EPIC:		std::cout << "Rarity : Major" << std::endl; break;
			case LEGENDARY: std::cout << "Rarity : Truly superb" << std::endl; break;
			case UNFATHOMABLE: std::cout << "Rarity : Unfathomable" << std::endl; break;
		}*/
	}
}

bool Weapon::operator==(Item const& pOther) const {
	 try{
		// Try to downcast to Armor using dynamic_cast
		Weapon const& otherWeapon = dynamic_cast<Weapon const&>(pOther);
		return  m_ID == otherWeapon.m_ID &&
				m_type == otherWeapon.m_type &&
				m_material == otherWeapon.m_material &&
				m_enchant == otherWeapon.m_enchant &&
				m_damage == otherWeapon.m_damage &&
				m_value == otherWeapon.m_value;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool Weapon::operator!=(Item const& pOther) const { return !(*this == pOther); }

bool Weapon::operator<(Item const& pOther) const {return false;}

bool Weapon::operator>(Item const& pOther) const {return false;}

Weapon::~Weapon(){

}






