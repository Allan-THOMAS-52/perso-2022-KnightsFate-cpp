
#include "SkillTree.hpp"

SkillTree::SkillTree(Gender const& pGender,Race const& pRace):m_gender(pGender),m_race(pRace){
	initSkillTree();
}



void SkillTree::initSkillTree(){
	m_magicka.clear();
	m_smithing.clear();
	m_enchanting.clear();
	m_alchemy.clear();
	m_cooking.clear();
	m_rider.clear();
	m_armor.clear();
	m_weapons.clear();
	m_thug.clear();

	switch(m_race){
		case ELF:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",15,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",10,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",10,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",15,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",7,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",15,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",15,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",1,0,0.95,0.6,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",1,0,1.0,0.6,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",1,0,1.5,0.6,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",8,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",8,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",10,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",10,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",3,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",3,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",1,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",1,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",1,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",1,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",1,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",1,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",5,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",5,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",1,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",5,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",1,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",10,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",1,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",1,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",1,0,8,0.5,150));break;
		case DARK_ELF:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",15,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",10,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",10,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",15,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",7,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",15,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",15,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",1,0,0.95,0.6,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",1,0,1.0,0.6,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",1,0,1.5,0.6,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",8,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",8,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",10,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",10,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",3,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",3,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",1,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",1,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",1,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",1,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",1,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",1,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",10,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",10,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",1,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",5,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",1,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",5,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",5,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",3,0,8,0.5,150));break;
		case IMPEROY:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",5,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",5,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",1,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",1,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",5,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",15,0,0.8,0.4,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",7,0,1,0.4,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",5,0,1.1,0.4,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",7,0,0.8,0.4,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",10,0,1.6,0.4,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",1,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",1,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",1,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",1,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",15,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",15,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",15,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",15,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",15,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",7,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",1,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",1,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",10,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",10,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",10,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",1,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",1,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",1,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",1,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",1,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",1,0,8,0.5,150));break;
		case THENON:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",15,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",10,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",10,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",15,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",7,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",15,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",15,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",1,0,0.95,0.6,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",1,0,1.0,0.6,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",1,0,1.5,0.6,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",1,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",1,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",1,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",1,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",3,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",3,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",1,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",1,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",7,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",7,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",1,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",1,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",5,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",1,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",1,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",15,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",5,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",15,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",1,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",1,0,8,0.5,150));break;
		case DWARAM:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",5,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",5,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",1,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",1,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",5,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",5,0,0.7,0.5,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",5,0,0.95,0.5,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",5,0,1.0,0.5,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",5,0,0.7,0.5,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",5,0,1.5,0.5,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",15,0,130,0.8,100));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",15,0,100,0.8,100));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",1,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",1,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",15,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",15,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",10,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",10,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",1,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",1,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",15,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",15,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",10,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",10,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",1,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",1,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",1,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",1,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",1,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",1,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",1,0,8,0.5,150));break;
		case MOROYAN:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",5,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",5,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",1,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",15,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",15,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",5,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",15,0,1.0,0.4,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",15,0,1.0,0.4,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",15,0,1.1,0.4,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",15,0,1.0,0.4,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",15,0,1.6,0.4,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",1,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",1,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",1,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",1,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",3,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",3,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",10,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",10,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",10,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",5,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",1,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",1,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",10,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",15,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",1,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",1,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",1,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",1,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",1,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",1,0,8,0.5,150));break;
		case MEON:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",5,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",5,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",1,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",1,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",5,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",7,0,0.95,0.6,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",15,0,1.0,0.6,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",1,0,0.7,0.6,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",15,0,1.5,0.6,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",1,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",1,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",1,0,1.3,1.6,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",1,0,0.75,1.6,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",3,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",3,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",1,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",1,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",10,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",10,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",1,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",1,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",1,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",15,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",15,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",15,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",15,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",15,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",15,0,8,0.5,150));break;
		case PTAH:
			m_magicka.push_back(std::make_unique<Aeromancy>("Aeromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Abjuration>("Abjuration",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Divination>("Divination",5,0,1.75,1.5,0));
			m_magicka.push_back(std::make_unique<Evocation>("Evocation",5,0,2.0,1.0,0));
			m_magicka.push_back(std::make_unique<Illusion>("Illusion",5,0,1.5,1.5,0));
			m_magicka.push_back(std::make_unique<Hydromancy>("Hydromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Terramancy>("Terramancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Necromancy>("Necromancy",1,0,1.25,1.0,0));
			m_magicka.push_back(std::make_unique<Pyromancy>("Pyromancy",5,0,2.2,1.5,0));
			m_magicka.push_back(std::make_unique<Transmutation>("Transmutation",1,0,1.0,1.5,0));
			m_magicka.push_back(std::make_unique<Restoration>("Restoration",5,0,1.1,1.0,0));

			m_smithing.push_back(std::make_unique<ArmorS>("Heavy armor smithing",5,0,0.7,0.5,150));
			m_smithing.push_back(std::make_unique<WeaponS>("Weapons smithing",5,0,0.95,0.5,150));
			m_smithing.push_back(std::make_unique<Sewing>("Sewing",5,0,1.0,0.5,150));
			m_smithing.push_back(std::make_unique<JewelS>("Jewels smithing",5,0,0.7,0.5,150));
			m_smithing.push_back(std::make_unique<Tanning>("Tanning",5,0,1.5,0.5,150));

			m_enchanting.push_back(std::make_unique<EnchantAJC>("Armor, jewel and clothes enchanting",1,0,130,1,150));
			m_enchanting.push_back(std::make_unique<EnchantW>("Weapon enchanting",1,0,100,1,150));

			m_alchemy.push_back(std::make_unique<IngredientA>("IngredientA",15,0,1.3,1.4,50));
			m_alchemy.push_back(std::make_unique<Brewing>("Brewing",15,0,0.75,1.4,50));

			m_cooking.push_back(std::make_unique<FoodC>("Cooking",3,0,0.90,1.6,25));
			m_cooking.push_back(std::make_unique<IngredientC>("Cooking ingredients",3,0,1.3,1.6,25));

			m_armor.push_back(std::make_unique<HeavyArmor>("Heavy armor",10,0,3,1.3,0));
			m_armor.push_back(std::make_unique<MediumArmor>("Medium armor",10,0,2.9,1.5,0));
			m_armor.push_back(std::make_unique<LightArmor>("Light armor",10,0,2.9,1.1,0));
			m_armor.push_back(std::make_unique<Unarmored>("Unarmored",10,0,3.5,3,0));

			m_rider.push_back(std::make_unique<Handling>("Handling",15,0,4,1.6,50));
			m_rider.push_back(std::make_unique<Taming>("Taming",15,0,1.5,1.6,150));

			m_weapons.push_back(std::make_unique<Archery>("Archery",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<OneHanded>("One handed",15,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Pugilist>("Pugilist",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<Shield>("Shield",1,0,5,1.5,0));
			m_weapons.push_back(std::make_unique<TwoHanded>("Two handed",1,0,5,1.5,0));

			m_thug.push_back(std::make_unique<Bargain>("Bargain",5,0,0.4,2,0));
			m_thug.push_back(std::make_unique<Counterfeit>("Counterfeit",1,0,2,4,0));
			m_thug.push_back(std::make_unique<Grandiloquence>("Grandiloquence",1,0,0.3,2,0));
			m_thug.push_back(std::make_unique<Lockpicking>("Lockpicking",1,0,15,0.3,120));
			m_thug.push_back(std::make_unique<Pickpocketing>("Pickpocketing",1,0,6,0.3,100));
			m_thug.push_back(std::make_unique<Stealth>("Stealth",1,0,8,0.5,150));break;
	}
}

std::shared_ptr<Skill> SkillTree::getSkill(std::string const& type, std::string const& name) {
    if (type == "magicka") {
        for (auto it = m_magicka.begin(); it != m_magicka.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "smithing") {
        for (auto it = m_smithing.begin(); it != m_smithing.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "enchanting") {
        for (auto it = m_enchanting.begin(); it != m_enchanting.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "alchemy") {
        for (auto it = m_alchemy.begin(); it != m_alchemy.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "cooking") {
        for (auto it = m_cooking.begin(); it != m_cooking.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "rider") {
        for (auto it = m_rider.begin(); it != m_rider.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "armor") {
        for (auto it = m_armor.begin(); it != m_armor.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "weapon") {
        for (auto it = m_weapons.begin(); it != m_weapons.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }
    else if (type == "thug") {
        for (auto it = m_thug.begin(); it != m_thug.end(); ++it) {
            if ((*it)->getName() == name) {
            	return *it;
            }
        }
    }

    return nullptr;
}


SkillTree::~SkillTree(){}













