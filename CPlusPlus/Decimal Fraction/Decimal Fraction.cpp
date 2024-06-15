#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int countOf2 = 0, countsOf5 = 0;

    //int original_N = n;

    while (n % 2 == 0) {
        n /= 2;
        countOf2++;
    }

    while (n % 5 == 0) {
        n /= 5;
        countsOf5++;
    }

    if (n != 1) {
        cout << "NO" << endl;
    }
    else {
        cout << max(countOf2, countsOf5) << endl;
    }

    return 0;
}
