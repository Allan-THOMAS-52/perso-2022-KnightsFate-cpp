#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_COOKING_FOODC_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_COOKING_FOODC_HPP_

#include "../skill/Skill.hpp"

class FoodC:public Skill{

public:
	FoodC(std::string const& name,short int const& level,float const& currentXP
		,float const& sUM,float const& sIM,float const& sIO);

	void setExpNextLevel()override;
	void passLevel()override;
	void useSkill(float const& baseXP)override;

	~FoodC();


};

#endif
