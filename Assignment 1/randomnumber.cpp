#include <iostream>
#include <string>
using namespace std;

int main(){
string a[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
int m = sizeof(a)/ sizeof(a[0]);
for(int i = 0; i< m; i++){
 if(a[i].find('B') ==0){
cout << a[i] << endl;

}

} 

}