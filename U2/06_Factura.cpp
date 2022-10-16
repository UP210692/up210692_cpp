#include <iostream>
using namespace std;
#include <iostream>

using namespace std;

int main()
{
    float cantidad;
    float precio;
    float preciototal;
     do
    {
        cout << "Amount of the product:\n ";
        cin >> cantidad;
        cout << "Price of the products:\n ";
        cin >> precio;
        preciototal += (precio * cantidad);
    
    } while (precio != 0 and cantidad > 0);
    cout << "totalprice:\n"<< preciototal <<endl<< "0"<<endl;
    return 0;
}