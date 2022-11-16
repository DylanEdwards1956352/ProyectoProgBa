#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int* ID, * year, registros, n = 1;
string* nombre, * clasificacion, * caracteristica, * genero, * descripcion;
float* precio, * iva, * total;

void alta();
void modificar();
void eliminar();
void lista();
void archivo();
void eliminar();

int main()
{
    int opcion;
    int bol = 0;
    cout << "\t ***GameWorldland*** \n";
    cout << "[1] Agregar Articulos \n";
    cout << "[2] Modificar Articulo\n";
    cout << "[3] Eliminar Articulo\n";
    cout << "[4] Lista Articulo\n";
    cout << "[5] Archivo\n";
    cout << "[6] Limpiar Pantalla\n";
    cout << "[7] Salir\n";
    scanf_s("%d", &opcion);
    do
    {
        if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4 || opcion == 5 || opcion == 6 || opcion == 7)
        {
            if (opcion == 1)
            {
                alta();
                return main();
            }
            if (opcion == 2)
            {
                modificar();
                return main();
            }
            if (opcion == 3)
            {
                eliminar();
                return main();
            }
            if (opcion == 4)
            {
                lista();
                return main();
            }
            if (opcion == 5)
            {
                archivo();
                return main();
            }
            if (opcion == 6)
            {
                system("cls");
                return main();
            }
            if (opcion == 7)
            {
                printf("saliendo del programa");
            }

            bol = 1;
        }
        else
        {
            printf("numero invalido");
        }
    } while (bol != 1);


    system("pause");
}

void alta()
{
    printf("Cuantos registros desea dar de alta\n");
    scanf_s("%d", &registros);
    ID = new int[registros];
    year = new int[registros];
    nombre = new string[registros];
    clasificacion = new string[registros];
    caracteristica = new string[registros];
    genero = new string[registros];
    descripcion = new string[registros];
    precio = new float[registros];
    iva = new float[registros];
    total = new float[registros];

    for (int i = 0; i < registros; i++)
    {
        printf("ingrese el ID de su articulo \n");
        scanf_s("%d", &ID[i]);

        do
        {
            if (ID[i] != ID[i - n])
            {
                n++;
            }
            else
            {
                printf("numero ya existente");
                printf("ingrese el numero articulo \n");
                scanf_s("%d", &ID[i]);
            }
        } while (n < registros);

        printf("ingrese el a%co de lanzamiento \n", 164);
        scanf_s("%d", &year[i]);
        printf("ingrese el nombre \n");
        cin.ignore();
        getline(cin, nombre[i]);
        printf("ingrese el clasificacion \n");
        getline(cin, clasificacion[i]);
        printf("ingrese el caracteristica \n");
        getline(cin, caracteristica[i]);
        printf("ingrese el genero \n");
        getline(cin, genero[i]);
        printf("ingrese el descripcion \n");
        getline(cin, descripcion[i]);
        printf("ingrese el precio \n");
        scanf_s("%f", &precio[i]);
        iva[i] = precio[i] * .16;
        total[i] = precio[i] + iva[i];

        if ((registros - 1) == i)
        {
            int e;
            printf("si desea agregar otro registro ingresar el numero de registros que desea agregar, de lo contrrio ingresar 0");
            scanf_s("%d", &e);
            //i = 5
            //e = 8 
            //registros = 5 + 8 = 13 
            registros = i + e;
        }
    }
}

void modificar()
{
    int modificar;
    do
    {
        printf("ingrese la ID del registro que quiere modificar \n");
        scanf_s("%d", &modificar);
    } while (modificar < 0);

    for (int i = 0; i < registros; i++)
    {
        printf("ingrese el numero articulo \n");
        scanf_s("%d", &ID[i]);

        do
        {
            if (ID[i] != ID[i - n])
            {
                n++;
            }
            else
            {
                printf("numero ya existente");
                printf("ingrese el numero articulo \n");
                scanf_s("%d", &ID[i]);
            }
        } while (n < registros);

        printf("ingrese el a%co de lanzamiento \n", 164);
        scanf_s("%d", &year[i]);
        printf("ingrese el nombre \n");
        cin.ignore();
        getline(cin, nombre[i]);
        printf("ingrese el clasificacion \n");
        getline(cin, clasificacion[i]);
        printf("ingrese el caracteristica \n");
        getline(cin, caracteristica[i]);
        printf("ingrese el genero \n");
        getline(cin, genero[i]);
        printf("ingrese el descripcion \n");
        getline(cin, descripcion[i]);
        printf("ingrese el precio \n");
        scanf_s("%f", &precio[i]);
        iva[i] = precio[i] * .16;
        total[i] = precio[i] + iva[i];
    }
}

void eliminar()
{
    int eliminar;

    printf("ingrese el numero de articulo que desea eliminar");
    scanf_s("%d", &eliminar);

    for (int i = 0; i < registros; i++)
    {
        if (ID[i] = eliminar)
        {
            ID[i] = 0;
        }
    }
}

void lista()
{
    int bol = 0;
    do
    {
        int op2;
        printf("1. Clasificacion \n2. Genero \n");
        scanf_s("%d", &op2);

        if (op2 == 1 || op2 == 2)
        {
            if (op2 == 1)
            {
                string busc;
                printf("ingrese la clasificacion a buscar \n");
                cin.ignore();
                getline(cin, busc);

                for (int i = 0; i < registros; i++)
                {
                    if (clasificacion[i] == busc)
                    {
                        if (ID != 0)
                        {
                            printf("ID: %d\n", ID[i]);
                            printf("a%co: %d\n", 164, year[i]);
                            printf("nombre: %s\n", nombre[i].c_str());
                            printf("ID: %s\n", clasificacion[i].c_str());
                            printf("ID: %s\n", caracteristica[i].c_str());
                            printf("ID: %s\n", genero[i].c_str());
                            printf("ID: %s\n", descripcion[i].c_str());
                            printf("ID: %d\n", precio[i]);
                            printf("ID: %d\n", iva[i]);
                            printf("ID: %d\n", total[i]);
                        }

                    }
                }
            }

            if (op2 == 2)
            {
                string busc;
                printf("ingrese el Genero a buscar \n");
                cin.ignore();
                getline(cin, busc);

                for (int i = 0; i < registros; i++)
                {
                    if (genero[i] == busc)
                    {
                        if (ID != 0)
                        {
                            printf("ID: %d", ID[i]);
                            printf("a%co: %d", 164, year[i]);
                            printf("nombre: %s", nombre[i].c_str());
                            printf("ID: %s", clasificacion[i].c_str());
                            printf("ID: %s", caracteristica[i].c_str());
                            printf("ID: %s", genero[i].c_str());
                            printf("ID: %s", descripcion[i].c_str());
                            printf("ID: %d", precio[i]);
                            printf("ID: %d", iva[i]);
                            printf("ID: %d", total[i]);
                        }
                    }
                }
            }

            bol = 1;
        }
        else
        {
            printf("ingrese un numero valido\n");
        }

    } while (bol != 1);
}

void archivo()
{
    ofstream archivo;

    archivo.open("LISTADEVIDEOJUEGOS.txt", ios::out);

    if (archivo.fail() == true)
    {
        printf("no fue posible abrir el archivo");
        system("pause");
        exit(1);
    }
    archivo << "ID"; archivo << "\t"; 
    archivo << "Fecha"; archivo << "\t"; 
    archivo << "Nombre"; archivo << "\t"; 
    archivo << "Clasificacion"; archivo << "\t"; 
    archivo << "Caracteristica"; archivo << "\t"; 
    archivo << "Genero"; archivo << "\t"; 
    archivo << "Descripcion"; archivo << "\t";
    archivo << "Precio"; archivo << "\t";
    archivo << "IVA"; archivo << "\t";
    archivo << "Total"; archivo << "\t";
    archivo << "\n";

    for (size_t i = 0; i < registros; i++)
    {
        archivo << ID[i] << "\t";
        archivo << year[i] << "\t";
        archivo << nombre[i] << "\t";
        archivo << clasificacion[i] << "\t";
        archivo << caracteristica[i] << "\t";
        archivo << genero[i] << "\t";
        archivo << descripcion[i] << "\t";
        archivo << precio[i] << "\t";
        archivo << iva[i] << "\t";
        archivo << total[i] << "\t";
        archivo << "\n";
    }
}