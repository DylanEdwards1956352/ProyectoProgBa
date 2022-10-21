#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

int inc = 0;

struct Articulo
{
    int ID = 0;
    int alanzamiento = 0; //año de lanzamiento
    float precio = 0;
    float precioF = 0;

    string nombre= "empty";
    string clasificacion= "empty";
    string caracteristicas= "empty";
    string descripcion= "empty";
    string genero= "empty";
}Juegos[3];

int main()
{
    int opcion;
    float iva = 0.15;

    cout << "\t ***GameWorldland*** \n";
    cout << "[1] Agregar Articulos \n";
    cout << "[2] Modificar Articulo\n";
    cout << "[3] Eliminar Articulo\n";
    cout << "[4] Lista Articulo\n";
    cout << "[5] Limpiar Pantalla\n";
    cout << "[6] Salir\n";
    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1: //Agregar Articulo
        
        if (inc < 3)
        {
            Juegos[inc].ID = inc + 1;

            cout << "ingresar nombre del articulo\n";
            cin.ignore();
            getline(cin, Juegos[inc].nombre);


            cout << "ingresar precio del articulo\n";
            cin >> Juegos[inc].precio;


            printf("ingresar a%co del lanzamiento\n", 164);
            cin >> Juegos[inc].alanzamiento;


            cout << "ingresar clasificacion del articulo\n";
            cin.ignore();
            getline(cin, Juegos[inc].clasificacion);


            cout << "ingresar caracteristicas del articulo\n";
            cin.ignore();
            getline(cin, Juegos[inc].caracteristicas);


            cout << "ingresar descripcion del articulo\n";
            cin.ignore();
            getline(cin, Juegos[inc].descripcion);


            cout << "ingresar genero del articulo\n";
            cin.ignore();
            getline(cin, Juegos[inc].genero);

            inc++;
        }
        return main();
        break;

    case 2: //Modificar Articulo
        
        int i;
        
        cout << "Ingrese el articulo que quiere modificar\n";
        cin >> i;

        if (i < 3 && i > 0)
            {
            
            cout << "ingresar nombre del articulo\n";
            cin.ignore();
            getline(cin, Juegos[i].nombre);


            cout << "ingresar precio del articulo\n";
            cin >> Juegos[i].precio;


            printf("ingresar a%co del lanzamiento\n", 164);
            cin >> Juegos[i].alanzamiento;


            cout << "ingresar clasificacion del articulo\n";
            cin.ignore();
            getline(cin, Juegos[i].clasificacion);


            cout << "ingresar caracteristicas del articulo\n";
            cin.ignore();
            getline(cin, Juegos[i].caracteristicas);


            cout << "ingresar descripcion del articulo\n";
            cin.ignore();
            getline(cin, Juegos[i].descripcion);


            cout << "ingresar genero del articulo\n";
            cin.ignore();
            getline(cin, Juegos[i].genero);
            }
        return main();
        break;

    case 3://Eliminar Articulo
        inc = inc - 1;

        Juegos[inc].ID = 0;
        Juegos[inc].alanzamiento = 0;
        Juegos[inc].precio = 0;
        Juegos[inc].precioF = 0;
        Juegos[inc].nombre = "empty";
        Juegos[inc].clasificacion = "empty";
        Juegos[inc].caracteristicas = "empty";
        Juegos[inc].descripcion = "empty";
        Juegos[inc].genero = "empty";
        printf("se ha eliminado el ultimo articulo\n");
        return main();
        break;
        
    case 4: //Lista de Articulos
        cout << "Lista de Artiulos: \n";
        for (int e = 0; e < 3; e++)
        {
            printf_s("ID: %d", Juegos[e].ID); printf("\n");                          //por alguna razon no me funciona el printf ni el scanf con
            cout << "nombre: " << Juegos[e].nombre << endl;                         //variables tipo string 'printf_s("nombre: %s", Juegos[e].nombre);'
            cout << "precio: " << Juegos[e].precio << endl;                        //por lo que solo lo pondre con valores tipo int
            Juegos[e].precioF = Juegos[e].precio * iva;
            cout << "alanzamiento: " << Juegos[e].alanzamiento << endl;
            cout << "clasificacion: " << Juegos[e].clasificacion << endl;
            cout << "caracteristicas: " << Juegos[e].caracteristicas << endl;
            cout << "descripcion: " << Juegos[e].descripcion << endl;
            cout << "genero: " << Juegos[e].genero << endl;
            printf_s("precio final: %d", Juegos[e].precioF);
            printf("\n");
        }
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


    system("pause");
    return 0;
}


