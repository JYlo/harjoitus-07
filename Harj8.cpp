/***********************************************
*Harjoitus 8
*Jouni Yl�nen
*Kuvaus:
Harjoitus 8 (palautus vko 41)
Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
j�rjestyksess� (pienimm�st� suurimpaan) n�yt�lle
(katso harj. 1 suunnitelma)
a) k�yt� kokonaislukuja
b) k�yt� liukulukuja (=reaalilukuja)
_________________________________
*
*Versio: 1.0
*PVM: 24.9.2014
************************************************/


#include <iostream>
using namespace std;

void main()
{
	int A;
	int B;
	int C;

	cout << "Anna kolme lukua:" << endl;
	cin >> A >> B >> C;

	if (A < B && B < C)
		cout << A << " " << B << " " << C << endl;

	if (A < C && C < B)
		cout << A << " " << C << " " << B << endl;

	if (B < A && A < C)
		cout << B << " " << A << " " << C << endl;

	if (B < C && C < A)
		cout << B << " " << C << " " << A << endl;

	if (C < A && A < B)
		cout << C << " " << A << " " << B << endl;

	if (C < B && B < A)
		cout << C << " " << B << " " << A << endl;

}