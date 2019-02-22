#include <string>
#include <fstream>

using namespace std;

int main() {

  string LeunamRavotQuote = "Cada minuto que acaba, um novo começa";
  ofstream ("LeunamRavotQuote.txt");
  if (! write){
    cout << "Error opening o ficheiro! :(" << endl;
    return -1;
  } else{
    write << LeunamRavotQuote << endl;
    write.close();
  }
  ofstream write2("LeunamRavotQuote.txt", ios::app);
  if (! write2){
    cout << "Error opening o ficheiro! :(" << endl;
    return -1;
  } else{
    write2 << "\n -ManRavot" << endl;
    write2.close();
  }

  char letter;

  ifstream reader("LeunamRavotQuote.txt");

  if(! reader){
    cout << "Error opening o ficheiro! :(" << endl;
    return -1;
  }else{
    for(int i = 0 ; ! read.eof(); i++){
      reader.get(letter);
      cout << letter;
    }
    cout << endl;
    reader.close();
  }
}
