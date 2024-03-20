#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_THUG_GRANDILOQUENCE_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_THUG_GRANDILOQUENCE_HPP_

#include "../skill/Skill.hpp"

class Grandiloquence:public Skill{

public:
	Grandiloquence(std::string const& name,short int const& level,float const& currentXP
		,float const& sUM,float const& sIM,float const& sIO);

	void setExpNextLevel()override;
	void passLevel()override;
	void useSkill(float const& baseXP)override;

	~Grandiloquence();


};





#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_THUG_GRANDILOQUENCE_HPP_ */
