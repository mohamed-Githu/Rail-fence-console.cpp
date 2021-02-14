#include "Header.h"

extern char mat[][100];

void init(char mat[][100])
{
	for (int x = 0; x < 100; x++)
	{
		for (int y = 0; y < 100; y++)
			mat[x][y] = '*';
	}
}

void print(string& phrase, int key)
{
	for (int x = 0; x < key; x++)
	{
		for (int y = 0; y < phrase.length(); y++)
			cout << mat[x][y];
		cout << "\n";
	}
}