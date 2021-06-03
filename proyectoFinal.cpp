#include <bits/stdc++.h>

using namespace std;


struct producto{
	string nombre;
	float precio;
	int existencias;
	long long codigo;
};

void cargarProdInic(producto producto[]){
//SE BLANQUEAN TODOS LOS 30 PRODUCTOS
for(int i=0;i<30;i++){
producto[i].codigo=0;
producto[i].nombre="";
producto[i].precio=0;
producto[i].existencias=0;	
}
	
/*AHORA CREAR MANUALEMENTE 10 PRODUCTOS 
EN LAS 10 PRIMERAS POSICIONES DEL ARREGLO
*/
producto[0].codigo=1;
producto[0].nombre="ARROZ";
producto[0].precio=5000;
producto[0].existencias=100;

producto[1].codigo=2;
producto[1].nombre="FRIJOL";
producto[1].precio=4000;
producto[1].existencias=50;

producto[2].codigo=3;
producto[2].nombre="LECHE";
producto[2].precio=2600;
producto[2].existencias=25;

producto[3].codigo=4;
producto[3].nombre="PANELA";
producto[3].precio=5200;
producto[3].existencias=70;

producto[4].codigo=5;
producto[4].nombre="AZUCAR";
producto[4].precio=3000;
producto[4].existencias=120;

producto[5].codigo=6;
producto[5].nombre="SAL";
producto[5].precio=1000;
producto[5].existencias=60;

producto[6].codigo=7;
producto[6].nombre="ACEITE";
producto[6].precio=6000;
producto[6].existencias=30;

producto[7].codigo=8;
producto[7].nombre="LENTEJA";
producto[7].precio=3200;
producto[7].existencias=80;

producto[8].codigo=9;
producto[8].nombre="MANTEQUILLA";
producto[8].precio=3500;
producto[8].existencias=18;

producto[9].codigo=10;
producto[9].nombre="SALCHICHA";
producto[9].precio=2500;
producto[9].existencias=25;
/*ASI HASTA LOS 10 PRODUCTOS*/
	
}

void mostrar_productos(producto producto[]){
	//ASI MOSTRARÍAN TODOS LOS 30 PRODUCTOS EXISTENTES
	cout<<"LOS PRODUCTOS EXISTENTES SON: "<<endl;
	
	for(int i=0; i<29; i++){
		cout<<"-------------------------------------------------\n";
		cout<<"CODIGO: "<<producto[i].codigo<<endl;
		cout<<"NOMBRE: "<<producto[i].nombre<<endl;
		cout<<"PRECIO: "<<producto[i].precio<<endl;
		cout<<"EXISTENCIAS: "<<producto[i].existencias<<endl;	
		cout<<"-------------------------------------------------";
    }
    return;
}

void adicionar_productos(producto producto[]){
	/*AQUI SE DEBEN CREAR LOS PRODUCTOS DESDE EL 10 HASTA EL 29 UNO POR UNO, NO NECESARIAMENTE TODOS*/
	
	cout<<"LOS 10 PRIMEROS PRODUCTOS SON: "<<endl;
	int np;
	for(int i=0; i<10; i++){
		cout<<"-------------------------------------------------\n";
		cout<<"CODIGO: "<<producto[i].codigo<<endl;
		cout<<"NOMBRE: "<<producto[i].nombre<<endl;
		cout<<"PRECIO: "<<producto[i].precio<<endl;
		cout<<"EXISTENCIAS: "<<producto[i].existencias<<endl;
		cout<<"-------------------------------------------------\n";			}
	cout<<endl;
	
	
	for(int i=10; i<29; i++){
		int adi;
		cout<<"Quiere Adicionar un nuevo producto?\n";
		cout<<"Digite 1 para Si o 0 para No\n";
		cin>>np;
		if(np == 0){break;
		}
		cout<<"Agregue un Nuevo Producto: "<<endl;
		cout<<"CODIGO: ";		
		cin>>producto[i].codigo;
		if(producto[i].codigo>0 && producto[i].codigo<=10){
			cout<<"El codigo ingresado ya existe\n";
			system("pause");
			break;			
		}
		cout<<"NOMBRE: ";
		cin>>producto[i].nombre;
		cout<<"PRECIO: ";
		cin>>producto[i].precio;
		cout<<"EXISTENCIAS: ";
		cin>>producto[i].existencias;
		cout<<"Quiere Adicionar un nuevo producto?\n";
		cout<<"Digite 1 para Si o 0 para No\n";
		cin>>adi;
		if(adi == 0){break;
		}		}
}


void menu(producto producto[]){
  int opc=0;  
  do{
    system("cls");
    cout<<"PROYECTO FINAL --- "<<endl;
    cout<<"1. GESTION DE PRODUCTOS"<<endl;
    cout<<"2. TIENDA"<<endl;
    cout<<"3. SALIR"<<endl;
  

  
    cout<<"DIGITE LA OPCION--->";
    cin>>opc;
    
    switch(opc){
      case 1:{
        	system("cls");//LIMPIAR PANTALLA
			cout<<"1. GESTION DE PRODUCTOS "<<endl;

			int op=0;
			do{
				system("cls");
				cout<<"-----------Gestion De Productos---------------"<<endl;
				cout<<"1.Crear Producto "<<endl;
				cout<<"2.Modificar Producto"<<endl;
				cout<<"3.Listar Todos los Productos "<<endl;
				cout<<"4.Volver al Menu Principal "<<endl;	
				cout<<"Digite una opcion"<<endl;
				
				cin>>op;
			
			
				switch(op) 
				{
			
				    case 1:
				    		cout<<"Crear Producto "<<endl;
				    		adicionar_productos(producto);
							 
				    break;
				    case 2: 
				    		cout<<"Modificar Producto "<<endl;
				    break;
				    case 3: 
				    		cout<<"Listar Todos los Productos "<<endl;
				    		mostrar_productos(producto);
				    system("pause");
				    break;
				    case 4: 
				    		cout<<"Volver a Menu Principal "<<endl;
				    		
				    break;			
				}
			
			}while(op>0 && op<=3);   
		
           
          	
     	//system("pause");
        break;
      }//CASE1
        
      case 2:{
      		system("cls");//LIMPIAR PANTALLA
			cout<<"2. REEMPLAZO "<<endl;
      
      }//CASE 2
        
       case 3:{
          cout<<"DECIDIO SALIR DEL PROGRAMA"<<endl;
        break;
      }//CASE 6  
        
    }//SWITCH
    
    //break;
  }while(opc>0 && opc<6);
return;	
}



int main(){
 //AQUI ESTAN LOS 30 PRODUCTOS
  producto producto[30];
  cargarProdInic(producto); 
  menu(producto); 
  
  system("pause");
  return 0;
}//MAIN
  
