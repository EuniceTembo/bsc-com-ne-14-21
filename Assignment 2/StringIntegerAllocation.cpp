#include <iostream>
#include <string>
using namespace std;

int main() {
  // Prompt the user to enter  integer value
  int integerValue;
  cout << "Enter an integer value: ";
  cin >> integerValue;

  // Dynamically allocate memory for an integer Value
  int* intPointer = new int;
  if (intPointer == nullptr) {
    cerr << "Memory allocation failed for integer!" << endl;
   
  }

  // Assign the user input value to the dynamically allocated integer
  *intPointer = integerValue;

  // Prompt the user to enter  string value
  string strValue;
  cout << "Enter a string value: ";
  cin.ignore();
  getline(cin, strValue);

  // Dynamically allocate memory for a string
  string* stringPointer = new string;
  if (stringPointer == nullptr) {
    cerr << "Memory allocation failed for string!" << endl;
    delete intPointer; // Deallocate previously allocated memory
    
  }

  // Assign the user input string to the dynamically allocated string
  *stringPointer = strValue;

  // Output the values
  cout << "Integer value: " << *intPointer << endl;
  cout << "String value: " << *stringPointer << endl;

  // Deallocate memory 
  delete intPointer;
  delete stringPointer;

  return 0;
}

