#include<iostream>
#include<bits/stdc++.h>
#define mod 100000007
std::vector<int> coins;
std::vector<std::vector<int>> prev_remaining;
int n,x;


int solve(int rem , int prev_coin_index){
    int &vv = prev_remaining[prev_coin_index][rem]; 
    if(rem == 0) return 1;
    if(vv == -1) return 0;
    if(vv > 0) return  vv;
    for(int i = prev_coin_index; i < n ;i++){
        if(rem < coins[i]) break;
        vv += solve(rem - coins[i], prev_coin_index++);
        vv %= mod;
    }
    if(vv == 0) {vv = -1;return 0;} 
    return vv;
}

int main(){
    std::cin>>n>>x;
    coins.resize(n);
    for(int i=0 ; i < n; i++){
        std::cin>>coins[i];
    }
    prev_remaining.resize(n);
    for(int prev_coin_ind = 0 ; prev_coin_ind < n; prev_coin_ind++){
        prev_remaining[prev_coin_ind].resize(x+1,0);
    }
    std::cout<<solve(x, 0)<<"\n"; 

    return 0;
}