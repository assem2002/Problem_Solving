// #include<iostream>
#include<bits/stdc++.h>



#define mod 1000000007
int main(){
    int n,x;
    std::cin>>n>>x;
    std::vector<std::vector<int>> dp_previousCoin_coin_relation(n,std::vector<int>(x+1,0));
    std::vector<int> coins(n);
    for(int cc = 0 ; cc < n; cc++){
        dp_previousCoin_coin_relation[cc][0] = 1;
    }
    for(int i = 0 ; i < n ;i++){
        std::cin>>coins[i]; 
    }
    
    for(int x_dash = 1 ; x_dash <= x; x_dash++ ){
        for(int prev = n-1 ; prev >= 0 ; prev--){
                if(x_dash >= coins[prev]){
                    dp_previousCoin_coin_relation[prev][x_dash] += dp_previousCoin_coin_relation[prev][x_dash - coins[prev]];
                }  
                if(prev+1 < n){
                    dp_previousCoin_coin_relation[prev][x_dash] += dp_previousCoin_coin_relation[prev+1][x_dash];
                }
                dp_previousCoin_coin_relation[prev][x_dash] %=mod;
            }
    }
    std::cout<<dp_previousCoin_coin_relation[0][x]<<std::endl;
    return 0;
}