#include <iostream>
#include "Header.h"
void initilization(int field[10][10]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			field[i][j] = -1;
		}
	}
}