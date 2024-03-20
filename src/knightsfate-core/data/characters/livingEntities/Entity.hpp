#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_LIVINGENTITIES_ENTITY_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_LIVINGENTITIES_ENTITY_HPP_

#include "../utils/RaceGender.hpp"
#include "../../items/armors/Armor.hpp"

#include <memory>
#include <algorithm>
#include <string>
#include <vector>

class Entity{

	public:

		Entity(std::string const& pName,Gender const& pGender,short int const& pLevel,
				float const& pHealth,std::vector<std::shared_ptr<Armor>> const& pArmor,float const& pTotArmor);

		virtual std::string getName() const;
		virtual Gender getGender() const;

		virtual void setHealth(float const& pHp);
		virtual float getHealth()const;

		virtual void passLevel(short int const& pLevel)=0;
		virtual short int getLevel() const;

		virtual void setTotalArmor();

		virtual ~Entity() =0;

	protected:

		std::string m_name;
		Gender m_gender;
		float m_health;
		short int m_level;
		float m_totalArmor;
		std::vector<std::shared_ptr<Armor>> m_armorsWorn;

};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_BASECLASS_ENTITY_HPP_ */
