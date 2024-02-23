//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n=9 ,count = 1;
    for(int i = 0; i*i<n; i++){
        cout<<count++<<endl;
    }
}