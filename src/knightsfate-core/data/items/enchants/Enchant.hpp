#ifndef KNIGHTSFATE_CORE_DATA_ITEMS_ENCHANT_ENCHANT_HPP_
#define KNIGHTSFATE_CORE_DATA_ITEMS_ENCHANT_ENCHANT_HPP_

#include <string>
#include <vector>
#include <memory>

enum EnchantMat{
		E_INVALID = -1,
	//NORMAL MATERIALS
		AMETHYST = 397,
		LUMINARA = 400,
		EMERALD = 403,
		AETHERITE = 407,
	//RUNES
		ITON = 421,
		KADO = 422,
		OTA = 423,
		PEDAS = 424
};
enum DisEnchantMat{
		D_INVALID = -1,
	//NORMAL MATERIALS
		AMETHYSTDUST = 425,
		LUMINARADUST = 428,
		EMERALDDUST = 431,
		AETHERITEDUST = 434,
	//RUNES
		ITONFRAGMENT = 435,
		KADOFRAGMENT = 436,
		OTAFRAGMENT= 437,
		PEDASFRAGMENT = 438
};


class Enchant{

	public:

  		Enchant(std::string const& pName,std::string const& pDesc,std::string const& pEff,float const& pMag,
  				bool const& pNeed,std::vector<std::string> const& pApp,short int const& pID);

  		Enchant(short int const& pID);

  		void setDisMat(EnchantMat const& pMat);

  		DisEnchantMat getDisMat() const;
  		float getMagnitude() const;
  		bool getNeedRune() const;
  		short int getID() const;
  		std::vector<std::string> getApplicableItems() const;
  		std::string getDescription() const;
  		std::string getEffect() const;
  		EnchantMat getMat() const;
  		std::string getName() const;

  		void setApplicableItems(std::vector<std::string> const& mApplicableItems);
  		void setDescription(std::string const& mDescription);
  		void setDisMat(DisEnchantMat const& mDisMat);
  		void setEffect(std::string const& mEffect);
  		void setMagnitude(float const& mMagnitude);
  		void setMat(EnchantMat const& mMat);
  		void setName(std::string const& mName);
  		void setNeedRune(bool const& mNeedRune);
  		void setID(short int const& pID);

	private:

  		std::string m_name;
  		std::string m_description;
  		std::string m_effect;
		float m_magnitude;
		bool m_needRune;
		std::vector<std::string> m_applicableItems;
		short int const m_ID;
		EnchantMat m_mat;
		DisEnchantMat m_disMat;
};





#endif /* KNIGHTSFATE_CORE_DATA_EQUIPMENT_ENCHANT_ENCHANT_HPP_ */
