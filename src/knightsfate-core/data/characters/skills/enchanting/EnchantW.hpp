#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_ENCHANTING_ENCHANTW_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_ENCHANTING_ENCHANTW_HPP_


#include "../skill/Skill.hpp"

class EnchantW:public Skill{

public:
	EnchantW(std::string const& name,short int const& level,float const& currentXP
		,float const& sUM,float const& sIM,float const& sIO);

	void setExpNextLevel()override;
	void passLevel()override;
	void useSkill(float const& baseXP)override;

	~EnchantW();


};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_ENCHANTING_ENCHANTW_HPP_ */
