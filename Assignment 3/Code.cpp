#include <iostream>
#include "Shapes.h"

int main{
   int choice;
   while(true){
      std::cout << "1.calculate the area of a square" << std:: endl;
      std::cout << "2.calculate the area of a triangle" << std::endl;
      std::cout << "3.calculate the area of a circle" << std::endl;
      std::cout << "4.Quit" << std::endl;

     std::cout <<"Enter your choice: ";
     std::cin >> choice;
     switch(choice){
            case 1: {
                shapes::Square square;
                std::cout <<"Enter the side length of a square: ";
                float side;
                std::cin >> side;

   square.setSide(side);
            float area = Area::calculateSquareArea(square);
            std::cout << "The area of a square is: " << area << std::endl;
             break;
} 
        case 2:{
            shapes::Triangle triangle;
            std::cout <<"Enter the base of the triangle:";
            float base;
            std::cin >> base;
  
   
   triangle.setBase(base);
          std::cout << "Enter the height of the triangle: " ;
          float height;
          std::cin >> height;

   triangle.setHeight(heigth);
            float area = Area::calculateTriangleArea(triangle);
            std::cout << "The area of a triangle is: " << area << std::endl;
             break;
   }

          case 3:{
             shapes::Circle circle;
             std::cout << "Enter the radius of the circle: ";
             float radius;
             std::cin >> radius;
  
  circle.setRadius(radius);
            float area = Area::calculateCircleArea(circle);
            std::cout << "The area of a circle is: " << area << std::endl;
             break;
   }

         case 4:{
           return 0;
       }
       default: {
          std::cout << "Invalid choice. Please try again." << std::endl;
          }

        }
     }
     return 0;
}