#include <iostream>
#include <math.h>

using namespace std;

void bhaskara (int a, int b, int c) {


int delta = (b * b) - 4 * a * c;

        if (delta < 0) {
            cout << "Não é possível realizar essa operação pois não existe raiz quadrada de número negativo.";
        }

        else {

            float x1 = ((-1)*b + sqrt(delta)) / (2 * a);
            float x2 = ((-1)*b - sqrt(delta)) / (2 * a);

            if (delta == 0) {
                cout << "A função possui raiz dupla\nRAiz = " << x1;
            }

            if (delta > 0) {
                cout << "O seu x1 é: " << x1 << endl;
                cout << "O seu x2 é: " << x2 << endl;
            }
        }

}

int main () {

    float a, b, c;

    setlocale(LC_ALL, "portuguese");

    cout << "**********CALCULADORA DE BHASKARA**********\n\n";
    cout << "Digite o a, b e o c de sua equação respectivamente:\n";
    cin >> a >> b >> c;
    cout << endl;
    bhaskara(a, b, c);


return 0;
}
