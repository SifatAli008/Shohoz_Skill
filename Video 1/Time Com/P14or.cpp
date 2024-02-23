//
// Created by Sifat Ali on 2/23/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n=8 ,count = 1;
    for(int i = n; i >= 3; i=i/i){
        cout<<count++<<endl;
    }
    return 0;
}