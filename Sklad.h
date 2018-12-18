#pragma once
#include "Tovar.h"
class Sklad
{
private: 
	/*void swap(int *xp, int *yp);
	void bubbleSort(int arr[], int n);*/
	Tovar *zasoby = nullptr;
	unsigned int pocet = 0;
public:
	Sklad();
	void vlozTovar(Tovar vkladany);
	void upracPodlaCeny();
	void upracPodlaAbecedy();
	void upracPodlaPoctuKs();
	void vypis(Tovar * upratany);
	~Sklad();
};

