#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	/*ZADANIE 1*/
	/*int a, b;
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> a;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> b;
	if (a==b) {
		cout << "Liczby sa rowne" << endl;
	}
	else if (a>b) {
		cout << "Pierwsza liczba jest wieksza od drugiej" << endl;
	}
	else {
		cout << "Druga liczba jest wieksza od pierwszej" << endl;
	}*/

	/*ZADANIE 2*/
	/*int a, b;
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> a;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> b;
	if (a == b) {
		cout << "Liczby sa rowne" << endl;
	}
	else {
		if (a > b) {
			cout << "Pierwsza liczba jest wieksza od drugiej" << endl;
		}
		else {
			cout << "Druga liczba jest wieksza od pierwszej" << endl;
		}
	}*/

	/*ZADANIE 3*/
	/*float r;
	cout << "Podaj wspolczynnik r: ";
	cin >> r;
	if (r >= 0.7 && r <= 1) {
		cout << "Wspolczynnik r ma bardzo silna korelacje dodatnia";
	}
	else if (r >= 0.5) {
		cout << "Wspolczynnik r ma silna korelacje dodatnia";
	}
	else if (r >= 0.3) {
		cout << "Wspolczynnik r ma umiarkowana korelacje dodatnia";
	}
	else if (r >= 0.2) {
		cout << "Wspolczynnik r ma slaba korelacje dodatnia";
	}
	else if (r >= 0) {
		cout << "Wspolczynnik r nie ma korelacji dodatniej";
	}*/

	/*ZADANIE 4*/
	/*float x, y, w;
	char z;
	cout << "Podaj pierwsza liczbe: ";
	cin >> x;
	cout << "Podaj znak dzialania (+, -, /): ";
	cin >> z;
	cout << "Podaj druga liczbe: ";
	cin >> y;
	if (z == '+') {
		w = x + y;
		cout << "Wynik dzialania to: " << w;
	}
	else if (z == '-') {
		w = x - y;
		cout << "Wynik dzialania to: " << w;
	}
	else if (z == '/') {
		if (y == 0) {
			cout << "!!!!!Nie mozna dzielic przez 0!!!!!!";
		}
		else {
			w = x / y;
			cout << "Wynik dzialania to: " << w;
		}
	}*/

	/*ZADANIE 5*/
	/*for (int i = 0; ; i++) {
		cout << i;
	}*/

	/*int a = 1;
	while (a>0) {
		cout << a;
		a++;
	}*/

	/*ZADANIE 6*/
	/*int p = 0;
	while (p == 0) {
		float x, y, w;
		char z;
		cout << "Podaj pierwsza liczbe: ";
		cin >> x;
		cout << "Podaj znak dzialania (+, -, /): ";
		cin >> z;
		cout << "Podaj druga liczbe: ";
		cin >> y;
		if (z == '+') {
			w = x + y;
			cout << "Wynik dzialania to: " << w << endl;;
		}
		else if (z == '-') {
			w = x - y;
			cout << "Wynik dzialania to: " << w << endl;;
		}
		else if (z == '/') {
			if (y == 0) {
				cout << "!!!!!Nie mozna dzielic przez 0!!!!!!" << endl;;
			}
			else {
				w = x / y;
				cout << "Wynik dzialania to: " << w << endl;
			}
		}
		cout << "Czy chcesz zakonczyc dzialanie programu? (0=NIE, 1=TAK): ";
		cin >> p;
	}*/

	/*ZADANIE 7*/
	/*for (int i = 0; i < 200; i++) {
		if (i % 2 == 0) {}
		else {
			cout << i;
		}
	}*/

	/*ZADANIE 8*/
	/*int n, w = 0;
	cout << "Podaj liczbe dodatnia: ";
	cin >> n;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				cout << "Najmniejszy dzielnik dla liczby " << n << " to " << i;
				break;
			}
		}*/
}