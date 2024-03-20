#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILL_SKILL_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILL_SKILL_HPP_

#include <string>
#include <cmath>

class Skill{

	public:

		Skill(std::string const& name,short int const& level,float const& currentXP,
				float const& sUM,float const& sIM,short int const& sIO);

		virtual void setExpNextLevel()=0;
		virtual void passLevel()=0;
		virtual void useSkill(float const& baseXP)=0;

		virtual std::string getName()const;

		virtual short int getLVL() const;

		virtual ~Skill()=0;

	protected:

		std::string const m_name;
		short int m_level;
		float m_expNextLev;
		float m_currentExp;
		float const m_skillUseMult;
		float const m_skillImpMult;
		short int const m_skillImpOffset;
		float m_skillSpecMod;
};



#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_SKILLS_SKILL_HPP_ */
