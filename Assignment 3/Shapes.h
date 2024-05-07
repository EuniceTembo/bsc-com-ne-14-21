#include "Shapes.h"

namespace shapes{
     class Square{
     private:
       float side;

     public:
       Square(){
        }
       Square(float s){
        }
       
       float getSide(){
         return side;
        }
       void setSide(float s){
         side = s;
       }
      
       ~Square(){
       }
     };

     class Triangle{
     private:
       float base;
       float height;

     public:
       Triangle(){
       }
       Triangle(float b, float h){
       }
       float getBase(){
         return base;
       }
       void setBase(float b){
          base = b;
       }
       float getHeight(){
         return height;
       }
       void setHeight(float h){
         height = h;
       }
       ~Triangle(){
       }

     };

     class Circle{
       private:
        float radius;

       public:
         Circle(){
         }
         Circle(float r){
         }
         float getRadius(){
           return radius;
         }
         void setRadius(float r){
          radius = r;
         }
         ~Circle(){
         }
     };
     
     class Area{
        public:
          static float 
        calculateSquareArea(const s
s      calculateSquareArea(const shapes::Square&
       calculateSquareArea(const shapes::Square&
          static float calculateSquareArea(const shapes::Square&
        
}


}