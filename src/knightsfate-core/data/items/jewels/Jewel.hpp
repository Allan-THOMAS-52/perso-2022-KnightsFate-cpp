#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_JEWELS_JEWEL_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_JEWELS_JEWEL_HPP_

#include "../enchants/Enchant.hpp"
#include "../Item.hpp"

enum JewelType{
	RING,
	NECKLACE,
	EARRINGS,
};
enum JewelMaterial{
	BRONZE,
	SILVER,
	GOLD,
	RUNERON_J,
	ELECTRUM,
	PLATINUM,
	RODHIUM,
	VOIDMETAL_J,
	COBYNITE,
	ACTINURE
};

class Jewel: public Item{

	public:

		Jewel(JewelType const& pJewType,JewelMaterial const& pMat,std::shared_ptr<Enchant> const& pEnch,
				short int const& pVal, ItemType const& pType, float const& pWeight,std::string const& pName,short int const& pID);

		Jewel(Jewel const& pJewel);

		void unEnchant();

		JewelType getJewelType() const;
		JewelMaterial getMaterial()const;
		std::shared_ptr<Enchant> getEnchant() const;

		void setJewelType(JewelType const& pType);
		void setMaterial(JewelMaterial const& pMat);
		void setEnchant(std::shared_ptr<Enchant> const& pEnch);

		void info() const;

		bool operator==(Item const& pOther) const;
		bool operator!=(Item const& pOther) const;
		bool operator>(Item const& pOther) const ;
		bool operator<(Item const& pOther) const ;

		~Jewel();

	private:

		std::shared_ptr<Enchant> m_enchant;
		JewelType m_type;
		JewelMaterial m_material;

};

#endif /* KNIGHTSFATE_CORE_DATA_EQUIPMENT_JEWELS_JEWEL_HPP_ */
