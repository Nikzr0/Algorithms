#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	long long a, b; cin >> a >> b;

	long long cMax = a + b - 1;
	long long cMin = abs(a - b);

	cout << cMax - cMin << endl;
}

//Task
//?????? ?? ??? ???? ??????????? ????? a ? b.????? ???????? ????????????? ??????????? ????????? ????? ?? ????? ?? ???????????? c, ???? ?? ????????? ? ??????? a, b ? c ?? ????? ?? ????????? ??????????.???????? ???????? triangle, ????? ??????? ??????????? ?? a ? b, ? ??????? ???????? ????.
//
//?????????: T?? ??????? ????? ?? ????????? ??????????, ??? ????????? ?? ????? ?? ??? ? ?? - ????? ?? ?????? ?? ????????? ?? ??????? ??? ???????.
//
//Input Format
//
//?????????? ??????? ?? ??????????? ???? ??????????? ?? a ? b.
//
//Constraints
//
//	: 0 < a < 10 ^ 15, 0 < b < 10 ^ 15
//
//	Output Format
//
//	?????????? ?????? ?? ?????? ?? ??????????? ????? ???? ???? ?????, ????? ?? ???????? ????.