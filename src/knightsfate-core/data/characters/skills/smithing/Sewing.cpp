
#include "Sewing.hpp"

Sewing::Sewing(std::string const& name,short int const& level,float const& currentXP
		,float const& sUM,float const& sIM,float const& sIO):Skill(name,level,currentXP,sUM,sIM,sIO){
	setExpNextLevel();

}

void Sewing::setExpNextLevel(){
	m_expNextLev = m_skillImpMult*(float)pow((float)m_level,1.95) + m_skillImpOffset;
}

void Sewing::passLevel(){
	if( m_currentExp >= m_expNextLev ){
		m_level++;
		m_currentExp = 0;
		setExpNextLevel();
	}
}

void Sewing::useSkill(float const& baseXP){
	m_currentExp += m_skillUseMult*(baseXP*m_skillSpecMod);
	passLevel();
}

Sewing::~Sewing(){}
