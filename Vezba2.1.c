// Vezba2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// POKAZIVACI
#include <stdio.h>
int main()
{
	int poeni1 = 50, poeni2 = 85;
	int* pp = NULL;
	pp = &poeni1;
	printf("Adr poeni1 = %p\n", pp);
	printf("Poeni1 = %d\n", *pp);
	*pp = 60;
	printf("Poeni1 = %d\n", poeni1);
	if (poeni2 > poeni1)
		pp = &poeni2;
	else
		pp = &poeni1;
	printf("Max=%d\n", *pp);
	float prosek = (poeni1 + poeni2) / 2.;
	printf("Prosek=%.2f\n", prosek);
	float * pprosek = &prosek;

	// NIZOVI
	int poeni[5] = { 50, 85, 90, 75, 60 };
	int *pmax = poeni[0];//WARNING!!! 50 is not an address
	pmax = &poeni[0];//adresa prvog elementa niza
	pmax = poeni + 0;//imax=0
	for(int i = 1; i < 5; i++)
		if(poeni[i]> *pmax)
			pmax = poeni + i;//imax=i
	printf("Max=%d\n", *pmax);
}
