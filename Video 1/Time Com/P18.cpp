//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 8, count = 1;
    int i = 1;
    int  k = 1;
     while( i*i<n){
           k=k+i;
           i++;
           cout<<count++<<endl;
         }

    return 0;
}
