#include "Scroll.hpp"

Scroll::Scroll(float const &pCastT, float const &pDur, float const &pFEff,
		ScrollEffects const &pEffects,short int const &pVal, ItemType const &pType,
		float const &pWeight,std::string const &pName, short int const &pID):
		Item(pVal, pType, pWeight, pName, pID), m_castDuration(pCastT), m_duration(
				pDur), m_fEffect(0.0), m_effects(pEffects){

}

Scroll::Scroll(Scroll const& pScro):Item(pScro){
	m_castDuration=pScro.m_castDuration;
	m_duration=pScro.m_duration;
	m_fEffect=pScro.m_fEffect;
	m_effects=pScro.m_effects;
}


float Scroll::getCastDur() const {return m_castDuration;}
float Scroll::getDuration() const {return m_duration;}
float Scroll::getFEffect() const {return m_fEffect;}
ScrollEffects Scroll::getEffects() const {return m_effects;}

void Scroll::setCastDuration(float mCastDuration) {m_castDuration = mCastDuration;}
void Scroll::setDuration(float mDuration) {m_duration = mDuration;}
void Scroll::setEffects(ScrollEffects mEffects) {m_effects = mEffects;}
void Scroll::setFEffect(float mFEffect) {m_fEffect = mFEffect;}


bool Scroll::operator==(Item const &pOther) const {
	 try{
	    // Try to downcast to Armor using dynamic_cast
		Scroll const& otherScroll = dynamic_cast<Scroll const&>(pOther);
		return m_ID == otherScroll.m_ID;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool Scroll::operator!=(Item const &pOther) const {return !(*this == pOther);}
bool Scroll::operator<(Item const &pOther) const {return false;}
bool Scroll::operator>(Item const &pOther) const {return false;}

Scroll::~Scroll() {
}


