#include <iostream>
using namespace std;
int main (){
    int ingrediente;
    int tipo;
    
cout<<"Pizzeria Bella Napoli.\nTipos de pizza\n 1-Vegetariana\n 2-No vegetariana\n";
cout << "Numero de pizza que desea:\n";
cin >> tipo;
if (tipo == 1){
    //si la pizza es vegetariana
    cout <<"Pizza vegetarianas:\n 1-Pimiento\n 2-Tofu\n";
    cout <<"Numero de ingrediente extra que desea:\n";
    cin >> ingrediente;

    if (ingrediente == 1){
        cout <<"Pedido final: \n 1.-Mozzarella\n 2.-Tomate\n 3.-Pimiento"<<endl;
    }
    else if (ingrediente == 2){
        cout <<"Peidio final: \n 1.-Mozzarella\n 2.-Tomate\n 3.-Tofu"<<endl;
    }
    else cout << "Ingrediente no disponible\n";
}
else if (tipo == 2) {
    //pizza no vegetariana
    cout<<"Pizzas no vegetariana;\n 1- Peperoni\n 2- Jamón\n 3- Salmón\n";
    cout <<"Ingrediente extra que desea: \n";
    cin >> ingrediente;
    if (ingrediente == 1){
        cout << "Pedidio final: \n 1.Mozzarella \n 2.-Tomate \n 3.- Peperoni\n";
    }
    else if (ingrediente == 2){
        cout << "Pedidio final: \n 1.Mozzarella \n 2.-Tomate \n 3.- Jamon\n";
    }
    else if (ingrediente == 3){
        cout <<"Pedidio final: \n 1.-Mozarrella \n 2.-Tomate \n 3.-Salmon\n";
    }
    else cout << "Ingrediente no disponible\n";
}   
    
else cout << "Pizza inexistente\n";
    return 0;
}

