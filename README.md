
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    Int opcion, numero, Añolanzamiento;
    float Precio;
    string nombre, Clasificacion, Caracteristicas, Descripción, Genero;
    cout << "\t ***GameWorldland*** \n"; //este es el nombre de la tienda
    cout << "[1] Agregar Articulo \n";
    cout << "[2] Modificar Articulo\n";
    cout << "[3] Eliminar Articulo\n";
    cout << "[4] Lista Articulo\n";
    cout << "[5] Limpiar Pantalla\n";
    cout << "[6] Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el nombre de articulo \n";
        cin >> nombre;
        cout << "Ingrese el numero de articulo \n";
        cin >> numero;
        cout << "Ingrese el precio unitario de su articulo\n";
        cin >> Precio;
        cout << "Ingrese el año de lanzamiento de su articulo\n";
        cin >> Añolanzamiento;
        cout << "Ingrese la Clasificacion de su articulo\n";
        cin >> Clasificacion;
        cout << "Ingrese las Caracteristicas de su articulo\n";
        cin >> Caracteristicas;
        cout << "Ingrese la Descripción de su articulo\n";
        cin >> Descripción;
        cout << "Ingrese el Genero de su articulo\n";
        cin >> Genero;
        return main();
        break;

    case 2: //Modificar Articulo
        cout << "Ingrese el articulo que quiere eliminar\n";
        break;

    case 3://Eliminar Articulo
        cout << "Ingrese el articulo que quiere eliminar\n";
        return main();
        break;

    case 4: //Lista de Articulos
        cout << "Lista de Artiulos: \n";
        return main();
        break;

    case 5: //Limpiar Pantalla
        system("CLS");
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();
        break;
    }

    return 0;
}
