#include <iostream>
using namespace std;
int main (){
    double ingrediente;
    char tipo;
    
cout<<"Bienvenido a la pizzeria Bella Napoli.\nTipos de pizza\n\t1- Vegetariana\n\t2- No vegetariana\n";
cout << "Introduce el número correspondiente al tipo de pizza que quieres:";
cin >> tipo;
if (tipo == '1'){
    cout <<"Ingredientes de pizzas vegetarianas\n\t 1- Pimiento\n\t2- Tofu\n";
    cout <<"Introduce el ingrediente que deseas: ";
    cin >> ingrediente;
}
    if (ingrediente == '1'){
        cout <<"Pizza vegetariana con mozzarella, tomate y pimiento"<<endl;
    }
    else if (ingrediente = '2'){
        cout <<"Pizza vegetariana con mozzarella, tomate y tofu"<<endl;
    }
    else cout << "Ingrediente no disponible";
if (tipo == '2') {
    cout<<"Ingredientes de pizzas no vegetarianas\n\t1- Peperoni\n\t2- Jamón\n\t3- Salmón\n";
    cout <<"Introduce el ingrediente que deseas: ";
    cin >> ingrediente;
    cout <<"Pizza no vegetarina con mozarrella, tomate y " <<ingrediente<<endl;
}
    if (ingrediente == '1'){
        ingrediente = 'peperoni';
    }
    else if (ingrediente == '2'){
        cout<<"jamón";
    }
    else cout <<"salmón";
    
    
    

    return 0;
}

