#include <iostream>
using namespace std;

 //swap two variables using pass-by-reference
 void swapNumbers(int& varA, int& varB)
{
int swap = varA;
     varA = varB;
     varB= swap;
}

int main(){

  // declare and initialize variables
     int varA = 25;
     int varB = 100;
    
  //output variables before swap
  cout << "varA before swap: " <<  varA << endl; //varA is 25
  cout << "varB before swap: " << varB << endl; //varB is 100

  swapNumbers(varA, varB);
 
  //output variables after swap
  cout << "varA after swap: " <<  varA << endl;
  cout << "varB after swap: " << varB << endl;
   
  
  return 0;

}

