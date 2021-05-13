#include <iostream>

using namespace std;

int main()
{
    int cont = 0, qtd = 0;
    double numero;
    while (cont < 6){
        cin >> numero;
        if (numero > 0){
            qtd++;
        }
        cont++;
    }
    cout << qtd << " valores positivos" <<endl;
    return 0;
}
