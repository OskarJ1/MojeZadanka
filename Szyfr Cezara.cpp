#include <iostream>
#include <chrono>

using namespace std;
chrono::duration<double> elapsed_seconds;

void szyfrowanie(int klucz, char tablica[]) {
	int dl = strlen(tablica);

	if (!(klucz >= -26 and klucz <= 26)) {
		return;
	}
	if (klucz >= 0) {
		 for (int i = 0; i < dl; i++) {
			if (tablica[i] + klucz <= 'z') {
				tablica[i] += klucz;
			}
			else
			{
				tablica[i] += (klucz - 26);
			}
		 }
	}
	else
	{
	for (int i = 0; i < dl; i++) {
		if (tablica[i] + klucz >= 'a') {
			tablica[i] += klucz;
		}
		else
			{
				tablica[i] += (klucz + 26);
			}
		}
	}
}

int main()
{	chrono::system_clock::time_point start = chrono::system_clock::now(); 

 int dl, klucz;
 char tablica[200];
   cout << "Wpisz klucz: ";
	cin >> klucz;
	cout << "Wpisz wyraz: ";
	cin >> tablica;
	cout << endl;

	szyfrowanie(klucz, tablica);
	cout <<"Zaszyfrowałeś: "<< tablica;
    cout << endl;

	szyfrowanie(-klucz, tablica);
	cout << "Odszyfrowałeś: " << tablica << endl;

    chrono::system_clock::time_point end = chrono::system_clock::now(); 
	elapsed_seconds += end - start; 

    cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
}