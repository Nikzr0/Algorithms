#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<string> oddDigits = { "1", "3", "5", "7", "9" };


	int index = 0;
	string current;

	while (true) {
		current = oddDigits[index];
		++index;

		oddDigits.push_back(current + "1");
		oddDigits.push_back(current + "3");
		oddDigits.push_back(current + "5");
		oddDigits.push_back(current + "7");
		oddDigits.push_back(current + "9");

		if (oddDigits.size() >= n)
		{
			cout << oddDigits[n - 1] << endl;
			return 0;
		}
	}
}
//Task
//Подреждаме в растящ ред целите числа, които имат само нечетни цифри : 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 31, ...
//
//Напишете програма odd, която намира n - тото число от тази редица.Броенето започваме от 1, така че първото търсенo число е 1.
//
//Input Format
//
//Едно цяло положително число, задаващо стойността на n
//
//Constraints
//
//0 < n < 100 000
//
//	Output Format
//
//	Едно цяло число, равно на n - тото число от описаната редица