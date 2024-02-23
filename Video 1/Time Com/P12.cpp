//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 8, count = 1;
    for (int i = 1; i < n; i *= 2) {
        for (int j = 1; j < n; j *= 2) {
            cout << count++ << endl;
        }
    }
    return 0;
}
