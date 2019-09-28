#include <iostream>
#include <ctype.h> //biblioteca tolower

using namespace std;

void msgminuscula (string mensagem) {
    for (char minu:mensagem) {
        minu = tolower(minu);
        cout << minu;
    }
}

int main () {

    setlocale(LC_ALL, "portuguese");

    string msg;
    cout << "Digite uma mensagem para ser mostrada com todos caracteres minúsculos:\n";
    getline(cin, msg);
    msgminuscula (msg);

return 0;
}
