#include <iostream>
using namespace std;

int main() {
  int rows, columns;

  // Prompt the  user for dimensions 
  do {
    cout << "Enter the number of rows (must be between 1 and 3): ";
    cin >> rows;
  } while (rows < 1 || rows > 3);

  do {
    cout << "Enter the number of columns (must be between 1 and 3): ";
    cin >> columns;
  } while (columns < 1 || columns > 3);

  // Dynamically allocate the array
  double** arr = new double* [rows];
  for (int i = 0; i < rows; ++i) {
    arr[i] = new double[columns];
  }

  // Assign the values
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
      cin >> arr[i][j];
    }
  }

  // output the array elements
  cout << "\nThe array elements:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Deallocate the memory
  for (int i = 0; i < rows; ++i) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
