#include <iostream>

using namespace std;

int main() {

    int banknt, r100, r50, r20, r10, r5, r2, r1;
    cin >> banknt;
    r100 = banknt / 100;
    r50 = (banknt % 100) / 50;
    r20 = (banknt % 100 % 50) / 20;
    r10 = (banknt % 100 % 50 % 20) / 10;
    r5 = (banknt % 100 % 50 % 20 % 10) / 5;
    r2 = (banknt % 100 % 50 % 20 % 10 % 5) / 2;
    r1 = banknt % 100 % 50 % 20 % 10 % 5 % 2;
    cout << banknt << "\n" << r100 << " nota(s) de R$ 100,00\n" << r50 << " nota(s) de R$ 50,00\n" << r20 << " nota(s) de R$ 20,00\n" << r10 << " nota(s) de R$ 10,00\n" << r5 << " nota(s) de R$ 5,00\n" << r2 << " nota(s) de R$ 2,00\n" << r1 << " nota(s) de R$ 1,00\n";

    return 0;
}