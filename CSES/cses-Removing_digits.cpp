#include<iostream>
#include <bits/stdc++.h>

inline int get_larger_digit(int x){
    int maxi = -1;
    while(x){
        maxi = std::max(maxi, x%10);
        x /= 10;
    }
    return maxi;
}

int main(){
    int n;
    std::cin>>n;
    long long res = 0;
    while(n){
        n -= get_larger_digit(n);
        res++;
    }
    std::cout<<res<<std::endl;

    return 0;
}



