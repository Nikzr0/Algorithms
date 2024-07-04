#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string input; cin >> input;
	long long n; cin >> n;

	string command;
	int number;
	for (long long i = 0; i < n; i++)
	{
		cin >> command;
		cin >> number;

		if (command == "Inv")
		{
			if (input[number - 1] == '0')
			{
				input[number - 1] = '1';
			}
			else
			{
				input[number - 1] = '0';
			}
		}
		else
		{
			int numberOfZeros = 0;
			int numberOfOnes = 0;
			bool canGoInZero = true;
			bool canGoInOne = true;

			for (int i = 0; i < input.size(); i++)
			{
				if (input[i] == '0' && canGoInZero)
				{
					numberOfZeros++;
					canGoInZero = false;
					canGoInOne = true;
				}
				else if (input[i] == '1' && canGoInOne)
				{
					numberOfOnes++;
					canGoInOne = false;
					canGoInZero = true;
				}
			}

			if (number == 0)
			{
				cout << numberOfZeros << endl;
			}
			else
			{
				cout << numberOfOnes << endl;
			}
		}
	}
}

//Задача D4.ДВОИЧНИ НИЗОВЕ
//Даден е низ с дължина 𝑛, образуван от нули и единици.Елементите на низа са номерирани
//с целите числа от 1 до 𝑛.
//Има два вида команди :
//• Inv i – инвертира елемента с номер i(ако е 0 става 1 и обратно);
//• Print x – ако x е 0 извежда броя на поднизовете в текущия низ, които са образувани
//само от нули; ако x е 1 извежда броя на поднизовете в текущия низ, които са образувани
//само от единици.
//Напишете програма bitstring, която по даден начален низ и последователност от команди, за всяка команда Print извежда броя на съответните поднизовете.

//Вход

//От първия ред на стандартния вход се въвежда началният низ.От следващия ред се въвежда броят на командите 𝑡.Следват 𝑡 реда с команди.
//Изход
//За всяка команда Print на отделен ред на стандартния изход да се изведе съответният
//брой поднизове.
//Ограничения

//• 1 ≤ 𝑛 ≤ 106
//• 1 ≤ 𝑡 ≤ 106