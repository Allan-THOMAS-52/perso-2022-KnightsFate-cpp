#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_UTILS_IDUTILS_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_UTILS_IDUTILS_HPP_

#include "../../utils/nlohmann/json.hpp"

#include "../armors/Armor.hpp"
#include "../foods/Food.hpp"
#include "../ingredients/Ingredient.hpp"
#include "../jewels/Jewel.hpp"
#include "../potions/Potion.hpp"
#include "../others/OtherItem.hpp"
#include "../scrolls/Scroll.hpp"
#include "../weapons/Weapon.hpp"

#include <unordered_map>
#include <map>
#include <memory>
#include <fstream>
#include <iostream>

class idUtils{

	public:

		// FUNCTIONS TO GET ITEMS

			static std::shared_ptr<Item> getItemByID(short int const& pID);
			static std::shared_ptr<Item> getItemByName(std::string const& pName);

		// UNIQUES

			static bool hasUniqueItem(std::vector<std::shared_ptr<Item>> const& pInv,short int const& pID);
			static bool hasMultipleTimeUniqueItem(std::vector<std::shared_ptr<Item>> const& pInv,short int const& pID,short int const& pNum);
			static void removeItemByItem(std::vector<std::shared_ptr<Item>>& pInv,std::shared_ptr<Item> const& pItem);

		// BULK

			static bool hasBulkItem(std::map<std::string,unsigned short int> const& pInv, std::string const& pName);
			static bool hasMultipleTimeBulkItem(std::map<std::string,unsigned short int> const& pInv, std::string const& pName,unsigned short int const& pNum);
			static void removeBulkItemByName(std::map<std::string,unsigned short int>& pInv,std::string const& pName);
			static void removeBulkItemsByName(std::map<std::string,unsigned short int>& pInv,std::string const& pName,unsigned short int const& pNum);

		//



		static void addItemByID(short int const& pID, std::vector<std::shared_ptr<Item>>& pInv);


		//static void removeItemsByID(short int const& pID,std::vector<std::shared_ptr<Item>>& pInv,short int const& pNum);
		//static void removeItemByItem(std::vector<std::shared_ptr<Item>>& pInv,std::shared_ptr<Item>& pItem);


		static void loadItemsFromFile(std::string const& pPath);

		bool areItemsLoaded() const;

	private:

		static bool m_areItemsLoaded;
		static std::unordered_map<short int, std::shared_ptr<Item>> m_items;


};

#endif /* KNIGHTSFATE_CORE_DATA_ITEMS_OBJECTS_OBJECTS_IDUTILS_HPP_ */
