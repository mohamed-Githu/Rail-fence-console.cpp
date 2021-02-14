#include "Header.h"

extern char mat[][100];

string incryptionCall()
{
	int key;
	string temp, phrase, incrypted;
	cout << "Enter the phrase : ";
	cin >> temp;
	getline(cin, phrase);
	phrase = temp + phrase;

	cout << "Enter the Key : ";
	cin >> key;

	incryptoin(phrase, incrypted, key);

	return incrypted;
}

static void incryptoin(string& phrase, string& incrypted, int key)
{
	int row = 0;
	bool direction = true;
	for (int x = 0; x < phrase.size(); x++)
	{
		mat[row][x] = phrase[x];
		if (direction)
			row++;
		else
			row--;
		if (row == key - 1)
			direction = false;
		else if (row == 0)
			direction = true;
	}

	for (int x = 0; x < key; x++)
	{
		for (int y = 0; y < phrase.length(); y++)
		{
			if (mat[x][y] != '*')
				incrypted += mat[x][y];
		}
	}
}