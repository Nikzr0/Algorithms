#include <iostream>
#include <vector>

using namespace std;

int main() {
    int d;
    cin >> d;

    int a;
    cin >> a;
    vector<int> firstArr(a, 0);

    for (int i = 0; i < a; ++i) {
        cin >> firstArr[i];
    }

    int b;
    cin >> b;
    vector<int> secondArr(b, 0);

    for (int i = 0; i < b; ++i) {
        cin >> secondArr[i];
    }


    vector<int> freq(d, 0);
    for (int i = 0; i < a; ++i) {
        freq[firstArr[i] % d]++;
    }

    int counter = 0;
    for (int j = 0; j < b; ++j) {
        int complement = (d - secondArr[j] % d) % d;
        counter += freq[complement];
    }

    cout << counter << endl;

    return 0;
}
