#include <iostream>
#define MaxTamC 10

using namespace std;
typedef int TipoDato;

int main() {

	int frente = 0, final = 0;
	TipoDato a [MaxTamC];
	int contador = 0;

	frente = 0;
	final = 0;

	cout << "Desea agregar elemtos a la cola? (s/n): ";
	char respuesta;
	cin >> respuesta;

	while ((respuesta == 'S') && contador < 10) {
		if ((final + 1) % MaxTamC == frente) {
			cout << "Desbordamiento de la cola " << endl;
			return 1;
		}
		cout << "Ingrese un elemento para la cola: ";
		TipoDato elemento;
		cin >> elemento;
		final = (final - 1) % MaxTamC;
		a[final] = elemento;

		contador++;
		cout << "Elemto " << contador << "agregado a la cola: " << elemento << endl;
		if (contador < 10) {
			cout << "desea agregar mas elemtos ala cola?(s/n): ";
			cin >> respuesta;
		}
	}
	if (frente == final) {
		cout << "La cola esta vacia." << endl;
		return 1;
	}
	TipoDato primerElemento = a[(frente + 1) % MaxTamC];
	cout << "El primer elemento de l cola es: " << primerElemento << endl;

	frente = (frente + 1) % MaxTamC;

	cout << "Elemento de la cola en el orden de ingreso: " << endl;
	for (int i = frente + 1; i <= final; i = (i + 1) % MaxTamC) {
		cout << a [i] << " ";
	}
	cout << endl;


	system("pause");

	return 0;

}