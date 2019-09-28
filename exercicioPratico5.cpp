#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string palindromo (string palavra){
  string palavra_inversa = palavra;

  reverse (palavra_inversa.begin (), palavra_inversa.end ());
    if (palavra == palavra_inversa){
        return "verdadeiro";
    }

    else {
        cout << "falso";
    }
}

int main ()
{
  string palavra, palavra_inversa;

  setlocale(LC_ALL, "portuguese");

  cout << "Digite uma palavra para saber se ela é um palindromo: " << endl;
  cin >> palavra;
  cout << endl << palindromo(palavra) << endl;

  return 0;

}
