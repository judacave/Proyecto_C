#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

struct producto
{
    string nombre;
    float precio;
    int existencias;
    long long codigo;
};
bool login()
{
    string nombre;
    char pass[10];
    char realpass[10] = "admin123";
    int i;
    int v = 0;

    for (i = 1; i < 4; i++)
    {
        system("cls");
        cout << endl;
        cout << "        BIENVENIDO AL SISTEMA DE LOGIN " << endl;
        cout << "___________________________________________" << endl;
        cout << endl;
        cout << "Por favor ingrese su informacion de usuario" << endl;
        cout << endl;
        cout << "¿Nombre de usuario?" << endl;
        cin >> nombre;
        if (nombre == "admin")
        {
            cout << "Nombre de usuario correcto, por favor ingrese su contrasena:" << endl;
            for (int i = 0; i < 10; i++)
            {
                v = getch();
                if ((v >= 'a') && (v <= 'z') || (v >= 'A') && (v <= 'Z') || (v >= '0') && (v <= '9'))
                {
                    pass[i] = v;
                    cout << "*";
                }
                if (v == '\r')
                {
                    pass[i] = 0;
                    break;
                }
            }

            if (strcmp(pass, realpass) == 0)
            {
                cout << endl;
                cout << "Contrasena correcta, bienvenido, sera redirigido a la aplicacion" << endl;
                return true;
                system("pause>null");
                exit(0);
            }
            else if (strcmp(pass, realpass) != 0)
            {
                cout << "Contrasena incorrecta, por favor ingrese un usuario y contrasena valida" << endl;
                system("pause>null");
            }
        }
        else if (nombre != "admin")
        {
            cout << "Nombre de usuario incorrecto, por favor ingrese su nombre de usuario nuevamente" << endl;
            system("pause>null");
        }

        if (i > 0)
        {
            cout << endl;
            cout << "Ha realizado " << i << "/3 intentos" << endl;
            cout << endl;
            system("pause>null");
        }
        if (i == 3)
        {
            cout << endl;
            cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara..." << endl;
            system("pause>null");
            exit(0);
        }
    }
}

void cargarProdInic(producto producto[])
{
    //SE BLANQUEAN TODOS LOS 30 PRODUCTOS
    for (int i = 0; i < 30; i++)
    {
        producto[i].codigo = 0;
        producto[i].nombre = "";
        producto[i].precio = 0;
        producto[i].existencias = 0;
    }

    /*AHORA CREAR MANUALEMENTE 10 PRODUCTOS 
EN LAS 10 PRIMERAS POSICIONES DEL ARREGLO
*/
    producto[0].codigo = 1;
    producto[0].nombre = "ARROZ";
    producto[0].precio = 5000;
    producto[0].existencias = 100;

    producto[1].codigo = 2;
    producto[1].nombre = "FRIJOL";
    producto[1].precio = 4000;
    producto[1].existencias = 50;

    producto[2].codigo = 3;
    producto[2].nombre = "LECHE";
    producto[2].precio = 2600;
    producto[2].existencias = 25;

    producto[3].codigo = 4;
    producto[3].nombre = "PANELA";
    producto[3].precio = 5200;
    producto[3].existencias = 70;

    producto[4].codigo = 5;
    producto[4].nombre = "AZUCAR";
    producto[4].precio = 3000;
    producto[4].existencias = 120;

    producto[5].codigo = 6;
    producto[5].nombre = "SAL";
    producto[5].precio = 1000;
    producto[5].existencias = 60;

    producto[6].codigo = 7;
    producto[6].nombre = "ACEITE";
    producto[6].precio = 6000;
    producto[6].existencias = 30;

    producto[7].codigo = 8;
    producto[7].nombre = "LENTEJA";
    producto[7].precio = 3200;
    producto[7].existencias = 80;

    producto[8].codigo = 9;
    producto[8].nombre = "MANTEQUILLA";
    producto[8].precio = 3500;
    producto[8].existencias = 18;

    producto[9].codigo = 10;
    producto[9].nombre = "SALCHICHA";
    producto[9].precio = 2500;
    producto[9].existencias = 25;
    /*ASI HASTA LOS 10 PRODUCTOS*/
}

void mostrar_productos(producto producto[])
{
    //ASI MOSTRARÍAN TODOS LOS 30 PRODUCTOS EXISTENTES
    cout << "LOS PRODUCTOS EXISTENTES SON: " << endl;

    for (int i = 0; i < 29; i++)
    {
        cout << "-------------------------------------------------\n";
        cout << "CODIGO: " << producto[i].codigo << endl;
        cout << "NOMBRE: " << producto[i].nombre << endl;
        cout << "PRECIO: " << producto[i].precio << endl;
        cout << "EXISTENCIAS: " << producto[i].existencias << endl;
        cout << "-------------------------------------------------";
    }
    return;
}

int adicionar_productos(producto producto[], int posicion){
	/*AQUI SE DEBEN CREAR LOS PRODUCTOS DESDE EL 10 HASTA EL 29 UNO POR UNO, NO NECESARIAMENTE TODOS*/

	int np;
	int cod;
	int i;
	bool bandera;
	do{
		if (posicion < 30){
			system("cls");//LIMPIAR PANTALLA
			cout<<"---------------Crear producto---------------"<<endl;
			cout<<"Agregue un Nuevo Producto: "<<endl;
			cout<<"CODIGO: ";cin>>cod;
			if (cod !=0){
				for (i=0; i<posicion; i++){
				if(producto[i].codigo == cod){
					bandera = true;
				}
				}
				if (bandera == true){
					cout<<"El codigo ingresado ya existe\n";
					bandera=false;
					system("pause");
				}
				else{
					producto[posicion].codigo = cod;
					cout<<"NOMBRE: ";cin>>producto[posicion].nombre;
					cout<<"PRECIO: ";cin>>producto[posicion].precio;
					cout<<"EXISTENCIAS: ";cin>>producto[posicion].existencias;
					posicion++;
				}
			}
			else{
				cout<<"Es un codigo no permitido"<<endl;
			}
			cout<<"Si desea crear otro producto digite (1), de lo contrario digite (0)"<<endl;
			cin>>np;
		}
		else{
			system("cls");//LIMPIAR PANTALLA
			cout<<"---------------Crear producto---------------"<<endl;
			cout<<"No hay mas stock disponible"<<endl;
			np = 0;
		}

	}while (np == 1);
	
	return posicion;
}
void menu(producto producto[]){
	int opc=0;
	int posicion=10;
	do{
		system("cls");
		cout<<"-------------- PROYECTO FINAL --------------"<<endl;
		cout<<"-\t1. GESTION DE PRODUCTOS \t   -"<<endl;
		cout<<"-\t2. TIENDA \t\t\t   -"<<endl;
		cout<<"-\t3. SALIR \t\t\t   -"<<endl;
		cout<<"--------------------------------------------"<<endl;

		cout<<"\tDIGITE LA OPCION ---> ";
		cin>>opc;

		switch(opc){
			case 1:{
				system("cls");//LIMPIAR PANTALLA
				int op=0;
				/*Creamos el otro do while con las opciones de crear producto
				modificar producto, listar todos los productos y volver a menu principal*/
				
				do{
					system("cls");
					cout<<"---------------Gestion De Productos---------------"<<endl;
					cout<<"-\t1.Crear Producto \t\t\t -"<<endl;
					cout<<"-\t2.Modificar Producto \t\t\t -"<<endl;
					cout<<"-\t3.Listar Todos los Productos \t\t -"<<endl;
					cout<<"-\t4.Volver al Menu Principal \t\t -"<<endl;
					cout<<"--------------------------------------------------"<<endl;
					cout<<"\tDigite una opcion ---> ";
					
					cin>>op; //ingresamos la opcion que queremos realizar.
					
					switch(op){
						case 1:
							posicion=adicionar_productos(producto, posicion);
							system("pause");
							break;
					    case 2:
					    	system("cls");//LIMPIAR PANTALLA
							cout<<"---------------Modificar producto---------------"<<endl;
							system("pause");
							break;
					    case 3:
					    	system("cls");//LIMPIAR PANTALLA
							cout<<"---------------Listar todos los productos---------------"<<endl;
							mostrar_productos(producto, posicion);
							system("pause");
							break;
					    default:
					    	if (op != 4){
						    	system("cls");//LIMPIAR PANTALLA
								cout<<"Valor invalido, por favor intentelo de nuevo"<<endl;
								cout<<"Volveras al menu de gestion"<<endl;
								system("pause");
							}
							break;
					}
				}while(op > 0 && op !=4);
				break;
			}//End case 1-1

			case 2:{
				system("cls");//LIMPIAR PANTALLA
				cout<<"2. REEMPLAZO "<<endl;

			}//End case 1-2

			case 3:{
				cout<<"DECIDIO SALIR DEL PROGRAMA"<<endl;
				break;
			}//End case 1-3
		}//End-switch1

	}while(opc >= 0 && opc !=3);
	return;
}

int main()
{
    //AQUI ESTAN LOS 30 PRODUCTOS
    system("color 90");
    producto producto[30];
    cargarProdInic(producto);
    bool bandera = login();
    if (bandera = true)
    {
        menu(producto);
    }

    system("pause");
    return 0;
} //MAIN
