//Lista enlazada simple con un metodo de ordenacion insercion .
//El programa debe ejecutar las siguiente metodos registro de edades, que guarde estos numeros que usuario metera 
// mostrar edades , mostrara los datos previamente ingresados por el usuario 
// el metodo de ordenacion por insercion debera ordenar estos datos ingresados por el usario en caso se hayan sido ingresados de forma desordenada.
// eliminar , eliminara el primer dato que encuentre en la lista de edades ingresadas por el usuario.


// todos los metodos ejecutan , sin embargo , el metodo de insercion se ejecuta independientemente , es decir, no guarda los datos registrados en el metodo
//registrar, por lo que no funiciona con el metodo mostrar e eliminar. 
#include <iostream> 
#include <clocale>  //setLocale ()

using namespace std; 

class Edades; //declaración anticipada 

class NodoEdad //declaracion de la clase Edad
{
	int Numero; 
	NodoEdad*siguiente; //declaracion del nodo "siguiente"
	
public:  //elementos publicos
	 NodoEdad(); //constructor
	~NodoEdad(){}//destructor  
	friend class Edades;  //clase amiga , lo que contenga en clase edades almacenara lo de clse Nodo Edad
}; //cierre Nodolista

  NodoEdad :: NodoEdad()
{
	Numero    = 0; //declaracion de donde inica numero 
	siguiente = NULL;
}

class Edades
{
	NodoEdad*primero;
  public:
  	Edades ();
   ~Edades (){}
   
   void RegistroEdad( );
   void EliminarEdad( );
   void MetodoInsercion ();
   void MostrarTodasE(int);
};//cierre Lista 

Edades::Edades ()

{
		primero = NULL;
}

void Edades::RegistroEdad( )
{
	NodoEdad *q;
	q = new NodoEdad();

	
	cout<< "Ingrese una Edad: ";
    cin>> q->Numero;
    
					if(primero==NULL)//sin elementos
						q->siguiente =NULL;
					else 
						q->siguiente=primero;
						primero = q;
}

void Edades::MetodoInsercion()     ///Metodo de insercion , funciona de manera independiente. 
{
	int arr[80]; 
	int i,pos,valorp,n;
	
	cout<< "Ingrese los numeros a usar: "; cin >> n;
	
	for (i=0; i<n ; i++)
	{
		cout<<"No. "<< i << ": "; cin >> arr[i];
	} 
	   for(i=0; i<n ; i++)
	   {
	   	pos = i;
	   	valorp = arr[i];
	   	  while ((pos > 0)&&(arr[pos-1]>valorp))
			 {
	   	  	 arr[pos] = arr[pos-1];
	   	  	 pos--;
			 }
                        arr[pos] = valorp;                  	   
	   }
	
	cout<< "\nNumeros ordenados: ";
		for(i=0; i<n; i++)
		{
		cout << "\n" << arr[i];
		}
	
	cout<<"\n\n\n";
	system("pause");
	
}
	 
void Edades::MostrarTodasE(int valor)
{
	NodoEdad *q;
	q=primero;
	int i=0; 
	
	if(primero)
	{
		q=primero;
		
		while(q) 
		{
			cout<<q->Numero<< " - ";
			i++; 
			q=q->siguiente;  //actualiza/ q se desplaza 
		}
	}
	else cout<<"Lista Vacía";
}

void Edades::EliminarEdad()
{
	NodoEdad *q;


	if(primero) //si hay elementos
	{
		q=primero;
		primero=primero->siguiente;
		delete(q);
	}
	else cout<<"Lista Vacía";
}


int main () 
{
	
	setlocale (LC_CTYPE, "spanish");
	Edades edad;
	
	cout <<"--------::: Regristro de Edades :::--------"<<endl<<endl;
	cout <<"[1]   Regristro de Edades                   "<<endl;
	cout <<"[2]   Ordenar por Insercion                 "<<endl; 
	cout <<"[3]   Mostrar Todas las Edades              "<<endl;
	cout <<"[4]   Eliminar una edad                     "<<endl;
	cout <<"[0]  Salir                                  "<<endl;  

	
	int opcion,valor,tam;
	int *q;
	do
	{
		cout<<" ¿ Elige la opcion deseada? "<<endl;
			cin>>opcion;
			
		switch (opcion)
		{
			case 1:
				edad.RegistroEdad();
				break;
			case 2:
				edad.MetodoInsercion();
				break;
			case 3: 
				edad.MostrarTodasE(valor);
				break;
			case 4:
				edad.EliminarEdad();
				break; 
			case 0: break; 
		}// cierre switch
	} while (opcion!=0);
	return 0;
	system("pause");
}
