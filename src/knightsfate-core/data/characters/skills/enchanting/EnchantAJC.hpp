#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_ENCHANTING_ENCHANTAJC_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_ENCHANTING_ENCHANTAJC_HPP_


#include "../skill/Skill.hpp"

class EnchantAJC:public Skill{

public:
	EnchantAJC(std::string const& name,short int const& level,float const& currentXP
		,float const& sUM,float const& sIM,float const& sIO);

	void setExpNextLevel()override;
	void passLevel()override;
	void useSkill(float const& baseXP)override;

	~EnchantAJC();


};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_ENCHANTING_ENCHANTAJC_HPP_ */
