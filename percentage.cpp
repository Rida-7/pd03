#include <iostream>
using namespace std;
main()
{

string name;
int sub01;
int sub02;
int sub03;
int sub04;
int sub05;
int total;
float percentage;

cout <<"Enter Your Name: ";
cin >> name;
cout <<"Enter subject 01 marks :";
cin >> sub01;
cout<<"Enter subject 02 marks :";
cin>> sub02;
cout<<"Enter subject 03 marks :";
cin>> sub03;
cout<<"Enter subject 04 marks :";
cin>> sub04;
cout<<"Enter subject 05 marks :";
cin>> sub05;
total = sub01+sub02+sub03+sub04+sub05 ;
percentage = (total*100)/500 ;
cout<<"Your percentage :"<<percentage;

}