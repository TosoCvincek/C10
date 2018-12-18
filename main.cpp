#include "Tovar.h"
#include "Sklad.h"
int main() {
	Tovar t1("Cukricky");
	t1.setCena(10);
	t1.setPocet(2);
	t1.setRegal(1);
	Sklad *s1;
	s1->vlozTovar(t1);
	s1->upracPodlaCeny();
	return 0;
}