//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 8, count = 1;
    int a = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j = j/2) {
            a=a+i+j;
            cout << count++ << endl;
        }
    }
    return 0;
}
