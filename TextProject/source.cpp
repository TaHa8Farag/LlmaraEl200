#include <iostream>

#include "header.h"

using namespace std;



template <class T>
 Circle <T> :: Circle(T rad){

r = rad;

pi = 3.14;

};

template <class T>

void Circle <T> :: setRadius(T radius){

r = radius ;

};


template <class T>

T Circle <T> :: getRadius(){

return r;

};


template <class T>

T Circle<T> :: calculateArea(){

T area = r*r*pi;

return area;
};


template <class T>

T Circle<T> :: calculateCircum(){

T circum = 2*pi*r;

return circum;

};
