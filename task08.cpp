#include <iostream>
using namespace std;
main()
{
float vegetablePrice;
float fruitPrice;
int kgOfVegetable;
int kgOfFruit;
float vegetableCost;
float fruitCost;
float total;


cout<<"Enter vegetable price per kilogram: ";
cin>> vegetablePrice;
cout<<"Enter fruit price per kilogram: ";
cin >> fruitPrice;
cout<<"Enter total kilograms of vegetables: ";
cin >> kgOfVegetable;
cout <<"Enter total kilograms of fruits: ";
cin >> kgOfFruit;
vegetableCost = (vegetablePrice*kgOfVegetable);
fruitCost = (fruitPrice*kgOfFruit);
total = (vegetableCost+fruitCost)/1.94;

cout<<"Total earnings in rupees: "<<total;
}


