#include<iostream>
#include<bits/stdc++.h>


#define max_possible 100001
int main(){
    int n;
    std::cin>>n;
    std::vector<int> v(n,0);
    for(int i = 0 ; i< n; i ++){
        std::cin>>v[i];
    }
    std::vector<int> exist(max_possible, 0);
    exist[0] = 101;
    int sol;
    int k =0;
    for(int i=n-1;i>=0;i--){
        for(int j =0 ;j< max_possible ;j++){
            /* 
            I used this trick to avoid updating the current coin choice based on update from the same current coin
            ,The issue comes from update a bigger number to be valid solution then with the same coin we act upon it and consider it a valid solution
            from an old coin.
            ---> This could be easily handled by updating the states from bigger to lower, as the issue comes from update a position that you'll visit later.
            */
            if(exist[j] > (i+1)){ 
                sol = j+v[i];
                if(!exist[sol]) k++;
                if(!exist[sol]){ // This do preserve the fact that this number exist due to old state, to avoid not using we don't visit states with same coin index on it :).
                exist[sol] = i+1;    
                }
            }
        }
        // for(int i = 0;i<21;i++){
        //     std::cout<<exist[i]<<" ";
        // }
        // std::cout<<"\n------------------------------\n";
    }
    std::cout<<k<<std::endl;
    int printed= 0;
    for(int i = 1 ; i< max_possible;i++){
        if(exist[i]){
            printed++;
            std::cout<<i;
            if(printed<k) std::cout<<" ";
        }
    }
    std::cout<<std::endl;


    return 0;
}