#include<iostream>

using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2;
    cout << "digite dois numeros inteiros:" << endl;
    cin >> n1 >> n2;
    cout << "\nA soma dos números digitados é: " << soma(n1, n2) << endl;

    return 0;
}
