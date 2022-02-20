#include <iostream>
#include <string>

using namespace std;


int main()
{

float eResult;

float eResult2;

float percentage;

float percentage2;







cout<<"\n Welcome to the Grade Calculator\n";
cout<<"\n Please enter your first Exam Result \n" ;
cin>> eResult ;
cout<<"Please enter your first percentage \n";
cin>> percentage;


cout<<"\n Please enter your second exam result \n";
cin>>eResult2 ;
cout<<"Please enter your second percentage \n";
cin>> percentage2;

double average= ((eResult*percentage)/100)+((eResult2*percentage2)/100);



cout<< "\n\n Your grade is ";
if (average <=100 && average >=90)
cout<< "A,  Welldone ";

else if(average <=89 && average >=80)
cout<< "B, Welldone ";

else if(average <=79 && average>=70)
cout<< "C, Nice  ";

else if(average <=69 && average >=60)
cout<< "D, need more effort ";

else
cout<< "F";

cout<< endl;



return 0 ;




}
