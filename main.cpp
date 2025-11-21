#include <iostream>
#include "Header.h"
int main() {
	setlocale(LC_ALL, "");
	cout << "\t--Крестики-нолики--" << endl;
	cout << "Чтобы сходить введите: Номер строки Номер столбца" << endl;
	int k;
	k = 0;
	int player = 1;
	int field[10][10];
	initilization(field);
	while (win(field, player) != true) {
		if (k % 2 == 0) {
			player = 1;
		}
		else {
			player = 0;
		}
		printField(field);
		move(field, player);
		k++;
	}
	printField(field);
	cout << "Игра окончена! Игрок " << player << " победил.";
	return 0;
}