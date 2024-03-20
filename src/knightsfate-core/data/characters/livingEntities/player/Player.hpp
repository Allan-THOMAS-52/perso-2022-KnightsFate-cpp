#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_LIVINGENTITIES_PLAYER_PLAYER_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_LIVINGENTITIES_PLAYER_PLAYER_HPP_

#include "../Character.hpp"

#include "../../skills/skilltree/SkillTree.hpp"


class Player:public Character{

	public:

		Player(std::string const& pName,Race const& pRace,Gender const& pGender,short int const& pLevel,
				float const& pHealth,float const& pMana,float const& pStam,std::shared_ptr<Rank> const& pRank,
				std::vector<std::shared_ptr<Item>> const& pInv,std::vector<std::shared_ptr<Armor>> const& pArmor,
				std::vector<std::shared_ptr<Jewel>> const& pJewel,std::shared_ptr<Item> const& pMainHand,
				std::shared_ptr<Item> const& pOffHand,std::shared_ptr<Spell> const& pSpellM,
				std::shared_ptr<Spell> const& pSpellO,SkillTree const& pSkillT);


		void setTree(SkillTree const& pTree);
		SkillTree getTree() const;

		void wearArmor(std::shared_ptr<Armor> const& pArmor);
		void removeArmor(std::shared_ptr<Armor> const& pArmor);

		void wearJewel(std::shared_ptr<Jewel> const& pJewel);
		void removeJewel(std::shared_ptr<Jewel> const& pJewel);

		~Player();

	private:

		SkillTree m_skillTree;


};

#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_PLAYER_PLAYER_HPP_ */
