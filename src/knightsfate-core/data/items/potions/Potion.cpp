#include "Potion.hpp"
#include <iostream>

Potion::Potion(PotionEffects const &pEffects,short int const &pVal,
		ItemType const &pType, float const &pWeight,
		std::string const &pName, short int const &pID) :
		Item(pVal, SCROLL, pWeight, pName, pID), m_duration(0.0), m_fEffect(
				0.0), m_effects(pEffects){

}

Potion::Potion(Potion const& pOt):Item(pOt){
	m_duration=pOt.m_duration;
	m_fEffect=pOt.m_fEffect;
	m_effects=pOt.m_effects;
}


/*
void Potion::info() const{
 std::cout << m_name << std::endl;

 switch(m_effects){
 case ABJURATOR:std::cout << "Abjuration spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case ABSORBING:std::cout << "Blocking absorbs " << m_fEffect << "% more damage for "<< m_duration<<" seconds" << std::endl;break;
 case AEROMANCER:std::cout << "Aeromancy spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case ARCHERY:std::cout << "Bows do " << m_fEffect << "% more damage for "<< m_duration<<" seconds" << std::endl;break;
 case ARTISAN:std::cout << "For "<<m_duration<<" seconds, crafting is " << m_fEffect<<"% better"<<std::endl;break;
 case BARGAIN:std::cout << "You bargain for " << m_fEffect << "% better prices for "<< m_duration<<" seconds" << std::endl;break;
 case BERSERKER:std::cout << "Two handed weapons do " << m_fEffect << "% more damage for "<< m_duration<<" seconds" << std::endl;break;
 case CAMOUFLAGE: std::cout << "You are invisible for "<<m_duration<< " seconds"<< std::endl;break;
 case CELERITY:std::cout << "You move " << m_fEffect << "% faster for "<< m_duration<<" seconds" << std::endl;break;
 case CONJURATOR:std::cout << "Conjuration spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case COUNTERFEIT: std::cout << "Counterfeiting will be " << m_fEffect << "% easier for "<< m_duration<<" seconds" << std::endl;break;
 case CURE_DISEASE: std::cout <<"Cure any normal disease"<< std::endl;break;
 case CURE_POISON: std::cout <<"Cure any normal poison"<< std::endl;break;
 case CURE_PARALYSIS: std::cout <<"Cure normal paralysis"<< std::endl;break;
 case DIVINATOR:std::cout << "Divination spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case ENCHANTER:std::cout << "Items are enchanted  " << m_fEffect << " stronger for "<< m_duration<<" seconds" << std::endl;break;
 case EVOCATOR:std::cout << "Evocation spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case GEOMANCER:std::cout << "Geomancy spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case GRANDILOQUENCE:std::cout << "Increase your speaking ability by " << m_fEffect << " for "<< m_duration<<" seconds" << std::endl;break;
 case HEALTH_P:std::cout << "Restore " << m_fEffect << " points of health" << std::endl;break;
 case HUNTER:std::cout << "Increase medium armor skill by  " << m_fEffect << " for "<< m_duration<<" seconds" << std::endl;break;
 case HYDROMANCER:std::cout << "Hydromancy spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case ILLUSIONER:std::cout << "Illusion spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case KNIGHT:std::cout << "Increase heavy armor skill by  " << m_fEffect << " for "<< m_duration<<" seconds" << std::endl;break;
 case LASTING_POTENCY:std::cout << "Magicka regenerates " << m_fEffect << "% faster for "<< m_duration<<" seconds" << std::endl;break;
 case LEVITATION:std::cout << "Makes you able to walk on air for  "<< m_duration<<" seconds" << std::endl;break;
 case LOCKPICKING:std::cout << "Lockpicking is  " << m_fEffect << "% easier for "<< m_duration<<" seconds" << std::endl;break;
 case MANA_P:std::cout << "Restore " << m_fEffect << " points of magicka" << std::endl;break;
 case NECROMANCER:std::cout << "Necromancy spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case NOISE_CANCELLING:std::cout << "You make " << m_fEffect << "% less noise for "<< m_duration<<" seconds" << std::endl;break;
 case PICKPOCKETING:std::cout << "Pickpocketing is  " << m_fEffect << "% easier for "<< m_duration<<" seconds" << std::endl;break;
 case PUGILIST:std::cout << "Increase the pugilist skill by  " << m_fEffect << " for "<< m_duration<<" seconds" << std::endl;break;
 case PYROMANCER:std::cout << "Pyromancy spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case REGENERATION:std::cout << "Health regenerates " << m_fEffect << "% faster for "<< m_duration<<" seconds" << std::endl;break;
 case SHAMAN:std::cout << "Restoration spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case SKIRMISHER:std::cout << "Increase light armor skill by  " << m_fEffect << " for "<< m_duration<<" seconds" << std::endl;break;
 case STAMINA_P: std::cout << "Restore " << m_fEffect << " points of stamina" << std::endl;break;
 case STRENGTH: std::cout << "Increase your carrying capacity by " << m_fEffect << "for " << m_duration <<" seconds"<< std::endl;break;
 case TRANSMUTATOR:std::cout << "Transmutation spells last " << m_fEffect << "% longer for "<< m_duration<<" seconds" << std::endl;break;
 case VIGOR:std::cout << "Stamina regenerates " << m_fEffect << "% faster for "<< m_duration<<" seconds" << std::endl;break;
 case WATERBREATHING:std::cout << "Allows you to breathe underwater for "<<m_duration<<" seconds" << std::endl;break;
 case WARRIOR:std::cout << "One handed weapons do " << m_fEffect << "% more damage for "<< m_duration<<" seconds" << std::endl;break;
 }
 switch(m_rarity){
 case COMMON:  std::cout << "Rarity: common" << std::endl;break;
 case RARE:  std::cout << "Rarity: rare" << std::endl;break;
 case EPIC:  std::cout << "Rarity: epic" << std::endl;break;
 case LEGENDARY:  std::cout << "Rarity: legendary" << std::endl;break;
 case UNFATHOMABLE: std::cout << "Rarity: unfathomable" << std::endl;break;
 }
 }

 void Potion::setName(){

 switch(m_rarity){
 case COMMON: m_name = "Cheap potion of "; break;
 case RARE: m_name = "Standard potion of "; break;
 case EPIC: m_name = "Superb potion of "; break;
 case LEGENDARY: m_name = "Incredible potion of "; break;
 case UNFATHOMABLE: m_name = "Transcendent potion of "; break;
 }
 switch(m_effects){
 case ABJURATOR: m_name += "abjuration";break;
 case ABSORBING:m_name += "shock absorption";break;
 case AEROMANCER:m_name += "aeromancy";break;
 case ARCHERY:m_name += "archery";break;
 case ARTISAN:m_name += "fabrication";break;
 case BARGAIN:m_name += "bargain";break;
 case BERSERKER:m_name += "the berserker";break;
 case CAMOUFLAGE:m_name += "the unseen";break;
 case CELERITY:m_name += "celerity";break;
 case CONJURATOR:m_name += "conjuration";break;
 case COUNTERFEIT:m_name += "forgery";break;
 case CURE_DISEASE:m_name += "cure disease";break;
 case CURE_POISON:m_name += "poison cure";break;
 case CURE_PARALYSIS:m_name += "paralysis cure";break;
 case DIVINATOR:m_name += "divination";break;
 case ENCHANTER:m_name += "the enchanter";break;
 case EVOCATOR:m_name += "evocation";break;
 case GEOMANCER:m_name += "geomancy";break;
 case GRANDILOQUENCE:m_name += "grandiloquence";break;
 case HEALTH_P:m_name += "health";break;
 case HUNTER:m_name+="the hunter";break;
 case HYDROMANCER:m_name += "hydromancy";break;
 case ILLUSIONER:m_name += "the illusionist";break;
 case KNIGHT:m_name += "the knight";break;
 case LASTING_POTENCY:m_name += "lasting potency";break;
 case LEVITATION:m_name += "levitation";break;
 case LOCKPICKING:m_name += "lockpicking";break;
 case MANA_P:m_name += "mana";break;
 case NECROMANCER:m_name += "necromancy";break;
 case NOISE_CANCELLING:m_name += "noise cancelling";break;
 case PICKPOCKETING:m_name += "robery";break;
 case PUGILIST:m_name+="the pugilist";break;
 case PYROMANCER:m_name += "pyromancy";break;
 case REGENERATION:m_name += "regeneration";break;
 case SHAMAN:m_name += "the shaman";break;
 case SKIRMISHER:m_name += "the skirmisher";break;
 case STAMINA_P:m_name += "stamina";break;
 case STRENGTH:m_name += "strength";break;
 case TRANSMUTATOR:m_name += "tranmutation";break;
 case VIGOR:m_name += "vigor";break;
 case WATERBREATHING:m_name += "waterbreathing";break;
 case WARRIOR:m_name += "the warrior";break;
 }
 }

 void Potion::setValue(){
 m_value = 0;
 switch(m_effects){
 case ABJURATOR: m_value += 150;break;
 case ABSORBING:m_value += 50;break;
 case AEROMANCER:m_value += 150;break;
 case ARCHERY:m_value += 175;break;
 case ARTISAN:m_value += 350;break;
 case BARGAIN:m_value += 235;break;
 case BERSERKER:m_value += 175;break;
 case CAMOUFLAGE:m_value += 300;break;
 case CELERITY:m_value += 125;break;
 case CONJURATOR:m_value += 150;break;
 case COUNTERFEIT:m_value += 275;break;
 case CURE_DISEASE:m_value += 350;break;
 case CURE_POISON:m_value += 350;break;
 case CURE_PARALYSIS:m_value += 350;break;
 case DIVINATOR:m_value += 150;break;
 case ENCHANTER:m_value += 150;break;
 case EVOCATOR:m_value += 150;break;
 case GEOMANCER:m_value += 150;break;
 case GRANDILOQUENCE:m_value += 290;break;
 case HEALTH_P:m_value += 75;break;
 case HUNTER:m_value += 200; break;
 case HYDROMANCER:m_value += 150;break;
 case ILLUSIONER:m_value += 150;break;
 case KNIGHT:m_value += 200;break;
 case LASTING_POTENCY:m_value += 120;break;
 case LEVITATION:m_value += 345;break;
 case LOCKPICKING:m_value += 287;break;
 case MANA_P:m_name += 75;break;
 case NECROMANCER:m_value += 150;break;
 case NOISE_CANCELLING:m_value += 200;break;
 case PICKPOCKETING:m_value += 300;break;
 case PUGILIST:m_value+=190;break;
 case PYROMANCER:m_value += 150;break;
 case REGENERATION:m_value += 120;break;
 case SHAMAN:m_value += 150;break;

 case SKIRMISHER:m_value += 200;break;
 case STAMINA_P:m_value += 75;break;
 case STRENGTH:m_value += 90;break;
 case TRANSMUTATOR:m_value += 150;break;
 case VIGOR:m_value += 120;break;
 case WATERBREATHING:m_value += 300;break;
 case WARRIOR:m_value += 175;break;
 }
 switch(m_rarity){
 case COMMON: m_value *= 0.6; break;
 case RARE: m_value *= 0.85; break;
 case EPIC: m_value *= 1.1; break;
 case LEGENDARY: m_value *= 1.4; break;
 case UNFATHOMABLE: m_value *= 2; break;
 }
 }

 void Potion::setWeight(){
 switch(m_rarity){
 case COMMON: m_weight = 0.7; break;
 case RARE: m_weight = 0.6; break;
 case EPIC: m_weight = 0.5; break;
 case LEGENDARY: m_weight = 0.4; break;
 case UNFATHOMABLE: m_weight = 0.3; break;
 }
 }


void Potion::setDuration() {
	m_duration = 0.0;
	switch (m_effects) {
	case ABJURATOR:
		m_duration += 60.0;
		break;
	case ABSORBING:
		m_duration += 60.0;
		break;
	case AEROMANCER:
		m_duration += 60.0;
		break;
	case ARCHERY:
		m_duration += 60.0;
		break;
	case ARTISAN:
		m_duration += 35.0;
		break;
	case BARGAIN:
		m_duration += 35.0;
		break;
	case BERSERKER:
		m_duration += 60.0;
		break;
	case CAMOUFLAGE:
		m_duration += 20.0;
		break;
	case CELERITY:
		m_duration += 35;
		break;
	case CONJURATOR:
		m_duration += 60.0;
		break;
	case COUNTERFEIT:
		m_duration += 35;
		break;
	case CURE_DISEASE:
		m_duration += 0.0;
		break;
	case CURE_POISON:
		m_duration += 0.0;
		break;
	case CURE_PARALYSIS:
		m_duration += 0.0;
		break;
	case DIVINATOR:
		m_duration += 60.0;
		break;
	case ENCHANTER:
		m_duration += 60.0;
		break;
	case EVOCATOR:
		m_duration += 60.0;
		break;
	case GEOMANCER:
		m_duration += 60.0;
		break;
	case GRANDILOQUENCE:
		m_duration += 30.0;
		break;
	case HEALTH_P:
		m_duration += 0.0;
		break;
	case HUNTER:
		m_duration += 60.0;
		break;
	case HYDROMANCER:
		m_duration += 60.0;
		break;
	case ILLUSIONER:
		m_duration += 60.0;
		break;
	case KNIGHT:
		m_duration += 60.0;
		break;
	case LASTING_POTENCY:
		m_duration += 300.0;
		break;
	case LEVITATION:
		m_duration += 35.0;
		break;
	case LOCKPICKING:
		m_duration += 30.0;
		break;
	case MANA_P:
		m_duration += 0.0;
		break;
	case NECROMANCER:
		m_duration += 60.0;
		break;
	case NOISE_CANCELLING:
		m_duration += 60.0;
		break;
	case PICKPOCKETING:
		m_duration += 60.0;
		break;
	case PUGILIST:
		m_duration += 60.0;
		break;
	case PYROMANCER:
		m_duration += 60.0;
		break;
	case REGENERATION:
		m_duration += 300.0;
		break;
	case SHAMAN:
		m_duration += 60.0;
		break;
	case SKIRMISHER:
		m_duration += 60.0;
		break;
	case STAMINA_P:
		m_duration += 0.0;
		break;
	case STRENGTH:
		m_duration += 300.0;
		break;
	case TRANSMUTATOR:
		m_duration += 60.0;
		break;
	case VIGOR:
		m_duration += 300.0;
		break;
	case WATERBREATHING:
		m_duration += 20.0;
		break;
	case WARRIOR:
		m_duration += 60.0;
		break;
	}
	switch (m_rarity) {
	case COMMON:
		m_duration *= 0.6;
		break;
	case RARE:
		m_duration *= 0.85;
		break;
	case EPIC:
		m_duration *= 1.1;
		break;
	case LEGENDARY:
		m_duration *= 1.25;
		break;
	case UNFATHOMABLE:
		m_duration *= 1.7;
		break;
	}
}

void Potion::setFEffect() {
	m_fEffect = 0.0;
	switch (m_effects) {
	case ABJURATOR:
		m_fEffect += 20.0;
		break;
	case ABSORBING:
		m_fEffect += 60.0;
		break;
	case AEROMANCER:
		m_fEffect += 20.0;
		break;
	case ARCHERY:
		m_fEffect += 20.0;
		break;
	case ARTISAN:
		m_fEffect += 20.0;
		break;
	case BARGAIN:
		m_fEffect += 35.0;
		break;
	case BERSERKER:
		m_fEffect += 20.0;
		break;
	case CAMOUFLAGE:
		m_fEffect += 20.0;
		break;
	case CELERITY:
		m_fEffect += 20.0;
		break;
	case CONJURATOR:
		m_fEffect += 20.0;
		break;
	case COUNTERFEIT:
		m_fEffect += 25.0;
		break;
	case CURE_DISEASE:
		break;
	case CURE_POISON:
		break;
	case CURE_PARALYSIS:
		break;
	case DIVINATOR:
		m_fEffect += 20.0;
		break;
	case ENCHANTER:
		m_fEffect += 20.0;
		break;
	case EVOCATOR:
		m_fEffect += 20.0;
		break;
	case GEOMANCER:
		m_fEffect += 20.0;
		break;
	case GRANDILOQUENCE:
		m_fEffect += 20.0;
		break;
	case HEALTH_P:
		m_fEffect += (m_rarity == UNFATHOMABLE) ? 99999.9 : 83.3;
		break;
	case HUNTER:
		m_fEffect += 20.0;
		break;
	case HYDROMANCER:
		m_fEffect += 20.0;
		break;
	case ILLUSIONER:
		m_fEffect += 20.0;
		break;
	case KNIGHT:
		m_fEffect += 20.0;
		break;
	case LASTING_POTENCY:
		m_fEffect += 55.5;
		break;
	case LEVITATION:
		break;
	case LOCKPICKING:
		m_fEffect += 25.0;
		break;
	case MANA_P:
		m_fEffect += (m_rarity == UNFATHOMABLE) ? 99999.9 : 83.3;
		break;
	case NECROMANCER:
		m_fEffect += 20.0;
		break;
	case NOISE_CANCELLING:
		m_fEffect += 35.0;
		break;
	case PICKPOCKETING:
		m_fEffect += 20.0;
		break;
	case PUGILIST:
		m_fEffect += 20.0;
		break;
	case PYROMANCER:
		m_fEffect += 20.0;
		break;
	case REGENERATION:
		m_fEffect += 55.5;
		break;
	case SHAMAN:
		m_fEffect += 20.0;
		break;
	case SKIRMISHER:
		m_fEffect += 20.0;
		break;
	case STAMINA_P:
		m_fEffect += (m_rarity == UNFATHOMABLE) ? 99999.9 : 83.3;
		break;
	case STRENGTH:
		m_fEffect += 35.0;
		break;
	case TRANSMUTATOR:
		m_fEffect += 20.0;
		break;
	case VIGOR:
		m_fEffect += 55.5;
		break;
	case WATERBREATHING:
		m_fEffect += 20.0;
		break;
	case WARRIOR:
		m_fEffect += 20.0;
		break;
	}
	switch (m_rarity) {
	case COMMON:
		m_fEffect *= 0.6;
		break;
	case RARE:
		m_fEffect *= 0.85;
		break;
	case EPIC:
		m_fEffect *= 1.1;
		break;
	case LEGENDARY:
		m_fEffect *= 1.4;
		break;
	case UNFATHOMABLE:
		m_fEffect *= 1.8;
		break;
	}
}
*/


float Potion::getDuration() const {return m_duration;}
PotionEffects Potion::getEffects() const {return m_effects;}
float Potion::getFEffect() const {return m_fEffect;}

void Potion::setDuration(float mDuration){m_duration = mDuration;}
void Potion::setEffects(PotionEffects mEffects){m_effects = mEffects;}
void Potion::setFEffect(float mFEffect){m_fEffect = mFEffect;}


bool Potion::operator==(Item const &pOther) const {
	 try{
		// Try to downcast to Armor using dynamic_cast
		Potion const& otherPotion = dynamic_cast<Potion const&>(pOther);
		return	m_ID == otherPotion.m_ID &&
				m_fEffect == otherPotion.m_fEffect &&
				m_effects == otherPotion.m_effects &&
				m_value == otherPotion.m_value;
	 }catch (const std::bad_cast&) {
		 return false; // If the downcast fails, return false
	 }
}

bool Potion::operator!=(Item const &pOther) const {return !(*this == pOther);}
bool Potion::operator<(Item const &pOther) const {return false;}
bool Potion::operator>(Item const &pOther) const {return false;}

Potion::~Potion() {}


