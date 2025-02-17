#include<iostream>
#include<bits/stdc++.h>

int n, x;
std::vector<int> v;
std::vector<int> coins_x_dash_memo;
#define NotpossibleCoins  1000003
    
int compute(int x_dash){
    if(x_dash < 0) return NotpossibleCoins;
    if(coins_x_dash_memo[x_dash] == -1) return NotpossibleCoins; // Invalid path
    if(coins_x_dash_memo[x_dash] != NotpossibleCoins) return coins_x_dash_memo[x_dash];
    for(int coin_ind =0; coin_ind<n; coin_ind++){
        coins_x_dash_memo[x_dash] = std::min(coins_x_dash_memo[x_dash] , compute(x_dash - v[coin_ind]) + 1);
    }
    if(coins_x_dash_memo[x_dash] == NotpossibleCoins){ // no coins combo found
        coins_x_dash_memo[x_dash] = -1;
        return NotpossibleCoins;
    } else {
        return coins_x_dash_memo[x_dash];
    }
}

int main(){
    std::cin>>n>>x;
    v.resize(n);
    for(int i =0;i<n;i++){
        std::cin>>v[i];
    }
    int xx = x+3;
    coins_x_dash_memo.resize(xx);
    coins_x_dash_memo[0] = 1;
    for(int i=1; i<xx;i++){
        coins_x_dash_memo[i] = NotpossibleCoins;
    }
    int ret = compute(x);
    if(ret == NotpossibleCoins){
        std::cout<<-1<<std::endl;
    } else {
        std::cout<<ret - 1<<std::endl;
    }


}