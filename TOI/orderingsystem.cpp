#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string set_meals[] = {
		"Medium Wac", 
		"WChicken Nugget",
		"Geez Burger",
		"ButtMilk Crispy Chicken ",
		"Plastic Toy"
	};
	string single_meals[] = {
		"German Fries",
		"Durian Slices",
		"WcFurry",
		"Chocolate Sunday"
	};
	int set_meals_price[] = {4, 8, 7, 6, 3};
	int single_meals_price[] = {2, 3, 5, 7};
	int total = 0;
	int i, j;
	while(true){
		cin >> i;
		if(i == 0){
			cout << "Total:" << total << endl;
			break;
		}
		cin >> j;
		j--;
		if(i == 1){
			cout << set_meals[j] << " " << set_meals_price[j] << endl;
			total += set_meals_price[j];
		}
		if(i == 2){
			cout << single_meals[j] << " " << single_meals_price[j] << endl;
			total += single_meals_price[j];
		}
	}
	return 0;
}