#pragma once
class Tovar
{
private:
	const char *nazov = nullptr;
	unsigned int cena = 0;
	unsigned int pocet = 1;
	unsigned int regal = 1;
public:
	Tovar();
	Tovar(const char *nazovPolozky);
	~Tovar();
	void setCena(unsigned int pCena) { cena = pCena; };
	void setPocet(int pPocet) { pocet += pPocet; };
	void setRegal(int pRegal) { regal = pRegal; };
	const char* getNazov() { return nazov; };
	int getCena() { return cena; };
	int getPocet() { return pocet; };
	int getRegal() { return regal; };
};

