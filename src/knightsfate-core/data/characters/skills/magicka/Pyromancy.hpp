#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_MAGICKA_PYROMANCY_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_MAGICKA_PYROMANCY_HPP_


#include "../skill/Skill.hpp"

class Pyromancy:public Skill{

public:
	Pyromancy(std::string const& name,short int const& level,float const& currentXP
		,float const& sUM,float const& sIM,float const& sIO);

	void setExpNextLevel()override;
	void passLevel()override;
	void useSkill(float const& baseXP)override;

	~Pyromancy();


};

#endif
