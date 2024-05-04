//
// Created by Fahim  on 25/4/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<< (1<<5)<<endl;

    long long n= 24;
//64 32 16  8 4 2 1
//11 = 1001
// 10 = 1010

    // right shift
    if((n>>4)&1){
        cout<< "ON"<<endl;
    }else{
        cout<< "OFF"<<endl;
    }

    // left shift
    if(n & (1<<3)){
        cout<< "ON"<<endl;
    }else{
        cout<< "OFF"<<endl;
    }


}