#include <iostream>

using namespace std;
// Jest program ktory  podlicza ile liter ma dany wyraz
// Chodzi nam konkretnie o litery a,b,c
// Do instrukcji wyboru bedziemy wprowadzac wyraz ktory
// poda uzytkownik

// Przyklad: Uzytkownik podaje wyraz "adam"
// Program zwraca komunikat np. Liter "a" w tym wyrazie jest: 2

char wyraz[100];

void Switch(char wyraz[100])
{
	int liczba_a = 0;
	int liczba_b = 0;
	int liczba_c = 0;
	int dlugosc = strlen(wyraz); // dlugosc wyrazu - adam = 4, janek = 5
	for (int i = 0; i < dlugosc; i++)
	{
		// tablice 100
		// [0] "a"
		// [1] "d"
		// [2] "a"
		// [3] "m"
		switch ((int)wyraz[i])
		{
		case 'a':
			liczba_a++;
			break;
		case 'b':
			liczba_b++;
			break;
		case 'c':
			liczba_c++;
			break;
		default:
			cout << "Nie ma ani litery a ani b ani c" << endl;
			break;
		}
	}

	cout << "Liczba liter a w tym wyrazie to: " << liczba_a;
	cout << "Liczba liter b w tym wyrazie to: " << liczba_b;
	cout << "Liczba liter c w tym wyrazie to: " << liczba_c;
}

int main()
{
	cout << "Wprowadz wyraz max 100 znakow" << endl;
	cin >> wyraz;
	Switch(wyraz);
	system("pause")
	return 0;

}	