#include <iostream>
using namespace std;
int main (){
    char respuesta;
    char extra;
    


    cout << "¿Tu pizza seria vegetariana o no vegetariana v/n?\n";
    cin >> respuesta;
    
    if((respuesta == 'v') || (respuesta == 'V')){
        cout << "Ingredientes: \n1.-Pimiento\n2.-Tofu\n";
    }
    else if((respuesta == 'n') || (respuesta == 'N')){
        cout << "Ingredientes: \n 1.- Peperoni \n 2.- Salmón \n 3.- Jamón\n";
    }
    else cout << "Pizza inexistente";

    cout << "¿Que ingrediente extra lleva tu pizza?\n";
    cin >> extra;
    if (extra == 1)
    cout << "Tu pedido final es:\n 1.- Mozzarella\n2.-Tomate\n" << extra <<endl;
    
    

    return 0;
}

