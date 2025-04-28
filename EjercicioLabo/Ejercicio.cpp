#include <iostream>

using namespace std;

int main()
{
    // declarando variable tipo texto
    string tipo;

    cout << "¿Que es?" << endl;
    cin >> tipo;

    // evaluar que tipo de ser vivo es
    if (tipo == "malo")
    {
        // si es Malo, mostrar el texto
        cout << "Estas dentro de su lista de presas" << endl;
    }
    else if (tipo == "animal")
    {
        // Si es Animal, mostrar el texto
        cout << "Te protegeria" << endl;
    }
    else
    {
        // Si es persona, mostrar este texto
        cout << "Simplemente te saluda" << endl;
    }

    return 0;
}