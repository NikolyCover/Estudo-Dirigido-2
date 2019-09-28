#include<iostream>

using namespace std;

double converte_moeda(double valor, string moeda){

    if(moeda == "dolar" || moeda == "Dolar"){
        return valor / 4.17;
    }

    else if(moeda == "euro" || moeda == "Euro"){
        return valor / 4.60;
    }
}

int main(){

    setlocale(LC_ALL,"portuguese");

    double valor;
    string moeda;

    cout << "CONVERTOR DE MOEDAS" << endl << endl;
    cout << "Digite o valor que sera convertido: ";
    cin >> valor;
    cout << endl << "Digite a moeda em que voce deseja que seu valor seja convertido (euro ou dolar): ";
    cin >> moeda;

    if(moeda == "dolar" || moeda == "Dolar"){
    cout << "US$ " << converte_moeda(valor, moeda);
    }

    else if(moeda == "euro" || moeda == "Euro"){
        cout << "€ " << converte_moeda(valor, moeda);
    }

    return 0;
}
