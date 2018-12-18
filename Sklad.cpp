#include "Sklad.h"
#include <stdio.h>
#include <iostream>
using namespace std;
Sklad::Sklad()
{
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)    
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void Sklad::vlozTovar(Tovar vkladany)
{
	if (zasoby == nullptr) {
		zasoby = new Tovar[pocet + 1];
		pocet++;
	}
	else {
		Tovar *pom = new Tovar[pocet +1];
		for (int i = 0; i < pocet; i++)
		{
			pom[i] = zasoby[i];
		}
		pom[pocet] = vkladany;
		delete[] zasoby;
		zasoby = new Tovar[pocet + 1];
		for (int i = 0; i < pocet; i++)
		{
			zasoby[i] = pom[i];
		}
		pocet++;
		delete[] pom;
	}
}

void Sklad::upracPodlaCeny()
{
	int *poleCien = new int[pocet];
	Tovar *pom = new Tovar[pocet];
	Tovar *uprataneCena = new Tovar[pocet];
	for (int i = 0; i < pocet; i++)
	{
		pom[i] = zasoby[i];
	}
	for (int i = 0; i < pocet; i++)
	{
		poleCien[i] = pom[i].getCena();
	}
	bubbleSort(poleCien, pocet);

	/*for (int i = 0; i < pocet; i++) 
	{	
		if (pom[i].getCena() > min)
		{
			min = pom[i].getCena();
			pozicia = i;
		}

	}*/
	for (int i = 0; i < pocet; i++)
	{
		for (int i = 0; i < pocet; i++) {
			if (poleCien[i] == pom[i].getCena())
			{
				uprataneCena[i] = pom[i];
			}
		}
	}
	vypis(uprataneCena);
}

void Sklad::upracPodlaAbecedy()
{
}

void Sklad::upracPodlaPoctuKs()
{

}

void Sklad::vypis(Tovar *upratany)
{
	for (unsigned int i = 0; i < pocet; i++)
	{
		cout << upratany[i].getNazov() << upratany[i].getCena() << "€, " << upratany[i].getPocet() << "ks," << upratany[i].getRegal() << endl;
	}
}


Sklad::~Sklad()
{
	delete[] zasoby;
}
