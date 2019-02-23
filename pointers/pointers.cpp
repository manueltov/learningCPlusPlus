#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int myAge = 23;
  char myGrade = 'F';

  cout << "Size of int " << sizeof(myAge) << endl;
  cout << "Size of char " << sizeof(myGrade) << endl;

  cout << "myAge is locate at " << &myAge << endl;

  return 0;
}
