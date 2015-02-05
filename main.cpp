#include <iostream>

using namespace std;

int inline double_it(int x, int m) {
    return (2 * x) % m;
}

int find_it(int G, int m) {
    if (G >= m)
        return -1;

    int x = 1;
    int _i = 0;

    while (x != G) {
        x = double_it(x, m);
        ++_i;
        if(_i>10000000)
            return -999;
    }
    return _i;
}

int main() {
    // the 25 primes less than 100
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    for(int i = 0; i<25; ++i) {

        // Important!
        // If m is not prime it will infinite loop
        int m = primes[i];

        cout << "Modulo " << m << endl;
        for (int j = 1; j < m; ++j) {
            cout << "G: " << j << " - Doubled: " << find_it(j, m) << " times" << endl;
        }
        cout << "---------------------------------"<< endl;
    }

    return 0;
}













