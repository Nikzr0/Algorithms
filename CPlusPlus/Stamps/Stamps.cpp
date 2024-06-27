#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	long long n, m, p, q;
	cin >> n >> m >> p >> q;

    m = m * 2;

    int output = 0;
    long long sideCapacity = p * q;

	map<long long, long long> stamps;
	
    int temp;
    for (int i = 0; i < n; ++i) {
         cin >> temp;

         if (stamps.find(temp) != stamps.end())
         {
			stamps[temp]++;
		}
         else
         {
             stamps[temp] = 1;
         }
    }

    output = stamps.size();
    for (auto it = stamps.begin(); it != stamps.end(); ++it) {
     
        if (it -> second > sideCapacity)
        {
            int count = it->second;
            while (count > sideCapacity)
            {
                output++;
                count -= sideCapacity;
            }
        }
    }


    if (output % m == 0) {
        cout << output / m << endl;
    }
    else {
        cout << output / m + 1 << endl;
    }

  

}

//Task
//Днес Аялайя ще подрежда колекцията си от n пощенски марки в класьори.Класьорите имат по m картонени листа за марки, на всяка страница от листа са оформени по p реда с джобчета за марки, а на всеки ред се събират по q марки.На всяка страница Аялайя подрежда само марки с еднакъв номинал*, което понякога довежда до частично запълнени страници – просто няма достатъчно марки с този номинал, за да запълнят страницата.
//
//Input Format
//
//Програмата прочита от стандартния вход n, m, p и q.След това прочита номиналите на n - те марки.
//
//Constraints
//
//0 < n ≤ 10 ^ 6, 0 < m ≤ 40, 1 < p, q ≤ 10; номиналите на марките в колекцията са цели положителни числа, не по - големи от 1000.
//
//    Output Format
//
//    Програмата да отпечата на един ред на стандартния изход колко най - малко класьора ще са необходими за подреждане на колекцията, като се спазва описаното правило за подредба.