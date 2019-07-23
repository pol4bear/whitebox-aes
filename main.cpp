#include <iostream>
#include "whitebox-homework1.h"

using namespace std;

#define KEY_SIZE 16

int main()
{
	unsigned char key[KEY_SIZE + 1] = { 0, };
	int round = 0;
	int x = 0;

	for (int i = 0; i < KEY_SIZE; i++)
	{
		key[i] = tbox[round][i][x];

		int row = (key[i] & 0xF0) >> 4;
		int column = key[i] & 0xF;

		key[i] = inv_sbox[row][column];
	}
	
	inv_sr(key);

	cout << "The key is " << key << endl;

	return 0;
}