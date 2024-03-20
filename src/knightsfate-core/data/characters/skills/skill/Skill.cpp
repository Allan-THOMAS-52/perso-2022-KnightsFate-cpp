
#include "Skill.hpp"

	Skill::Skill(std::string const& name,short int const& level,float const& currentXP,
			float const& sUM,float const& sIM,short int const& sIO):m_name(name),
				m_level(level),m_expNextLev(0),m_currentExp(currentXP),m_skillUseMult(sUM),
				m_skillImpMult(sIM),m_skillImpOffset(sIO),m_skillSpecMod(1){
	}

	void Skill::setExpNextLevel(){
		m_expNextLev = m_skillImpMult*(float)pow((float)m_level,1.95) + m_skillImpOffset;
	}

	void Skill::passLevel(){
		if( m_currentExp >= m_expNextLev ){
			m_level++;
			m_currentExp = 0;
			setExpNextLevel();
		}
	}

	void Skill::useSkill(float const& baseXP){
		m_currentExp += m_skillUseMult*(baseXP*m_skillSpecMod);
		passLevel();
	}

	std::string Skill::getName()const{return m_name;}

	short int Skill::getLVL() const{return m_level;}

	Skill::~Skill(){

	}


