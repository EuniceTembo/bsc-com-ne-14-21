#include <iostream>
#include "Rectangle.h"



int main(){
   Rectangle rectangle1;

   float length, width;

   std:: cout<< "Enter the length of the first rectangle:";
   std::cin >> length;


   std::cout << "Enter the width of the first rectangle1:";
   std::cin >> width;


   rectangle1.setLength(length);
   rectangle1.setWidth(width);


   std::cout << "The area of the first rectangle is " << rectangle1.calculateArea() << std::endl;

   Rectangle rectangle2;
   std::cout << "Enter the length of the second rectangle: ";
   std::cin >> length;

   std::cout << "Enter the width of the second rectangle:";
   std::cin >> width;

    rectangle2.setLength(length);
    rectangle2.setWidth(width);
   
   std::cout << "The area of the second rectangle is: " << rectangle2.calculateArea() <<std::endl;

   return 0;



}