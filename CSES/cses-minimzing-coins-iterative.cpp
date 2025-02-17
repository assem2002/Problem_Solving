#include<iostream>
#include<bits/stdc++.h>

#define max_x 1000001
int main(){
    int n,x;
    std::cin>>n>>x;
    std::vector<int> coins_values;
    coins_values.resize(n);
    std::vector<int> at_x_dash_best_combo;
    at_x_dash_best_combo.resize(x+1,max_x);
    at_x_dash_best_combo[0] = 0;
    for(int i=0;i<n;i++){
        std::cin>>coins_values[i];
    }
    for(int x_dash = 1; x_dash <= x;  x_dash++){
        for(int coin = 0; coin < n ; coin++){
            if(x_dash < coins_values[coin]) continue;
            at_x_dash_best_combo[x_dash] = std::min(at_x_dash_best_combo[x_dash], at_x_dash_best_combo[x_dash-coins_values[coin]]); 
        }
        if(at_x_dash_best_combo[x_dash] != max_x){
            at_x_dash_best_combo[x_dash]++;
        }
    }
    if(at_x_dash_best_combo[x] == max_x){
        std::cout<<-1;
    }else {
        std::cout<<at_x_dash_best_combo[x];
    }


    return 0;
}