#include<iostream>
using namespace std;
int main() {
// Declaring variables
float km,met,cent;
//printing the operation
cout <<" Convert length in centimeter into meter and kilometer"<<endl;
//asking for length
cout <<" Enter the value"<<endl;
//defining variable
cin >> cent;
//converting to meter
met=(cent/100);
//converting to km
km=(met/1000);
//printing length in meters
cout <<"length converted to meters="<<met<<endl;
//printing length in km
cout <<"length converted to km="<<km<<endl;
return 0;
}
