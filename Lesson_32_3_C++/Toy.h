#pragma once
#include "Product.h"
namespace products{
	namespace fun
	{
		class Toy : public products::Product
		{
		protected:
			std::string material;
		public:
			Toy();
			Toy(std::string name, float price, std::string manufacture,
				int age, std::string material);

			void setMaterial(std::string material);
			std::string getMaterial()const;
			void show()const override;
			float calcPrice()const override;
		};
	}
}



