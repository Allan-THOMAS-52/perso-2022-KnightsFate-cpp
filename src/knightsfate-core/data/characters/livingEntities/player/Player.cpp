
#include "Player.hpp"

Player::Player(std::string const& pName,Race const& pRace,Gender const& pGender,short int const& pLevel,
		float const& pHealth,float const& pMana,float const& pStam,std::shared_ptr<Rank> const& pRank,
		std::vector<std::shared_ptr<Item>> const& pInv,std::vector<std::shared_ptr<Armor>> const& pArmor,
		std::vector<std::shared_ptr<Jewel>> const& pJewel,std::shared_ptr<Item> const& pMainHand,
		std::shared_ptr<Item> const& pOffHand,std::shared_ptr<Spell> const& pSpellM,
		std::shared_ptr<Spell> const& pSpellO,SkillTree const& pSkillT):
		Character(pName,pRace,pGender,pLevel,pHealth,pMana,pStam,pRank,pInv,pArmor,
				pJewel,pMainHand,pOffHand,pSpellM,pSpellO),m_skillTree(pSkillT){
	//setTotalArmor();
	//calcInvWeight();
}

/*
void Player::setInvWeight(short int const& pInvWeight){m_invWeight = pInvWeight;}
short int Player::getInvWeight() const{return m_invWeight;}
void Player::calcInvWeight(){
	m_invWeight = 0;
	for (auto it = m_inventory.begin(); it != m_inventory.end(); ++it) {
		m_invWeight += (*it)->getWeight();
	}
}
*/

void Player::setTree(SkillTree const& pTree){m_skillTree=pTree;}
SkillTree Player::getTree() const{return m_skillTree;}

/*
void Player::destroyFromInventory(std::shared_ptr<Item> const& pItem){
}

std::shared_ptr<Item> Player::removeFromInventory(std::shared_ptr<Item> const& pItem){
	for (auto it = m_inventory.begin(); it != m_inventory.end(); ++it) {
		if ((*it) == pItem) {
			auto result = *it;
			m_inventory.erase(it);
			if((*it)->getType()!=ARMOR && (*it)->getType()!=JEWEL && (*it)->getType()!=WEAPON){
				calcInvWeight();
			}
			return result;
		}
	}
	return nullptr;
}
*/

void Player::wearArmor(std::shared_ptr<Armor> const& pArmor){
	for (auto it = m_armorsWorn.begin(); it != m_armorsWorn.end(); ++it) {
		if ((*it)->getPart() == pArmor->getPart()) {
			auto result = *it;
			m_armorsWorn.erase(it);
			m_armorsWorn.push_back(pArmor);
			m_inventory.push_back(result);
			setTotalArmor();
			return;
		}
	}
	m_armorsWorn.push_back(pArmor);
	setTotalArmor();
}

void Player::removeArmor(std::shared_ptr<Armor> const& pArmor){
	for (auto it = m_armorsWorn.begin(); it != m_armorsWorn.end(); ++it) {
		if ((*it) == pArmor) {
			m_armorsWorn.erase(it);
			m_inventory.push_back(pArmor);
			setTotalArmor();
			return;
		}
	}
}



void Player::wearJewel(std::shared_ptr<Jewel> const& pJewel){
	for (auto it = m_jewelsWorn.begin(); it != m_jewelsWorn.end(); ++it) {
		if ((*it)->getJewelType() == pJewel->getJewelType()) {
			auto result = *it;
			m_jewelsWorn.erase(it);
			m_jewelsWorn.push_back(pJewel);
			m_inventory.push_back(result);
			return;
		}
	}
	m_jewelsWorn.push_back(pJewel);
}

void Player::removeJewel(std::shared_ptr<Jewel> const& pJewel){
	for (auto it = m_jewelsWorn.begin(); it != m_jewelsWorn.end(); ++it) {
		if ((*it) == pJewel) {
			m_jewelsWorn.erase(it);
			m_inventory.push_back(pJewel);
			return;
		}
	}
}







Player::~Player(){

}



















