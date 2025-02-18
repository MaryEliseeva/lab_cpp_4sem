#include "lab1c.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	Roots(0, 0, 0);
	Roots(1, 0, 0);
	Roots(0, 2, 0);
	Roots(0, 0, 1);
	Roots(1, 1, 0);
	Roots(1, 0, -1);
	Roots(0, 1, 1);
	Roots(1, -9, 1);
	Roots(-1, 2, -10);
	Roots(1,5.6, -15);
	return 0;
}
