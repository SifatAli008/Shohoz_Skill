//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 9, count1 = 1, count2= 1;

    for (int i = n; i > 1 ; i/=3) {
        for (int j = 0; j < n;j+=2) {
            cout << count1++ << endl;
        }
    }

    cout<<endl;

    for (int  k = 3; k < n ; k++ ){
        cout << count2++ << endl;
    }

    return 0;
}
