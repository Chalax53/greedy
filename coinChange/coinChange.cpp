#include <iostream>
#include <vector>
#include "cajero.h"
using namespace std;

int main()
{
	cajero C(10,10,10,10); //cantidad de monedas de cada una
	C.check(40, 50); //a=costo b=billete
}