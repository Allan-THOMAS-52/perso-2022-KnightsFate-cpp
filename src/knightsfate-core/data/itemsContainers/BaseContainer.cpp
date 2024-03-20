
#include "BaseContainer.hpp"




/*
BaseContainer::BaseContainer(Tier const& pTier,Size const& pSize,bool const& pLock,bool const& pKey,LockType const& pLockType):
	m_tier(pTier),m_size(pSize),m_isLocked(pLock),m_needKey(pKey),m_lockType(pLockType){

}

BaseContainer::BaseContainer(Tier const& pTier,Size const& pSize,bool const& pLock,bool const& pKey,LockType const& pLockType,
	std::vector<std::shared_ptr<Item>> const& pStor):m_tier(pTier),m_size(pSize),m_isLocked(pLock),m_needKey(pKey),
			m_lockType(pLockType),m_storage(pStor){

}
*/


BaseContainer::BaseContainer(Tier const& pTier,std::vector<std::shared_ptr<Item>> const& pUni,
		std::map<std::string,unsigned short int> const& pBu)
		:m_tier(pTier),m_uniques(pUni),m_bulk(pBu){

}


Tier BaseContainer::getTier() const{return m_tier;}
//bool BaseContainer::isLocked() const{return m_isLocked;}
std::vector<std::shared_ptr<Item>>& BaseContainer::getUniques(){return m_uniques;}
std::map<std::string,unsigned short int>& BaseContainer::getBulk(){return m_bulk;}
//bool BaseContainer::needKey() const{return m_needKey;}

void BaseContainer::setTier(Tier const& pTier){m_tier=pTier;}
//void BaseContainer::setLock(bool const& pLock){m_isLocked=pLock;}
void BaseContainer::setUniques(std::vector<std::shared_ptr<Item>> const& pU){m_uniques=pU;}
void BaseContainer::setBulk(std::map<std::string,unsigned short int> const& pB){m_bulk=pB;}



void BaseContainer::sortStorByName(){
	std::sort(m_uniques.begin(), m_uniques.end(), [](const std::shared_ptr<Item>& item1, const std::shared_ptr<Item>& item2) {
	    return item1->getName() < item2->getName();
	});
}

void BaseContainer::sortStorByDescValue(){
	std::sort(m_uniques.begin(), m_uniques.end(), [](const std::shared_ptr<Item>& item1, const std::shared_ptr<Item>& item2) {
	        return item1->getValue() > item2->getValue();
	    });
}

void BaseContainer::sortStorByAscValue(){
	std::sort(m_uniques.begin(), m_uniques.end(), [](const std::shared_ptr<Item>& item1, const std::shared_ptr<Item>& item2) {
	        return item1->getValue() < item2->getValue();
	    });
}


/*
void BaseContainer::lock(){m_isLocked=true;}
void BaseContainer::unLock(){m_isLocked=false;}
*/

void BaseContainer::storeInStorage(std::shared_ptr<Item> const& pItem){

	ItemType type = pItem->getType();

	try{

		if(type == WEAPON || type == ARMOR || type == JEWEL || type == POTIONS || type == FOOD){
			m_uniques.emplace_back(pItem);
		}else{
			throw std::invalid_argument("Bulk type Item as parameter !");
		}

	}catch(std::invalid_argument const& e){
		std::cerr << "Error: " << e.what() <<std::endl;
	}
}

void BaseContainer::storeMultInStorage(std::vector<std::shared_ptr<Item>> const& pItems) {

    for(auto it = pItems.begin(); it != pItems.end(); ++it){

        ItemType type = (*it)->getType();

        if(type == WEAPON || type == ARMOR || type == JEWEL || type == POTIONS || type == FOOD){
            m_uniques.emplace_back(*it);
        }else{
            try{
                throw std::invalid_argument("Bulk type Item as parameter !");
            }catch(std::invalid_argument const& e){
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

    }

}

void BaseContainer::storeInStorage(std::string const& pKey,unsigned short int const& pValue){




	// Check if the item is already in m_bulk
	auto it = m_bulk.find(pKey); // Assuming 'getName()' returns the name of the item

	if(it == m_bulk.end()){// Item not found in m_bulk, so add it
		m_bulk[pKey] = pValue; // Assuming you start the count at 1 for a new item
	}else{ // Item found in m_bulk, so update the count
		it->second++; // Increment the count of the existing item
	}



}

/*
std::shared_ptr<Item> BaseContainer::takeFromStorage(std::shared_ptr<Item> const& pItem){
	auto iter = std::find(m_storage.begin(), m_storage.end(), pItem);
	if (iter != m_storage.end()) {
		std::shared_ptr<Item> item = *iter;
		m_storage.erase(iter);
		return item;
	}
	return nullptr;
}

std::vector<std::shared_ptr<Item>> BaseContainer::takeAllFromStorage(){
	std::vector<std::shared_ptr<Item>> toReturn;
	toReturn = std::move(m_storage);
	m_storage.clear();
	return toReturn;
}


std::vector<std::shared_ptr<Item>>& BaseContainer::openContainer(Player const& pPlayer){
	if(isLocked){
		lockPick(pPlayer);
		return (isLocked) ? nullptr : &m_storage;
	}else{
		return &m_storage;
	}
}
void BaseContainer::lockPick(Player const& pPlayer) {
	auto item = pPlayer.findInInventory("Lockpick",OTHERS);
	if(item != pPlayer.getInventory().end()){
		srand(time(NULL));
		m_isLocked = ( (rand() % 11) > 3 );
		if(m_isLocked == true){
			pPlayer.getInventory().erase(item);
		}
	}
}
*/


BaseContainer::~BaseContainer(){}















