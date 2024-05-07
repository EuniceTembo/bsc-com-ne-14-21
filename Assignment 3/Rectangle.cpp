#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
   length = 0;
   width = 0;
}

Rectangle::~Rectangle(){}

void Rectangle::setWidth(float w){
   width = w;
}

void Rectangle::setLength(float l){
   length = l;
}

float Rectangle::getLength()
{
   return length;

}

float Rectangle::getWidth()
{
   return width;

}

float Rectangle::calculateArea()
{
  return length * width;

}

