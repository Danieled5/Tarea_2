 #include <iostream>

using namespace std;

int main()
{
	int op;


	{
		int num, i, j;
		system("cls");

		cout << "1 Divisores\n";
		cout << "2-Salir\n";
		cin >> op;

		switch (op)
		{
		case 1:
		{
			cout << "Introduzca un numero:\n";
			cin >> num;
			cout << "Sus divisores son:\n";

			for (i = 1; i <= num; i++)
			{
				if (num % i == 0)
				{
					cout << i << endl;
				}
			}
		}
		cout << endl;
		system("pause");
		}

	}
}