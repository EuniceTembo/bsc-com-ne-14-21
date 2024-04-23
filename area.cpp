#include <iostream>

using namespace std;
double calculateTriangleArea(){
    //ask the user for the base and height of the triangle
    double base, height;
    cout<< "Enter the base of the triangle:";
    cin>>base;
    cout <<"Enter the height of the triangle:";
    cin>> height;
    // calculate the area
    double area = 0.5 * base * height;
    cout << "The area of the triangle is: " <<area<<endl;
    return area;
}

double calculateRectangleArea(){
    //Ask the user the length and width of the rectangle
    double length, width;
    cout<<"Enter the length of the rectangle:";
    cin>>length;
    cout << "Enter the width of the rectangle:";
    cin>>width;
    //calculate the area
    double area = length * width;
    cout<< "The area of the rectangle is:"<<area<<endl;
    return area;
}
    double calculateSquareArea(){
        //Ask the user for the side of the square
        double side;
        cout<<"Enter the side length of the square:";
        cin>>side;
        //calculate the area
        double area = side * side;
        cout<<"The area of the square is:"<<area<<endl;
        return area;
    }
    int main(){
        while (true) {
            cout<<"\nChoose a shape to calculate the area:"<<endl;
            cout<<"1. Triangle"<<endl;
            cout<<"2. Rectangle"<<endl;
            cout<<"3. Square"<<endl;
            cout<<"4. Quit"<<endl;
            
            // ask the user to make the selection 
             int choice;
             cout<<"Enter your choice (1, 2, 3, or 4 to quit):";
             cin>> choice;

             //handle user input 
             switch(choice){
                case 1:
                calculateTriangleArea();
                break;
                case 2:

                calculateRectangleArea();
                break;
                case 3:

                calculateSquareArea();
                break;
                case 4:

                cout<<"Exiting program..."<<endl;
                return 0;// quit the program
                default:
                cout << "Invalid choice. Please a valid choice(1,2,3,or4)."<<endl;
            }
        }    
    }
