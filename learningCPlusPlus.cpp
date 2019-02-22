// tuvjsb

/*
sifbs
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int addNumbers (int firstNum, int second = 0){

  int combinedValue = firstNum + second;

  return combinedValue;
}

int addNumbers (int firstNum, int second, int third){

  return firstNum + second + third;
}

int main(){

  cout << "Hello" << endl;

  const double PI = 3.1416;

  char myGrade = 'A';

  bool isHappy = false;

  int myAge = 21 ;

  double bigb = 12.1;

  cout << "Favo" << PI << endl;

  int myFavNums[5];

  int badNums[5] = {1,2,3,4,5};

  char myName[6][6] = {{'M','A','N','U','E','L'},
  {' ','T','O','V','A','R'}};

  for (int i = 0 ; i< 2 ; i++){
    for (int j = 0 ; j < 6 ; j++){
      cout << myName[i][j];
    }
  }
  cout << endl;
  cout << "Bad number 1: " << badNums[0] << endl;

  string yourName;
  cout << "Qual seu nome: ";
  getline(cin, yourName);

  cout << "Ola " + yourName + ", voce eh um maroto!" << endl;

  //
  string ageStr;
  double age;
  cout << "Oi cara, digite sua idade sff: ";
  getline(cin,ageStr);
  age = stod(ageStr);
  cout << "dobro da sua idade aih eh: " << age*2 << endl;

  //

  cout << addNumbers(1) << endl;

  cout << addNumbers(1,5,6) << endl;

  return 0;

}
