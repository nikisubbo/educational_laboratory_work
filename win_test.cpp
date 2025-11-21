#include <iostream>
#include "Header.h"
bool win(int field[10][10], int player) {
	for (int i = 0; i < 3; i++) {
		if (field[i][0] == player && field[i][1] == player && field[i][2] == player) {
			return true;
		}
	}
	for (int j = 0; j < 3; j++) {
		if (field[0][j] == player && field[1][j] == player && field[2][j] == player) {
			return true;
		}
	}
	for (int j = 0; j < 3; j++) {
		if (field[0][0] == player && field[1][1] == player && field[2][2] == player) {
			return true;
		}
	}
	for (int j = 0; j < 3; j++) {
		if (field[0][2] == player && field[1][1] == player && field[2][0] == player) {
			return true;
		}
	}
	return false;
}