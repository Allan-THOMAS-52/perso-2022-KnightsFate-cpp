
#include "Enchant.hpp"


Enchant::Enchant(std::string const& pName,std::string const& pDesc,std::string const& pEff,float const& pMag,
		bool const& pNeed,std::vector<std::string> const& pApp,short int const& pID):m_name(pName),m_description(pDesc),
		m_effect(pEff),m_magnitude(pMag),m_needRune(pNeed),m_applicableItems(pApp),m_ID(pID),m_mat(E_INVALID),m_disMat(D_INVALID){

}

Enchant::Enchant(short int const& pID):m_name(""),m_description(""),m_effect(""),m_magnitude(0.0),m_needRune(false)
	,m_ID(pID),m_mat(E_INVALID),m_disMat(D_INVALID){

}




DisEnchantMat Enchant::getDisMat() const{return m_disMat;}
float Enchant::getMagnitude() const{return m_magnitude;}
bool Enchant::getNeedRune() const{return m_needRune;}
short int Enchant::getID() const{return m_ID;}
std::vector<std::string> Enchant::getApplicableItems() const{return m_applicableItems;}
std::string Enchant::getDescription() const {return m_description;}
std::string Enchant::getEffect() const {return m_effect;}
EnchantMat Enchant::getMat() const {return m_mat;}
std::string Enchant::getName() const {return m_name;}

void Enchant::setApplicableItems(std::vector<std::string> const& mApplicableItems) {
	m_applicableItems = mApplicableItems;
}

void Enchant::setDescription(std::string const& mDescription) {m_description = mDescription;}
void Enchant::setDisMat(DisEnchantMat const& mDisMat) {m_disMat = mDisMat;}
void Enchant::setEffect(std::string const& mEffect) {m_effect = mEffect;}
void Enchant::setMagnitude(float const& mMagnitude) {m_magnitude = mMagnitude;}
void Enchant::setMat(EnchantMat const& mMat) {m_mat = mMat;}
void Enchant::setName(std::string const& mName) {m_name = mName;}
void Enchant::setNeedRune(bool const& mNeedRune) {m_needRune = mNeedRune;}
void Enchant::setDisMat(EnchantMat const& pMat){
	switch(pMat){
		case -1:  m_disMat = D_INVALID; break;
		case 397: m_disMat = AMETHYSTDUST; break;
		case 400: m_disMat = LUMINARADUST; break;
		case 403: m_disMat = EMERALDDUST; break;
		case 407: m_disMat = AETHERITEDUST; break;
		case 421: m_disMat = ITONFRAGMENT; break;
		case 422: m_disMat = KADOFRAGMENT; break;
		case 423: m_disMat = OTAFRAGMENT; break;
		case 424: m_disMat = PEDASFRAGMENT; break;
	}
}



