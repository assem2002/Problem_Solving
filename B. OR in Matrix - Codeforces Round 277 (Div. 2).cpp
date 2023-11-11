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
#include<queue>
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
#include <unordered_map>


int main(){
    int m,n;
    std::cin>>m>>n;
    bool arr[m][n];
    bool rows[m];
    bool columns[n];
    for(int i = 0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++ ){

            bool temp;
            std::cin>>temp;
            arr[i][j] =temp;
            if (temp ==1){
                columns[j] =temp;
                rows[i] = temp;
            }
        }
    }
    for(int i = 0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++ ){
            bool temp = arr[i][j];
            if (temp == 1) continue;
            columns[j] =temp;
            rows[i] = temp;
        }
    }


    int arrres[m][n];
    for(int i = 0 ; i<m ; i++)
        for (int j=0 ; j<n ; j++ )
            arrres[i][j] = 1;

    for(int i = 0 ; i<m ; i++){
        if (rows[i] ==1) continue;
        for (int j=0 ; j<n ; j++ ) arrres[i][j] =0;
    }
    for (int j=0 ; j<n ; j++ ){
        if (columns[j] ==1) continue;
        for(int i = 0 ; i<m ; i++) arrres[i][j] = 0;
    }
    bool rowss[m]{0};
    bool columnss[n]{0};
    for (int i = 0 ;i<m ; i++)
        for(int j = 0 ; j< n ;j++)
            rowss[i]+=arrres[i][j];
    for (int i = 0 ; i<n ; i++)
        for (int j = 0 ; j <m ; j++)
            columnss[i]+=arrres[j][i];



    for(int i = 0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++ ){
            bool temp = (rowss[i] ||columnss[j]);
            if (temp !=arr[i][j]){
                std::cout<<"NO";
                return 0;
            }

        }
    }
    std::cout<<"YES"<<std::endl;
    for(int i = 0 ; i<m ; i++){
        std::cout<<"\n";
        for (int j=0 ; j<n ; j++ )
            std::cout<<arrres[i][j]<<" ";

    }

}



