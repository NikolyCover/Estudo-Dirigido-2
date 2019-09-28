#include<iostream>

using namespace std;

int soma2(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;

    cout << "digite tres numeros inteiros:" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "\nA soma dos números digitados é: " << soma2(n1, n2, n3) << endl;

    return 0;
}
