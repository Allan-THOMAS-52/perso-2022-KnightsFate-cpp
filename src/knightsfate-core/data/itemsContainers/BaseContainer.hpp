#ifndef KNIGHTSFATE_CORE_DATA_ITEMSCONTAINERS_BASECONTAINER_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMSCONTAINERS_BASECONTAINER_HPP_

#include <memory>
#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <iostream>

#include "../items/Item.hpp"
//#include "../../../characters/characters/player/Player.hpp"

enum Tier{
	C_COMMON = 1,
	C_RARE = 2,
	C_EPIC = 3,
	C_LEGENDARY = 4
};
/*
enum ItemType{
	ARMOR,
	FOOD,
	INGREDIENT,
	JEWEL,
	OTHERS,
	POTIONS,
	SCROLL,
	WEAPON
};
*/

/*
enum LockDif{
	COMMON_L=1,
	RARE_L=2,
	EPIC_L=3,
	LEGENDARY_L=4
};
enum LockType{
	HOUSE_L,
	CHEST_L,
	DUNGEON_L
};
*/

class BaseContainer{

	public:

		/*
		BaseContainer(Tier const& pTier,bool const& pLock,bool const& pKey,LockType const& pLockType,
				std::vector<std::shared_ptr<Item>> const& pStor);*/

		BaseContainer(Tier const& pTier,std::vector<std::shared_ptr<Item>> const& pUni,
				std::map<std::string,unsigned short int> const& pBu);

		virtual Tier getTier() const;
		//virtual bool isLocked() const;
		virtual std::vector<std::shared_ptr<Item>>& getUniques();
		virtual std::map<std::string,unsigned short int>& getBulk();
		//virtual bool needKey() const;

		virtual void setTier(Tier const& pTier);
		//virtual void setLock(bool const& pLock);
		virtual void setUniques(std::vector<std::shared_ptr<Item>> const& pU);
		virtual void setBulk(std::map<std::string,unsigned short int> const& pB);


		virtual void sortStorByName();
		virtual void sortStorByDescValue();
		virtual void sortStorByAscValue();

		/*
		virtual void lock();
		virtual void unLock();
		*/

		virtual void storeInStorage(std::shared_ptr<Item> const& pItem);
		virtual void storeMultInStorage(std::vector<std::shared_ptr<Item>> const& pItems);

		virtual void storeInStorage(std::string const& pKey,unsigned short int const& pValue);


		//virtual std::shared_ptr<Item> takeFromStorage(std::shared_ptr<Item> const& pItem);
		//virtual std::vector<std::shared_ptr<Item>> takeAllFromStorage();
		//virtual std::vector<std::shared_ptr<Item>>& openContainer(Player const& pPlayer);

		//virtual void lockPick(Player const& pPlayer);

		virtual ~BaseContainer();

	protected:

		Tier m_tier;
		/*
		bool m_isLocked;
		bool m_needKey;
		LockType m_lockType;
		*/
		std::vector<std::shared_ptr<Item>> m_uniques;
		std::map<std::string,unsigned short int> m_bulk;


};


#endif /* KNIGHTSFATE_CORE_DATA_FURNITURES_CONTAINERS_BASECONTAINER_BASECONTAINER_HPP_ */
