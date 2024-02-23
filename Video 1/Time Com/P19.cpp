//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 4, count = 1;
    int a=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a=a+j;
            cout << count++ << endl;
        }
    }

    int b = 0;
    for (int k = 0; k < n; k++){
            b=b+k;
    }

    return 0;
}
