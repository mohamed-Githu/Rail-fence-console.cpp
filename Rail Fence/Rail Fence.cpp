#include "Header.h"

char mat[100][100];

int main()
{
	string word;
	init(mat);
	char choice;

	cout << "[1] Incryption\n[2] Decryption\n\nChoose : ";
	cin >> choice;

	system("cls");

	switch (choice)
	{
	case '1': word = incryptionCall(); break;
	case '2': word = decryptionCall(); break;
	}

	cout << "\nThe word is : " << word << "\n";
}