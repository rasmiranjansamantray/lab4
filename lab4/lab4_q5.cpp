#include<iostream>
using namespace std;
int main(){
//Declaring variables
float a,b,c;
//printing the functins
cout <<"To find the third angle of the triangle from the other two given angles"<<endl;
cout<<" Enter the first angle"<<endl;
//definning the variable
cin>>a;
//asking for the second angle
cout <<"enter second angle"<<endl;
//defining variable
cin>>b;
c= 180-(a+b);
//displaying result
cout <<"Third angle is "<<c<<endl;
return 0;
}
