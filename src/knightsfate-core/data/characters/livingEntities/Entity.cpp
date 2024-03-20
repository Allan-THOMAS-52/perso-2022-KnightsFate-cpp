
#include "Entity.hpp"

Entity::Entity(std::string const& pName,Gender const& pGender,short int const& pLevel,
				float const& pHealth,std::vector<std::shared_ptr<Armor>> const& pArmor,float const& pTotArmor)
	:m_name(pName),m_gender(pGender),m_health(pHealth),m_level(pLevel),m_totalArmor(pTotArmor){

}

std::string Entity::getName() const{return m_name;}

Gender Entity::getGender()const{return m_gender;}

float Entity::getHealth()const{return m_health;}
void Entity::setHealth(float const& pHealth){m_health=pHealth;}

void Entity::passLevel(short int const& pLevel){}
short int Entity::getLevel() const{return m_level;}

void Entity::setTotalArmor(){
	m_totalArmor=0;
	for (auto it = m_armorsWorn.begin(); it != m_armorsWorn.end(); ++it) {
		m_totalArmor += (*it)->getArmor();
	}
}

Entity::~Entity(){

}









