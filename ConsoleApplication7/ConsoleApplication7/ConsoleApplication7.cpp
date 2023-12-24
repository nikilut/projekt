#include <iostream>
using namespace std;

int main(void)
{
    int a = 7;
    for (int i = 3; i <= a; ++i) {
    for (int j = 0; j <= i; ++j) {
        if (j == i) {
            for (int q = 0; q <= a - j - 1; ++q) {
                    cout << " ";
                }
                cout << "*";
            }
            else {
                for (int w = 0; w <= a - j; ++w) {
                    cout << " ";
                }
            }
            for (int e = 0; e <= 2 * j; ++e) {
                cout << "*";
            }
            if (j == i) {
                cout << "*";
            }
            cout << endl;
        }
    }
    cout << "       ***" << endl;
    cout << "       ***" << endl;
    cout << "       ***" << endl;
    cout << "       ***" << endl;
    cout << "       ***" << endl;
}