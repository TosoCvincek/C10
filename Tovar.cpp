#include "Tovar.h"


Tovar::Tovar()
{
					
}

Tovar::Tovar(const char * nazovPolozky)
{
	nazov = nazovPolozky;
}

Tovar::~Tovar()
{
	delete[] nazov;
}
