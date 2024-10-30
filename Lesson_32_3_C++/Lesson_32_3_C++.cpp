#include "Toy.h"
#include "SportEquipment.h"
#include <vector>
#include <ctime>

int main()
{
	srand(time(0));
	std::vector < products::Product*> Lotery;
	Lotery.push_back(new products::fun::Toy("Ball", 100, "Chine",
		34, "natural leather"));
	Lotery.push_back(new products::sport::SportEquipment("Bike",
		10200, "Ukraine", 7, 12, "cycling"));
	int user = rand() % Lotery.size();
	Lotery[user]->show();
	cout << "Equvivalent: " << Lotery[user]->calcPrice();
}