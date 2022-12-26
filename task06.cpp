#include <iostream>
using namespace std;
main()
{
int size;
int cost;
int area;
int costOfFertilizer;
int costPerSquareFoot;

cout<<"Enter bag size in pounds :";
cin>> size;
cout <<"Enter cost of bag :";
cin>> cost;
cout<<"Enter area covered by each bag in square feet: ";
cin >> area;
costOfFertilizer = cost/size;
cout<<"Cost of fertilizer per pound: "<< costOfFertilizer<<endl;
costPerSquareFoot = size*area;
cout<<"Cost of fertilizing area per square feet: "<< costPerSquareFoot<<endl;

} 