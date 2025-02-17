#include<iostream>
#include<bits/stdc++.h>

int n,x;
std::vector<int> prices;
std::vector<int> number_of_pages_for_book;
std::vector<std::vector<int>> tabulation;




int main(){
    std::cin>>n>>x;
    prices.resize(n);
    number_of_pages_for_book.resize(n);
    tabulation.resize(n+1,std::vector<int>(x+1,0));
    for(int i=0;i< n;i++){
        std::cin>>prices[i];
    }
    for(int i=0;i< n;i++){
        std::cin>>number_of_pages_for_book[i];
    }

    for(int i =1; i<=n ;i++){
        for(int j = 1; j<=x; j++){
            int temp = 0 ;
            int temp2 = 0 ;
            if((j - prices[i-1]) > 0 )
            {
                temp = tabulation[i-1][j - prices[i-1]];
            }

            if(j >= prices[i-1]){
                temp2 = number_of_pages_for_book[i-1] + temp;
            }
                tabulation[i][j] = std::max( temp2, tabulation[i-1][j]);
        }
        // for(int j= 1 ; j<= x ; j++){
        //     std::cout<<tabulation[i][j]<<" ";
        // }
        // std::cout<<std::endl;
    }
    std::cout<<tabulation[n][x]<<std::endl;


    return 0;
}