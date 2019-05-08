#ifndef GRAFY_HH
#define GRAFY_HH

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>

const int MAXINT = 2147483647;
// Typy danych
//ifstream wczytaj("wczytaj.txt");
//ofstream zapis("zapisz.txt");


	const int wymiar = 1000; //max rozm macierzy
	class macierz
	{
	public:
		int rozmiar; // rozmiar macierzy
		//int **tab;
		int tab[wymiar][wymiar]; //macierz sasiedztwa
		int *a;
		int pocz;
		int kon;
		int waga;
		int dystans[wymiar]; //tablica odleglosci
		int poprzednik[wymiar];//tablica poprzednich wierzcholkow
		bool odwiedzony[wymiar]; //sprawdzenie czy sciezka przebiegla przez dany wierzcholek

		macierz(); //konstruktor bezparametryczny
		macierz(int n); //konstruktor z iloscia wierzcholkow grafu
		int wyliczKrawedzie(int wierzcholki, int procent); //funkcja liczaca ilosc krawedzi grafu dla zadanej gestosci
		void wypelnijLosowoMacierz(int wierzcholki, int procent); 


	};


class lista  //klasa tworzaca liste
	{
	public:
		lista *kolejny;
		 int v; //wierzcholek
                 int w; //waga
	};


	class graf //klasa tworzaca graf
	{
	public:

		int wierzcholek;
		bool *QS;	//zbiór Q i S
		int *dojscia;   //
		int *poprzedni;
		int *Stos;
		int wsk;
		lista **grafy;                 // Tablica list sšsiedztwa ***
		lista *pw, *rw;				//zmienne potrzebne do wrzucania na liste sasiedztwa ****
		macierz mac;
		

		graf(int n);   //konstruktor parametryczny przyjmujacy liczbe wierzcholkow
		void poczatek(int n, int v); //funkcja przypisujaca elementom klasy wartosci poczatkowe
		int wyliczKrawedzie(int wierzcholki, int procent); //funkcja liczaca ilosc krawedzi grafu dla zadanej gestosci
		void wypelnijLosowo(int wierzcholki, int procent);
		void wyznaczSciezki(int n); //szuka najkrotszej drogi
		void wypelnijMacierz(int n, int procent); //wypelnia macierz o zadanej gestosci
		void wyznaczSciezkiMacierz(int n); //najkrotsza droga w macierzy
		void wyswietlWynik(int n);
		void wyswietlWynikMacierzy(int n);
		void wczytajGraf(char x); //wczytuje graf z pliku tekstowego
		void zapiszWyniki(int n); 
		void wyswietlWynikNajDrogi(int n,int w);
		void zapiszWynikiSciezki(int n, int w); //zapisuje najkrotsze sciezki do pliku tekstowego

		};






#endif
