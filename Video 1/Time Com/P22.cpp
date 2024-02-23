//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 9, count = 1;
    int i = 1 ,j =1;
        while(i < n){
             j = n;
             while(j>0){
                j = j / 2;
               i = 2 * i;
             }
             cout<<count<<endl;
           }
    return 0;
}
