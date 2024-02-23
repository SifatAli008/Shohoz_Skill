//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 8, count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > 1; j = j/2) {
            cout << count++ << endl;
        }
    }
    return 0;
}
