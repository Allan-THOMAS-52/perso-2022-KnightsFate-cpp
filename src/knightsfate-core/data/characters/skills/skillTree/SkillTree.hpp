#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLTREE_SKILLTREE_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLTREE_SKILLTREE_HPP_

#include "../../utils/RaceGender.hpp"
#include "../skill/Skill.hpp"
#include "../utils/IncludesTree.hpp"

#include <vector>
#include <memory>

class SkillTree{

	public:

		SkillTree(Gender const& pGender,Race const& pRace);
		void initSkillTree();
		std::shared_ptr<Skill> getSkill(std::string const& type,std::string const& name) ;

		~SkillTree();

	private:

		std::vector<std::shared_ptr<Skill>> m_magicka;
		std::vector<std::shared_ptr<Skill>> m_smithing;
		std::vector<std::shared_ptr<Skill>> m_enchanting;
		std::vector<std::shared_ptr<Skill>> m_alchemy;
		std::vector<std::shared_ptr<Skill>> m_cooking;
		std::vector<std::shared_ptr<Skill>> m_rider;
		std::vector<std::shared_ptr<Skill>> m_armor;
		std::vector<std::shared_ptr<Skill>> m_weapons;
		std::vector<std::shared_ptr<Skill>> m_thug;
		Gender m_gender;
		Race m_race;

};

#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_SKILL_HPP_ */
