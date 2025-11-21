#include <iostream>
#include "Header.h"
void move(int field[10][10], int player) {
	int x, y;
	cout << "Ход игрока " << player << ": ";
	cin >> x >> y;
	while (x > 3 || x < 1 || y > 3 || y < 1 || field[x - 1][y - 1] != -1) {
		cout << "Неверный ход, попробуйте снова: ";
		cin >> x >> y;
	}
	field[x - 1][y - 1] = player;
}