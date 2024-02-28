#include <iostream>
#include <cmath>

using namespace std;


void numeroPrimo();
bool esPrimo(int numPrimo);
void calcularRaiz();
void calculadoraBasica();
void sumatoria();

void repeticion();


char respuesta;
bool repetir;

int main(){
	do{
		system("cls");
		int opcion;
		cout << "\tMenu:\n\n";
		cout << "1. Comprobacion si es primo\n";
		cout << "2. Calcular raiz cuadrada\n";
		cout << "3. Calculadora basica\n";
		cout << "4. Sumar hasta n numero\n";
		cout << "5. Salir del menu\n\n";
		cout << "Opcion a elegir: ";
		cin >> opcion;
		system("cls");
		switch(opcion){
			 case 1:
			 	numeroPrimo();
			 	repeticion();
			 	break;
			case 2:
				calcularRaiz();
				repeticion();
				break;
			case 3:
				calculadoraBasica();
				repeticion();
				break;
			case 4:
				sumatoria();
				repeticion();
				break;
			case 5:
				return 0;
			default:
				repetir = true;	
		}	
	} while(repetir == true);
	
	return 0;
}

void numeroPrimo(){
	system("cls");
	int numPrimo;
	bool comprobar;
	cout << "\tVerificacion de numeros primos\n\n";
	cout << "Ingrese el entero numero a comprobar: ";
	cin >> numPrimo;
	
	if(numPrimo == 1 or numPrimo == 0){
		cout << "\nEl numero " << numPrimo << " no es primo ni compuesto\n";
		system("pause");
		return;
	}
	
	comprobar = esPrimo(numPrimo);
	
	if(comprobar == true){
		cout << "El numero ingresado es primo\n";
	}
	else
		cout << "El numero ingresado no es primo\n";
		
	system("pause");
}

bool esPrimo(int numPrimo){
	int z = 1;
	while(z <= (numPrimo / 2)){
		z++;
		if ((numPrimo % z) == 0)
			return false;
	}
	return true;
}


void calcularRaiz(){
	float num;
	cout << "\tCalcular raiz cuadrada\n\n";
	cout << "Numero a comprobar: ";
	cin >> num;
	
	cout << "\nLa raiz cuadrada de " << num << " es: " << sqrt(num) << endl;
	system("pause");
}

void calculadoraBasica(){
	cout << "\tCalculadora Basica\n\n";
	int operacion, a, b;
	cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n\n";
	cout << "Elige la operacion que deseas realizar: ";
	cin >> operacion;
	system("cls");
	cout << "Ingrese el 1er numero: ";
	cin >> a;
	cout << "Ingrese el 2do numero: ";
	cin >> b;
	switch (operacion) {
	case 1: 
		cout << "El resultado es: " << a+b << endl;
		break;
	case 2:
		cout << "El resultado es: " << a-b << endl;
		break;
	case 3:
		cout << "El resultado es: " << a*b << endl;
		break;
	case 4:
		cout << "El resultado es: " << a/b << endl;
		break;
	}
	system("pause");
}

void sumatoria(){
	int n;
	cout << "\tSumatoria\n\n"; 
	cout << "Ingrese n numero hasta donde se calculara la sumatoria: ";
	cin >> n;
	int sumatoria;
	
	sumatoria = 0;
	
	for(int i = 0; i <= n; i++){
		sumatoria = sumatoria + i;
	}
	
	cout << "\nLa sumatoria hasta " << n << " es = " << sumatoria << endl;
	system("pause");
}

void repeticion(){
	do{
		system("cls");
		cout << "Desea realizar otra accion? S/N: ";
		cin >> respuesta;
	} while(respuesta !='n' and respuesta !='N' and respuesta !='S' and respuesta !='s');
		
	if (respuesta == 's' or respuesta == 'S'){
		repetir = true;
	}
	else if (respuesta == 'n' or respuesta == 'N'){
		repetir = false;
	} 
}



