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

	/*ZADANIE 9*/
	/*int t;
	cout << "Podaj temperature: ";
	cin >> t;
	if (t <= 0) {
		cout <<  "Mroz" <<endl;
	}
	else if (t > 0 && t <= 10) {
		cout << "Chlodno" << endl;
	}
	else if (t > 10 && t <= 20) {
		cout << "Umiarkowanie" << endl;
	}
	else if (t > 20 && t <= 30) {
		cout << "Cieplo" << endl;
	}
	else {
		cout << "Goraco" << endl;
	}*/

	/*ZADANIE 10*/
	/*int a, b, c;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	cout << "Podaj liczbe c: ";
	cin >> c;
	if (a > b && a > c) {
		cout << "Najwieksza jest liczba a" << endl;
	}
	else if (b > a && b > c) {
		cout << "Najwieksza jest liczba b" << endl;
	}
	else if (c > b && c > a) {
		cout << "Najwieksza jest liczba c" << endl;
	}
	else {
		cout << "Liczby sa rowne" << endl;
	}*/

	/*ZADANIE 11*/
	/*int r;
	cout << "Podaj rok: ";
	cin >> r;
	if (r % 4 == 0 && r % 100 != 0 || r % 400 == 0) {
		cout << "Rok jest przestepny" << endl;
	}
	else {
		cout << "Rok nie jest przestepny" << endl;
	}*/

	/*ZADANIE 12*/
	/*int w;
	cout << "Menu" << endl;
	cout << "1. Start" << endl;
	cout << "2. Ustawienia" << endl;
	cout << "3. Pomoc" << endl;
	cout << "4. Koniec" << endl;
	cout << "Twoj wybor: ";
	cin >> w;
	cout << "" << endl;
	switch (w) {
	case 1:
		cout << "Wybtano start" << endl;
		break;
	case 2:
		cout << "Wybtano ustawienia" << endl;
		break;
	case 3:
		cout << "Wybtano pomoc" << endl;
		break;
	case 4:
		cout << "Wybrano koniec" << endl;
		break;
	default:
		cout << "Zla opcja" << endl;
	}*/

	/*ZADANIE 13*/
	/*int o;
	cout << "Podaj ocene (1-5): ";
	cin >> o;
	cout << "" << endl;
	switch (o) {
	case 1:
		cout << "Niedostateczny" << endl;
		break;
	case 2:
		cout << "Dopuszczajacy" << endl;
		break;
	case 3:
		cout << "Dostateczny" << endl;
		break;
	case 4:
		cout << "Dobry" << endl;
		break;
	case 5:
		cout << "Bardzo dobry" << endl;
		break;
	default:
		cout << "Zla ocena" << endl;
	}*/

	/*ZADANIE 16*/
	/*for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << "" << endl;
	}*/
	
	/*ZADANIE 17*/
	/*int l;
	int d = 0;
	cout << "Podaj liczbe calkowita nieujemna: ";
	cin >> l;
	if (l == 0) {
		d = 1;
	}
	else {
		while (l > 0) {
			d++;
			l = l / 10;
		}
	}
	cout << d << endl;*/

	/*ZADANIE 19*/
	/*int w;
	do {
		cout << "" << endl;
		cout << "Menu" << endl;
		cout << "1. Start" << endl;
		cout << "2. Ustawienia" << endl;
		cout << "3. Pomoc" << endl;
		cout << "4. Koniec" << endl;
		cout << "Twoj wybor: ";
		cin >> w;
		cout << "" << endl;
		switch (w) {
		case 1:
			cout << "Wybtano start" << endl;
			break;
		case 2:
			cout << "Wybtano ustawienia" << endl;
			break;
		case 3:
			cout << "Wybtano pomoc" << endl;
			break;
		case 4:
			cout << "Wybrano koniec" << endl;
			break;
		default:
			cout << "Zla opcja" << endl;
		}
	} while (w != 4);*/
}
