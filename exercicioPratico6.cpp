#include <iostream>
#include <vector>

using namespace std;

int main () {

    int contador = 0;
    string resposta;
    vector<string> respostas;
    vector<string> perguntas;

    setlocale(LC_ALL, "portuguese");

    perguntas.push_back("Você telefonou para a vítima?");
    perguntas.push_back("Você esteve no local do crime?");
    perguntas.push_back("Você mora perto da vítima?");
    perguntas.push_back("Você devia para a vítima?");
    perguntas.push_back("Você já trabalhou com a vítima?");

    for (string na:perguntas){
        cout << na << endl;
    }

    cout << "QUESTIONÁRIO INVESTIGATÓRIO\n\n Responda as seguintes perguntas com sim ou não:\n";

    for (string per:perguntas){
        cout << per << endl;
        cin >> resposta;
        cout << endl;
        respostas.push_back(resposta);
        }



    for (string resp:respostas){
        if (resp == "sim") {
            contador = contador + 1;
        }
    }

    if (contador == 2){
        cout << "Você é considerado suspeito do assasinato!";
    }

    if (contador == 3 || contador == 4){
        cout << "Você é considerado cúmplice do assasinato!";
    }

    if (contador == 5){
        cout << "Você foi julagado como o assasino!";
    }

    else if (contador == 0 || contador == 1){
        cout << "Você foi inocentado!";
    }




return 0;
}
