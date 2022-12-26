#include <iostream>
using namespace std;
main()
{
string movieName;
int adultTicketPrice;
int childTicketPrice;
int adultTicketSold;
int childTicketSold;
int percentageToDonate;
int totalAmount;
int donation;
int remainingAmount;

cout<<"Enter movie name: ";
cin>> movieName;
cout<<"Enter adult ticket price: ";
cin>> adultTicketPrice;
cout<<"Enter child ticket price: ";
cin>> childTicketPrice;
cout<<"Enter number of adult tickets sold: ";
cin>>adultTicketSold;
cout<<"Enter number of child tickets sold: ";
cin >>childTicketSold;
cout<<"Enter percentage to donate: ";
cin>> percentageToDonate;

totalAmount = (adultTicketPrice*adultTicketSold) + (childTicketPrice*childTicketSold);
cout<<"Total amount generated: "<<totalAmount<<endl;

donation = (percentageToDonate*totalAmount)/100;
remainingAmount = totalAmount - donation;
cout<<"Amount after donation: " << remainingAmount;
}