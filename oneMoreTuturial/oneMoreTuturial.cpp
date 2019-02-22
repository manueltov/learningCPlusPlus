#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream file ("anil.txt");

  if(!file.is_open()){
    cout << "nao dah para abrir o coiso" << endl;
  } else {
    file << "as armas e os baroes assinalados" << endl;
    file << "que da ocidental praia lusitana" ;
    file.close();
    cout << "tah feito! Veh como ficou!";
  }
  return 0;
}
