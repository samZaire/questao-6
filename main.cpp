#include <iostream>
using namespace std;

// Declare três variáveis do tipo unsigned short
// Use cout para solicitar as horas, minutos e segundos
// Use cin para ler as horas, minutos e segundos
// [Opcional] Use if para verifique se o valor dos minutos e segundos
// [Opcional] são maiores ou iguais a zero e menores ou iguais a 59
// Use cout para imprimir o tempo total em segundos
int main() {
    unsigned short h = 0;
    unsigned short m = 0;
    unsigned short s;
    cout << "Informe as horas, os minutso e os segundos:" << endl;
    cin >> h;
    cin >> m;
    cin >> s;
    h = h*3600;
    m = m*60;
    cout << "o total e: " << h+m+s;
    return 0;
}
