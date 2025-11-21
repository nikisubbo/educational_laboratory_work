#include <iostream>;
#include "Header.h"
void printField(int field[10][10]) {
    cout << "     " << 1 << "  " << 2 << "  " << 3 << endl;
    cout << " ___________" << endl;
    for (int i = 0; i < 3; i++) {
        cout << " " << i + 1 << " | ";
        for (int j = 0; j < 3; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}