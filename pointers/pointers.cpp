#include <fstream>
#include <iostream>

using namespace std;

void makemeYoung(int* age){
    cout << "I used to be " << *age << endl;
    *age = 21;
}

int main() {
  int myAge = 23;
  char myGrade = 'F';

  int* agePtr = &myAge;

  cout << "Size of int " << sizeof(myAge) << endl;
  cout << "Size of char " << sizeof(myGrade) << endl;

  cout << "myAge is locate at " << &myAge << endl;

  cout << "myAge is locate at " << agePtr << endl;

  makemeYoung(&myAge);

  cout << "And now i have: " << *agePtr << endl;
  return 0;
}
