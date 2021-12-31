#include <iostream>

#include "source.cpp"

using namespace std;




int main (){

//Circle <int> c(4.444);

Circle <float> c(6.45);

//c.setRadius(3.33333);

cout<<"The radius of the circle is : "<< c.getRadius()<<endl;

cout<<"The circumference of the circle is : "<<c.calculateCircum()<<endl;

cout<<"The area of the circle is : "<<c.calculateArea()<<endl;
return 0;


};



