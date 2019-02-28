#include <string>
#include <fstream>

using namespace std;

class Animal {
private:
  int height;
  int weight;
  string name;

  static int numOfAnimals;

public:
  int getHight(){ return height; }
  int getWeight(){ return weight; }
  string getName(){ return name; }

  void setHight(int cm) {height = cm;}
  void setWeight (int cm) {weight = cm;}
  void setName (string str) {name = str;}

  Animal (int )

}
