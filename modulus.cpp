#include <iostream>
using namespace std;
main()
{
int input;
int div01;
int rem01;
int div02;
int rem02;
int div03;
int rem03;
int div04;
int rem04;
int sum;

cout<<"Enter four digit number: ";
cin>> input;
div01 = input/10;
rem01 = input%10;
div02= div01/10;
rem02= div01%10;
div03= div02/10;
rem03= div02%10;
div04= div03/10;
rem04= div03%10;


sum=rem01+rem02+rem03+rem04;
cout<<"Sum: " <<sum;
}