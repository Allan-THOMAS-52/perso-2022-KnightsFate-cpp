
#include "Character.hpp"



Character::Character(std::string const& pName,Race const& pRace,Gender const& pGender,short int const& pLevel,
		float const& pHealth,float const& pMana,float const& pStam,std::shared_ptr<Rank> const& pRank,
		std::vector<std::shared_ptr<Item>> const& pInv,std::vector<std::shared_ptr<Armor>> const& pArmor,
		std::vector<std::shared_ptr<Jewel>> const& pJewel,std::shared_ptr<Item> const& pMainHand,
		std::shared_ptr<Item> const& pOffHand,std::shared_ptr<Spell> const& pSpellM,
		std::shared_ptr<Spell> const& pSpellO):
		Entity(pName,pGender,pLevel,pHealth,pArmor,0.0),
		m_race(pRace),m_mana(pMana),m_stamina(pStam),m_rank(pRank),m_inventory(pInv),
		m_jewelsWorn(pJewel),m_mainHandWeapon(pMainHand),m_offHandWeapon(pOffHand),
		m_mainHandSpell(pSpellM),m_offHandSpell(pSpellO){

}


Race Character::getRace() const{return m_race;}


float Character::getMana()const{return m_mana;}
void Character::setMana(float const& pMana){m_mana=pMana;}

float Character::getStamina()const{return m_stamina;}
void Character::setStamina(float const& pStamina){m_stamina=pStamina;}


void Character::setRank(std::shared_ptr<Rank> const& pRank){m_rank=pRank;}
std::shared_ptr<Rank> Character::getRank() const{return m_rank;}


void Character::sortInvByName(){
	std::sort(m_inventory.begin(), m_inventory.end(), [](const std::shared_ptr<Item>& item1, const std::shared_ptr<Item>& item2) {
	    return item1->getName() < item2->getName();
	});
}

void Character::sortInvByDescValue(){
	std::sort(m_inventory.begin(), m_inventory.end(), [](const std::shared_ptr<Item>& item1, const std::shared_ptr<Item>& item2) {
	        return item1->getValue() > item2->getValue();
	    });
}

void Character::sortInvByAscValue(){
	std::sort(m_inventory.begin(), m_inventory.end(), [](const std::shared_ptr<Item>& item1, const std::shared_ptr<Item>& item2) {
	        return item1->getValue() < item2->getValue();
	    });
}

std::vector<std::shared_ptr<Item>>::const_iterator Character::findInInventory(std::string const& pName, ItemType const& pType) const {
    return std::find_if(m_inventory.begin(), m_inventory.end(), [&](const std::shared_ptr<Item>& item) {
        return item->getName() == pName && item->getType() == pType;
    });
}


bool Character::isInInventory(std::string const& pName, ItemType const& pType) const {
    auto iter = std::find_if(m_inventory.begin(), m_inventory.end(), [&](const std::shared_ptr<Item>& item) {
        return item->getName() == pName && item->getType() == pType;
    });
    return iter != m_inventory.end();
}


std::vector<std::shared_ptr<Item>> Character::getInventory() const{return m_inventory;}

void Character::addToInventory(std::shared_ptr<Item> const& pItem){m_inventory.push_back(pItem);}

void Character::destroyFromInventory(std::vector<std::shared_ptr<Item>>::iterator itemIterator){
	if (itemIterator != m_inventory.end()) {
		m_inventory.erase(itemIterator);
	}
}

std::shared_ptr<Item> Character::takeFromInventory(std::vector<std::shared_ptr<Item>>::iterator itemIterator) {
    if (itemIterator != m_inventory.end()) {
        auto result = *itemIterator;
        m_inventory.erase(itemIterator);
        return result;
    }
    return nullptr;
}

void Character::addItemToInventory(std::shared_ptr<Item> const& pItem){m_inventory.push_back(pItem);}

void Character::addManyItemToInventory(std::vector<std::shared_ptr<Item>> const& pItem){
	m_inventory.insert(m_inventory.end(), pItem.begin(), pItem.end());
}


std::shared_ptr<Item> Character::getMainHandW() const { return m_mainHandWeapon; }
std::shared_ptr<Item> Character::getOffHandW() const { return m_offHandWeapon; }
std::shared_ptr<Spell> Character::getMainHandS() const { return m_mainHandSpell; }
std::shared_ptr<Spell> Character::getOffHandS() const { return m_offHandSpell; }

void Character::attackMainHand(Entity const& pTarget){}
void Character::attackOffHand(Entity const& pTarget){}
void Character::castSpellMH(){}
void Character::castSpellOH(){}

void Character::equipMainHand(std::shared_ptr<Item> const& pWeapon) {
	if(m_mainHandWeapon != nullptr && pWeapon->getType() == WEAPON){
		m_inventory.push_back(m_mainHandWeapon);
		m_mainHandWeapon = pWeapon;
	}else{
		m_mainHandWeapon = pWeapon;
	}
}

void Character::equipOffHand(std::shared_ptr<Item> const& pWeapon) {
	if(m_offHandWeapon != nullptr && pWeapon->getType() == WEAPON){
		m_inventory.push_back(m_offHandWeapon);
		m_offHandWeapon = pWeapon;
	}else{
		m_offHandWeapon = pWeapon;
	}
}

void Character::unEquipMainHand(){
	m_inventory.push_back(m_mainHandWeapon);
	m_mainHandWeapon = nullptr;
}

void Character::unEquipOffHand(){
	m_inventory.push_back(m_offHandWeapon);
	m_offHandWeapon = nullptr;
}


Character::~Character(){

}

