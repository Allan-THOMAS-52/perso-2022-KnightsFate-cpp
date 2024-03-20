#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_WEAPONS_WEAPON_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_WEAPONS_WEAPON_HPP_

#include "../enchants/Enchant.hpp"
#include "../Item.hpp"

#include <memory>

enum WeaponType{
	AXE,
	BATTLE_AXE,
	BOW,
	DAGGER,
	MAUL,
	STAFF,
	SWORD,
	GREATSWORD,
	HANDS,
	SHIELD
};
enum WeaponMaterial{
	IRON_W,
	RUNERON_W,
	VANARITE_W,
	DARKSTEEL_W,
	ORICHALCUM_W,
	VOIDMETAL_W,
	ZERIUM_W,
	MOONSTEEL_W,
	MITHRIL_W,
	PALLADIUM_W,
//bow-staff
	OAK,
	BIRCH,
	REDWOOD,
	HELLWOOD,
	MAPLE,
	MAHOGANY,
	BLOODWOOD,
	MINOTAURHORN,
	VOIDWOOD,
	PHOENIXBONE
};

class Weapon: public Item{

	public:

		Weapon(short int const& pVal,float const& pWeight,std::string const& pName,ItemType const& pIType,
				WeaponType const& pType,WeaponMaterial const& pMat,short int const& pID,
				float const& pDam,std::shared_ptr<Enchant> const& pEnch);

		Weapon(Weapon const& pWeap);

		void unEnchant();

		void setDamage(float const& pDam);
		void setType(WeaponType const& pWType);
		void setMaterial(WeaponMaterial const& pMat);
		void setEnchant(std::shared_ptr<Enchant> const& pEnch);

		float getDamage() const;
		std::shared_ptr<Enchant> getEnchant()const;
		WeaponType getWeaponType() const;
		WeaponMaterial getMaterial() const;

		void info() const;

		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator>(Item const& pOther) const  override;
		bool operator<(Item const& pOther) const  override;

		~Weapon();

	private:

		float m_damage;
		std::shared_ptr<Enchant> m_enchant;
		WeaponType m_type;
		WeaponMaterial m_material;
};

#endif /* WEAPON_HPP_ */
