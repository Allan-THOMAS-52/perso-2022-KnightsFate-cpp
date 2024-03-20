#ifndef KNIGHTSFATE_CORE_DATA_CHARACTERS_LIVINGENTITIES_CHARACTER_HPP_
#define KNIGHTSFATE_CORE_DATA_CHARACTERS_LIVINGENTITIES_CHARACTER_HPP_

#include "Entity.hpp"
#include "../utils/RaceGender.hpp"
#include "../spells/Spell.hpp"
#include "../ranks/Rank.hpp"
#include "../../items/jewels/Jewel.hpp"

#include <vector>
#include <memory>

class Character:public Entity{

	public:

		Character(std::string const& pName,Race const& pRace,Gender const& pGender,short int const& pLevel,
			float const& pHealth,float const& pMana,float const& pStam,std::shared_ptr<Rank> const& pRank,
			std::vector<std::shared_ptr<Item>> const& pInv,std::vector<std::shared_ptr<Armor>> const& pArmor,
			std::vector<std::shared_ptr<Jewel>> const& pJewel,std::shared_ptr<Item> const& pMainHand,
			std::shared_ptr<Item> const& pOffHand,std::shared_ptr<Spell> const& pSpellM,
			std::shared_ptr<Spell> const& pSpellO);


		virtual Race getRace() const;


		virtual void setMana(float const& pMana);
		virtual float getMana()const;


		virtual void setStamina(float const& pStam);
		virtual float getStamina()const;


		virtual void setRank(std::shared_ptr<Rank> const& pRank);
		virtual std::shared_ptr<Rank> getRank() const;


		virtual void sortInvByName();
		virtual void sortInvByDescValue();
		virtual void sortInvByAscValue();

		virtual std::vector<std::shared_ptr<Item>>::const_iterator findInInventory(std::string const& pName,ItemType const& pType) const;

		virtual bool isInInventory(std::string const& pName, ItemType const& pType) const;

		virtual std::vector<std::shared_ptr<Item>> getInventory() const;

		virtual void addToInventory(std::shared_ptr<Item> const& pItem);

		virtual void destroyFromInventory(std::vector<std::shared_ptr<Item>>::iterator pItem);

		virtual std::shared_ptr<Item> takeFromInventory(std::vector<std::shared_ptr<Item>>::iterator itemIterator);

		virtual void addItemToInventory(std::shared_ptr<Item> const& pItem);

		virtual void addManyItemToInventory(std::vector<std::shared_ptr<Item>> const& pItem);


		virtual std::shared_ptr<Item> getMainHandW() const;
		virtual std::shared_ptr<Item> getOffHandW() const;
		virtual std::shared_ptr<Spell> getMainHandS() const;
		virtual std::shared_ptr<Spell> getOffHandS() const;

		virtual void attackMainHand(Entity const& pTarget);
		virtual void attackOffHand(Entity const& pTarget);
		virtual void castSpellMH();
		virtual void castSpellOH();

		virtual void equipMainHand(std::shared_ptr<Item> const& pWeapon);
		virtual void equipOffHand(std::shared_ptr<Item> const& pWeapon);
		virtual void unEquipMainHand();
		virtual void unEquipOffHand();


		virtual ~Character()=0;

	protected:

		Race m_race;
		float m_mana;
		float m_stamina;

		std::shared_ptr<Rank> m_rank;

		std::vector<std::shared_ptr<Item>> m_inventory;


		std::vector<std::shared_ptr<Jewel>> m_jewelsWorn;

		std::vector<std::shared_ptr<Spell>> m_spellBook;

		std::shared_ptr<Item> m_mainHandWeapon;
		std::shared_ptr<Item> m_offHandWeapon;
		std::shared_ptr<Spell> m_mainHandSpell;
		std::shared_ptr<Spell> m_offHandSpell;


};

#endif /* KNIGHTSFATE_CORE_DATA_CHARACTERS_CHARACTERS_CHARACTER_HPP_ */
