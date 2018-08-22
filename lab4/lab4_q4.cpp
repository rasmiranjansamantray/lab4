#include<iostream>
using namespace std;
int main(){
//declaring variables
double days,weeks,years;
//displaying the operation which is going to be done
cout <<"convert days into weeks and year"<<endl;
cout <<"enter the value"<<endl;
//defining variables
cin>>days;
weeks=days/7;
years=days/365;
//printing the result
cout <<"weeks = "<<weeks<<endl;
cout <<"years = "<<years<<endl;
return 0;
}
