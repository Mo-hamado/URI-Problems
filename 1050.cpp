/*
Read an integer number that is the code number for phone dialing.
 Then, print the destination according to the following table:

	DDD		Destination
	61		  Brasilia
	71		  Salvador
	11		  Sao Paulo
	21		Rio de Janeiro
	32		 Juiz de Fora
	19		   Campinas
	27		    Vitoria
	31		Belo Horizonte

If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language.

Input
The input consists in a unique integer number.

Output
Print the city name corresponding to the input DDD.
 Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

Input Sample	Output Sample
11              Sao Paulo
*/
#include <iostream>

using namespace std;

int main() {

	int cd;
	cin >> cd;
	switch (cd) {
	case 61: cout << "Brasilia\n"; break;
	case 71: cout << "Salvador\n"; break;
	case 11: cout << "Sao Paulo\n"; break;
	case 21: cout << "Rio de Janeiro\n"; break;
	case 32: cout << "Juiz de Fora\n"; break;
	case 19: cout << "Campinas\n"; break;
	case 27: cout << "Vitoria\n"; break;
	case 31: cout << "Belo Horizonte\n"; break;
	default: cout << "DDD nao cadastrado\n"; break;
	}

	return 0;
}
