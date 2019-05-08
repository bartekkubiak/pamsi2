#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include "grafy.hh"

using namespace std;



		int main()
		{
			int v1,v2,v ,p;


	/****************************************najkrotsza sciezka miedzy wierzcholkami********************/
			/*cout<<"Podaj wierzcholek startowy i koncowy: ";
			cin >> v1 >> v2;
			cout<<"Podaj liczbe wierzcholkow i gestosc: ";
			cin>>v >> p;
			graf a(v);
			a.poczatek(v,v1);
			a.wypelnijLosowo(v,p);
			a.wyznaczSciezki(v);
			a.wyswietlWynikNajDrogi(v,v2);*/
	
/**********************************************wczytywanie z pliku ********************/
					/*cout<<"Macierz: "<<endl;
					graf a(6);
					a.poczatek(6, 0);
					a.wczytajGraf('l');
					a.wyznaczSciezki(6);
					a.wyswietlWynik(6);					
					a.zapiszWyniki(6);
*/
/**********************************************wszystkie najkrotsze sciezki na macierzy ********************/
/*
			

			graf *tab[100];
				int n;
			cout << "Podaj rozmiar grafu: ";
			cin >> n;
			cout << "Podaj gestosc grafu: ";
			cin >> p;
			cout << "Podaj wierzcholek poczatkowy: ";
			cin >> v;


				for (int i = 0; i < 100; i++)
				{
					tab[i] = new graf(n);
					tab[i]->poczatek(n, v);
					tab[i]->wypelnijMacierz(n, p);
				}
				double start = clock();
				for (int j = 0; j < 100; j++)
					tab[j]->wyznaczSciezkiMacierz(n);
				double czas = (clock() - start) / CLOCKS_PER_SEC;

				cout << "Czas dla 100 grafow: " << czas << endl;
				cout << "Sredni czas dla 1 grafu: " << czas / 100 << endl;
*/
/**********************************************wszystkie najkrotsze sciezki na liscie ********************/
/*

					graf *tab[100];
				int n;
			cout << "Podaj rozmiar grafu: ";
			cin >> n;
			cout << "Podaj gestosc grafu: ";
			cin >> p;
			cout << "Podaj wierzcholek poczatkowy: ";
			cin >> v;

					for (int i = 0; i < 100; i++)
					{
						tab[i] = new graf(n);
						tab[i]->poczatek(n, v);
						tab[i]->wypelnijLosowo(n, p);
					}
					double start = clock();
					for (int j = 0; j < 100; j++)
						tab[j]->wyznaczSciezki(n);
					double czas = (clock() - start) / CLOCKS_PER_SEC;

					cout << "Czas dla 100 grafow: " << czas << endl;
					cout << "Sredni czas dla 1 grafu: " << czas / 100 << endl;

			
*/
l

			int c;
			cin >> c;
			return 0;
		}
	
