#include"Sequence.h"
#include<iostream>

int main()
{
	Sequence h("dna.txt");
	cout << h.length() << endl;
	cout << h.numberOf('A') << endl;
	cout << h.numberOf('T') << endl;
	cout << h.numberOf('C') << endl;
	cout << h.numberOf('G') << endl;
	cout << h.longestConsecutive() << endl;
	cout << h.longestRepeated() << endl;
	return 0;
}
