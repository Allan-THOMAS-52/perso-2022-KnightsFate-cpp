
#include "idUtils.hpp"

bool idUtils::m_areItemsLoaded;
std::unordered_map<short int, std::shared_ptr<Item>> idUtils::m_items;

//-----------------------------------FUNCTIONS TO GET ITEMS-----------------------------------

std::shared_ptr<Item> idUtils::getItemByID(short int const& pID){
	if(!m_areItemsLoaded){idUtils::loadItemsFromFile("ID_List.json");}

	try{
		auto it = m_items.find(pID);

		if(it==m_items.end())
			throw std::invalid_argument("This item does not exist !");

		switch(it->second->getType()){

			case ARMOR:{
				Armor armor(*std::dynamic_pointer_cast<Armor>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Armor>(armor));
			}
			case FOOD:{
				Food food(*std::dynamic_pointer_cast<Food>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Food>(food));
			}
			case INGREDIENT:{
				Ingredient ing(*std::dynamic_pointer_cast<Ingredient>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Ingredient>(ing));
			}
			case JEWEL:{
				Jewel jewel(*std::dynamic_pointer_cast<Jewel>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Jewel>(jewel));
			}
			case OTHERS:{
				OtherItem other(*std::dynamic_pointer_cast<OtherItem>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<OtherItem>(other));
			}
			case POTIONS:{
				Potion potion(*std::dynamic_pointer_cast<Potion>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Potion>(potion));
			}
			case SCROLL:{
				Scroll scroll(*std::dynamic_pointer_cast<Scroll>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Scroll>(scroll));
			}
			case WEAPON:{
				Weapon weapon(*std::dynamic_pointer_cast<Weapon>(it->second));
				return std::dynamic_pointer_cast<Item>(std::make_shared<Weapon>(weapon));
			}
			default:
				throw std::invalid_argument("The type of this Item is not defined !");
				break;
		}

	}catch(std::invalid_argument const& e){
		std::cerr << "Error: " << e.what() << std::endl;
		return nullptr;
	}
	return nullptr;
}

std::shared_ptr<Item> idUtils::getItemByName(std::string const& pName){
	if(!m_areItemsLoaded){idUtils::loadItemsFromFile("ID_List.json");}

	try{

		for(auto it = m_items.begin();it!=m_items.end(); ++it){

			if( it->second->getName() == pName ){

				switch(it->second->getType()){
					case ARMOR:{
						Armor armor(*std::dynamic_pointer_cast<Armor>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Armor>(armor));
					}
					case FOOD:{
						Food food(*std::dynamic_pointer_cast<Food>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Food>(food));
					}
					case INGREDIENT:{
						Ingredient ing(*std::dynamic_pointer_cast<Ingredient>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Ingredient>(ing));
					}
					case JEWEL:{
						Jewel jewel(*std::dynamic_pointer_cast<Jewel>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Jewel>(jewel));
					}
					case OTHERS:{
						OtherItem other(*std::dynamic_pointer_cast<OtherItem>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<OtherItem>(other));
					}
					case POTIONS:{
						Potion potion(*std::dynamic_pointer_cast<Potion>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Potion>(potion));
					}
					case SCROLL:{
						Scroll scroll(*std::dynamic_pointer_cast<Scroll>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Scroll>(scroll));
					}
					case WEAPON:{
						Weapon weapon(*std::dynamic_pointer_cast<Weapon>(it->second));
						return std::dynamic_pointer_cast<Item>(std::make_shared<Weapon>(weapon));
					}
					default:
						throw std::invalid_argument("The type of this Item is not defined !");
						break;
				}

			}

		}
		throw std::invalid_argument("This item does not exist !");
	}catch(std::invalid_argument const& e){
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return nullptr;
}

//-----------------------------------UNIQUES-----------------------------------

bool idUtils::hasUniqueItem(std::vector<std::shared_ptr<Item>> const& pInv,short int const& pID){
	for (auto const& item : pInv)
		if (item->getID() == pID)
			return true;
	return false;
}

bool idUtils::hasMultipleTimeUniqueItem(std::vector<std::shared_ptr<Item>> const& pInv,short int const& pID,short int const& pNum){

	short int occurrences = 0;

	for(auto const& item : pInv){

		if(item->getID() == pID){

			occurrences++;

			if( occurrences >= pNum )
				return true;

		}
	}

	return false;
}

void idUtils::removeItemByItem(std::vector<std::shared_ptr<Item>>& pInv,std::shared_ptr<Item> const& pItem){
	try{
		for(auto it=pInv.begin();it!=pInv.end();++it)
			if(*(*it) == *pItem){
			    pInv.erase(it);
			    return;
			}
		throw std::runtime_error("Item not found in unique inventory !");
	}catch(std::runtime_error const& e){
		std::cerr << "Error: " << e.what() <<std::endl;
	}
}

//-----------------------------------BULK-----------------------------------

bool idUtils::hasBulkItem(std::map<std::string,unsigned short int> const& pInv, std::string const& pName){
	auto it = pInv.find(pName);
	return (it==pInv.end()) ? false : true;
}

bool idUtils::hasMultipleTimeBulkItem(std::map<std::string,unsigned short int> const& pInv, std::string const& pName,unsigned short int const& pNum){

	auto it = pInv.find(pName);

	if(it==pInv.end())
		return false;
	else if(it->second>=pNum)
			 return true;
		 else
			 return false;
}

void idUtils::removeBulkItemByName(std::map<std::string,unsigned short int>& pInv,std::string const& pName){
	try{
		auto it = pInv.find(pName);
		if(it!=pInv.end()){
			if(it->second==1)
				pInv.erase(it);
			else
				it->second--;
		}else{
			throw std::runtime_error("Item not found in bulk inventory !");
		}
	}catch(std::runtime_error const& e){
		std::cerr << "Error: " << e.what() <<std::endl;
	}


}

void idUtils::removeBulkItemsByName(std::map<std::string,unsigned short int>& pInv,std::string const& pName,unsigned short int const& pNum){
	try{
		auto it = pInv.find(pName);
		if(it!=pInv.end()){
			if(it->second<pNum){
				throw std::runtime_error("The number requested is more than what is stored !");
			}else if(it->second==pNum){
				pInv.erase(it);
			}else{
				it->second -= pNum;
			}
		}else{
			throw std::runtime_error("Item not found in bulk inventory !");
		}
	}catch(std::runtime_error const& e){
		std::cerr << "Error: " << e.what() <<std::endl;
	}

}

//---------------------------------------------------------------------------------------------------------

void idUtils::addItemByID(short int const& pID, std::vector<std::shared_ptr<Item>>& pInv){
	pInv.push_back(getItemByID(pID));
}

/*
void idUtils::removeItemsByID(short int const& pID,std::vector<std::shared_ptr<Item>>& pInv,short int const& pNum){

	short int remainingItems = pNum;

	auto it = pInv.begin();

	while( it != pInv.end() && remainingItems > 0 ){

		 if ( (*it)->getID() == pID ) {

			it = pInv.erase(it);
			remainingItems--;

		}else{

			++it;

		}
	}
}
*/
/*
void idUtils::removeItemByItem(std::vector<std::shared_ptr<Item>>& pInv,std::shared_ptr<Item>& pItem){
	for (auto it = pInv.begin(); it != pInv.end(); ++it) {
		if (*it == pItem) {
			pInv.erase(it);
			return;
		}
	}
}
*/

void idUtils::loadItemsFromFile(std::string const& pPath){
	/*std::ifstream file(pPath);

	if(!file){std::cerr << "Error: cannot open the ID file" << std::endl;return;}

	nlohmann::json jsonData;
	file >> jsonData;

	m_items.clear();

	for(auto const& itemData : jsonData){

		switch(itemData["itemType"]){

			case ARMOR: m_items[itemData["id"]] = std::make_shared<Armor>(itemData["armorType"],
					itemData["armorPart"],COMMON,itemData["armorMat"],itemData["value"],itemData["itemtype"],
					itemData["weight"],itemData["name"],itemData["id"]);	break;

			case FOOD: m_items[itemData["id"]] = std::make_shared<Food>(itemData["useTime"],
					itemData["duration"],itemData["floatEffect"],itemData["effects"],itemData["foodType"],
					itemData["value"],itemData["itemtype"],itemData["weight"],itemData["name"],itemData["id"]);	break;

			case INGREDIENT: m_items[itemData["id"]] = std::make_shared<Ingredient>(itemData["rarity"],
					itemData["effect1"],itemData["effect2"],itemData["value"],itemData["itemtype"],
					itemData["weight"],itemData["name"],itemData["id"]);	break;

			case JEWEL: m_items[itemData["id"]] = std::make_shared<Armor>(itemData["jewelType"],
					COMMON,itemData["rarity"],itemData["jewelMat"],itemData["value"],itemData["itemtype"],
					itemData["weight"],itemData["name"],itemData["id"]);	break;

			case OTHERS: m_items[itemData["id"]] = std::make_shared<Armor>(itemData["value"],itemData["itemtype"],
					itemData["weight"],itemData["name"],itemData["id"]);	break;

			case POTIONS: m_items[itemData["id"]] = std::make_shared<Food>(itemData["effects"],
					itemData["rarity"],itemData["value"],itemData["itemtype"],itemData["weight"],itemData["name"],
					itemData["id"]);	break;

			case SCROLL: m_items[itemData["id"]] = std::make_shared<Ingredient>(itemData["castType"],
					itemData["duration"],itemData["floatEffect"],itemData["rarity"],itemData["value"],itemData["itemtype"],
					itemData["weight"],itemData["name"],itemData["id"]);	break;

			case WEAPON: m_items[itemData["id"]] = std::make_shared<Armor>(itemData["value"],itemData["weight"],
					itemData["name"],itemData["itemType"],itemData["weaponType"],COMMON,itemData["weaponMat"],itemData["id"],
					itemData["damage"]);	break;
		}

	}
	m_areItemsLoaded = true;*/
}


bool idUtils::areItemsLoaded() const{return idUtils::m_areItemsLoaded;}














