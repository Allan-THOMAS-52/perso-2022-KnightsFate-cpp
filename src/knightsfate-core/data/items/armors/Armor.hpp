#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_ARMORS_ARMOR_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_ARMORS_ARMOR_HPP_

#include "../enchants/Enchant.hpp"
#include "../Item.hpp"

enum ArmorType{
	LIGHT,   // 1x
	MEDIUM,  // 2x
	HEAVY,   // 3x
	CLOTHES  // 0.3x
};
enum ArmorPart{
	HEAD,
	CHEST,
	LEGS,
	BOOTS
};
enum ArmorMaterial{
//heavy
	IRON,
	RUNERON,
	VANARITE,
	DARKSTEEL,
	ORICHALCUM,
	VOIDMETAL,
	ZERIUM,
	MOONSTEEL,
	MITHRIL,
	PALLADIUM,
//medium
	LEATHER,
	REDLEATHER,
	IRONSKIN,
	GRIFFONFEATHER,
	BASILISKSCALEMESH,
	OLDTROLLHIDE,
	VOIDSCALE,
	MINOTAURFUR,
	WYVERNSCALE,
	KRAKENSKIN,
//light
	JUTE,
	COTTON,
	WOOL,
	SILK,
	IRONTHREAD,
	SILVERWEAVE,
	HARPYFEATHER,
	VOIDCLOTH,
	WYVERNSKIN,
	PHOENIXFEATHER,
//clothe
	CANVAS,
	LINEN,
	CASHMERE,
	VELVET,
	VICUNAWOOL
};

class Armor: public Item{

	public:

		Armor(ArmorType const& pType,ArmorPart const& pPart,ArmorMaterial const& pMat,short int const& pVal,
				ItemType const& pIType,float const& pWeight,std::string const& pName,short int const& pID,std::shared_ptr<Enchant> const& pEnch);

		Armor(Armor const& pArm);

		void unEnchant();

		float getArmor() const;
		ArmorType getArmorType() const;
		ArmorPart getPart() const;
		ArmorMaterial getMaterial() const;
		std::shared_ptr<Enchant> getEnchant() const;

		void setArmor(float const& pArmor);
		void setArmorType(ArmorType const& pAType);
		void setPart(ArmorPart const& pPart);
		void setMaterial(ArmorMaterial const& pMat);
		void setEnchant(std::shared_ptr<Enchant> const& pEnch);

		void info() const;

		bool operator==(Item const& pOther) const override;
		bool operator!=(Item const& pOther) const override;
		bool operator>(Item const& pOther) const override;
		bool operator<(Item const& pOther) const override;

		~Armor();

	private:

		float m_armor;
		std::shared_ptr<Enchant> m_enchant;
		ArmorType m_type;
		ArmorPart m_part;
		ArmorMaterial m_material;
};



#endif /* KNIGHTSFATE_CORE_DATA_EQUIPMENT_ARMORS_ARMOR_HPP_ */
