#include <iostream>
using namespace std;

int main() {
    int n,i, Term1 = 0, Term2 = 1, NextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << Term1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << Term2 << ", ";
            continue;
        }
        NextTerm = Term1 + Term2;
        Term1 = Term2;
        Term2 = NextTerm;
        
        cout << NextTerm << ", ";
    }
    return 0;
}
