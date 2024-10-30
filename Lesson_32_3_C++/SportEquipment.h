#pragma once
#include "Product.h"
namespace products {
	namespace sport {
		class SportEquipment :public Product
		{
		protected:
			float weight;
			std::string type_sport;
		public:
			SportEquipment();
			SportEquipment(std::string name, float price, std::string manufacture,
				int age, float weight, std::string type_sport);

			void setWeight(float weight);
			void setTypeSport(std::string type_sport);

			std::string getTypeSport()const;
			float getWeight()const;

			void show()const override;
			float calcPrice()const override;
		};
}
}


