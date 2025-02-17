#include<iostream>
#include<bits/stdc++.h>



int main(){
    int a,b;
    std::cin>>a>>b;
    int mm = std:: max(a,b);
    std::vector<std::vector<int>> v(mm+1, std::vector<int>(mm+1, 100000));
    for(int i =1;i<=mm;i++){
        v[i][i] = 0;
    }
    for(int i =1;i<=mm;i++){
        for(int j =i+1;j<=mm;j++){
            for(int cutt = 1 ;cutt<i ; cutt++){
                v[i][j] = std::min(v[i][j], (v[i-cutt][j] + v[cutt][j]));
            }
            for(int cutt =1 ; cutt<j;cutt++){
                v[i][j] = std::min(v[i][j], (v[i][j-cutt] + v[i][cutt] ));
            }
            v[i][j]++;
            v[j][i] = v[i][j];
        }
    }
    // for(int i = 1; i<=mm;i++){
    //     for(int j = 1; j<=mm;j++){

        
    //         std::cout<<v[i][j]<<" ";
    //     }
    //     std::cout<<std::endl;
    // }
    std::cout<<v[a][b]<<std::endl;

    return 0;
}