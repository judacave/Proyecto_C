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
/*ASI HASTA LOS 10 PRODUCTOS*/
	
}

void mostrar_productos(producto producto[]){
	//ASI MOSTRARÍAN TODOS LOS 30 PRODUCTOS EXISTENTES
	cout<<"LOS PRODUCTOS EXISTENTES SON: "<<endl;
	
	for(int i=0; i<20; i++){
		cout<<"-------------------------------------------------";
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
	/*
	cout<<"LOS 	PRODUCTOS SON: "<<endl;
	
	for(int i=0; i<10; i++){
		
		cout<<"CODIGO: "<<producto[i].codigo<<endl;
		cout<<"NOMBRE: "<<producto[i].nombre<<endl;
			cout<<"PRECIO: "<<producto[i].precio<<endl;
			cout<<"EXISTENCIAS: "<<producto[i].existencias<<endl;			}
	*/
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
			/*DEBE IR OTRO DO WHILE Y OTRO SWITCH 
			CON LAS OPCIONES CREAR PRODUCTO, MODIFICAR PRODUCTO, LISTAR TODOS LOS PRODUCTOS Y VOLVER AL MENU PRINCIPAL
			DENTRO DE CREAR PRODUCTO PUEDEN USAR LA FUNCION ADICIONAR PRODUCTO
			*/
			int op=0;
			do{
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
				    	
							 
				    break;
				    case 2: 
				    		cout<<"Modificar Producto "<<endl;
				    break;
				    case 3: 
				    		cout<<"Listar Todos los Productos "<<endl;
				    break;
				    case 4: 
				    		cout<<"Volver a Menu Principal "<<endl;
				    		menu(producto);
				    break;			
				}
			
			}while(op>0 && op<=4);

			
			
			
			/*
			producto producto[20];
			producto producto[10];
	
	cout<<"DIGITE LOS PRODUCTOS: "<<endl;
	for(int i=0; i<20; i++){
	    cout<<"CODIGO DEL PRODUCTO:"<<(i + 1);
		cin>>producto[i].codigo;
		cout<<"NOMBRE DEL PRODUCTO:"<<(i + 1);
		cin>>producto[i].nombre;
		cout<<"EL PRECIO DEL PRODUCTO: "<<(i + 1);
		cin>>producto[i].precio;
	    cout<<"EXISTENCIA DEL PRODUCTO: "<<(i + 1);
		cin>>producto[i].existencias;
	  }
	for(int i=0; i<10; i++){
		cout<<"CODIGO DEL PRODUCTO:"<<(i + 1);
		cin>>producto[i].codigo;
		cout<<"NOMBRE DEL PRODUCTO:"<<(i + 1);
		cin>>producto[i].nombre;
		cout<<"EL PRECIO DEL PRODUCTO: "<<(i + 1);
		cin>>producto[i].precio;
	    cout<<"EXISTENCIA DEL PRODUCTO: "<<(i + 1);
		cin>>producto[i].existencias;
	  }
	
			*/
         
		
           
          	
     	system("pause");
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
    
    break;
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
  
