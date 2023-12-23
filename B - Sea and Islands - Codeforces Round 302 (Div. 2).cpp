//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
#include <iostream>
#include<numeric>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
//#include <bitset>
//#include<iomanip>
#include <algorithm>
//#include<queue>
//#include<deque>
//#include<numeric>
#include<set>
//#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<string>


int main(){
    int n,k;
    std::cin>>n>>k;
    char data [n][n];
    //filling the grid
    for (int i = 0; i<n;i++)
        for (int j =0 ;j <n;j++)
            data[i][j]= 'S';

    //looping
    for (int i = 0; i<n;i++){
        int start=0 ;
        if (i%2 == 1) start=1;

        for (int j =start ;j <n;j+=2){

            if (k==0){
                std::cout<<"YES\n";
                for (int k = 0; k<n;k++){
                    for (int m =0 ;m <n;m++){
                        std::cout<<data[k][m];
                    }
                    std::cout<<"\n";
                }
                return 0;
            }
            data[i][j]= 'L';
            k--;

        }
    }
    if (k==0 ){
        std::cout<<"YES\n";
        for (int k = 0; k<n;k++){
            for (int m =0 ;m <n;m++){
                std::cout<<data[k][m];
            }
            std::cout<<"\n";
        }
        return 0;

    }
    std::cout<<"NO";
    return 0;



}
