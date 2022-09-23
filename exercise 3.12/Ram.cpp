#include <iostream>
using namespace std;

#include "Ram.h"

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) {
		mem[i] = 0;
	}
	size = 100 * 1024;
}

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int adress) {
	return mem[adress];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}

