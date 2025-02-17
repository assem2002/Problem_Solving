#include<iostream>
#include<bits/stdc++.h>


#define mod 1000000007 
int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int> v(n);
    for(int i = 0; i<n; i++){
        std::cin>>v[i];
    }

    std::vector<std::vector<int>> tabulation(2 ,std::vector<int>(m+1,1));
    tabulation[0][0] = 0;
    tabulation[1][0] = 0;
    bool switcher = true;
    for(int i = n-2; i>=0;i--){
        switcher = !switcher;
        for(int j = 1 ; j<=m;j++){
            int sol=0;
            for (int options = -1; options < 2 ;options++){
                if(v[i+1] != 0) {
                    if(j+options ==v[i+1] ){
                        sol += tabulation[!switcher][v[i+1]];
                        break;
                    } 
                } else {
                    if(j+options <= m){
                        sol+= tabulation[!switcher][j+options];
                        sol %= mod;
                    }
                }
            }
            tabulation[switcher][j] = sol;
        }
        /* Printing */

        // for(int j=1;j<=m ;j++){
        //     std::cout<<tabulation[switcher][j] << " ";
        // }
        // std::cout<<std::endl;
    }
    
    int sol = 0;
    if(v[0] == 0){
        for(int j= 1 ;j <=m ;j++){
            sol+=tabulation[switcher][j];
            sol %= mod;
        }
    } else {
        sol = tabulation[switcher][v[0]];

    }
    std::cout<< sol<<std::endl;

}