#include <string>
#include <fstream>

int main() {

  std::string LeunamRavotQuote = "Cada minuto que acaba, um novo começa";
  std::ofstream ("LeunamRavotQuote.txt");
  if (! write){
    std::cout << "Error opening o ficheiro! :(" << endl;
    return -1;
  } else{
    write << LeunamRavotQuote << endl;
    write.close();
  }
  std::ofstream write2("LeunamRavotQuote.txt", ios::app);
}
