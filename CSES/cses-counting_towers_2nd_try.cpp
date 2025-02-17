#include <iostream>
#include <bits/stdc++.h>
// I think there's much better approach than this, but it's not that bad;
#define mod 1000000007
#define max 1000002
// The links represent what shape could be added in some level and its validity to be linked with the lower level.
bool links[6][6]{
    {true, true, true, false, false, false},
    {true, true, true, false, false, false},
    {false, true, true, true, true, true},
    {false, true, true, true, true, true},
    {false, true, true, true, true, true},
    {false, true, true, true, true, true},
};
std::vector<std::vector<int>> level_to_6_shapes(1000002, std::vector<int>(6,0));
long long temp;
void sol(){
    level_to_6_shapes[1][1] = 1;
    for(int i =2;i<max; i++){
        for(int shape = 0; shape<6;shape++){
            for(int lower_shape = 0; lower_shape<6; lower_shape++){
                if(links[shape][lower_shape]){
                    temp = level_to_6_shapes[i][shape];
                    temp += (long long)(level_to_6_shapes[i-1][lower_shape]);
                    temp %=mod;
                    level_to_6_shapes[i][shape] = temp;
                }
            }
        }
    }
}
int main(){
    sol();
    int t,n;
    std::cin>>t;
    while(t--){
        std::cin>>n;
        long long sol = (long long)level_to_6_shapes[n+1][1];
        sol %= mod;
        sol +=  (long long)level_to_6_shapes[n+1][2];
        sol %= mod;
        std::cout<<sol<<std::endl;
    }
    return 0;
}