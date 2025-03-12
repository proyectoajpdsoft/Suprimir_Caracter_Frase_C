#include <stdio.h>
#include "iostream"

using namespace std;

int main()
{
  string frase;
  string caracter;
  string fraseResultante;
  int i, j;

  cout << "\nIntroduzcas una frase y pulse INTRO: " << endl;
  getline(cin, frase);

  cout << "\nIntroduzca el carácter a eliminar y pulse INTRO: " << endl;
  getline(cin, caracter);

  for (char c : frase)
  {
    if (caracter[0] != c) 
    {
      fraseResultante = fraseResultante + c;
    }
  }

  cout << "\n\nFrase resultante sin '" << caracter << "': " << fraseResultante;
  
  return 0;
}