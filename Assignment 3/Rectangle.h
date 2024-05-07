

class Rectangle
{
private:
   // The length and width of the rectangle
   float length;
   float width;

public:
   //Default constructor
   Rectangle();
   
   //overload constructor
   //Rectangle(float l, float w);
   
   
   // destroctor
   ~Rectangle();

   void setLength(float l);
   void setWidth(float w);
   float getLength();
   float getWidth();

   //Member function
    float calculateArea();
  
};