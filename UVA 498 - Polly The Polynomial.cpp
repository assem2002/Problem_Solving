//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
//#include<numeric>
#include<vector>
#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include<memory>
////#include <iostream>
////#include <thread>
////#include<limits>






int main(){
    std::string cof,x;
    while(std::getline(std::cin,cof)){
        std::getline(std::cin,x);
        std::vector<long long> v1 ;
        std::vector<long long> v2 ;
        std::istringstream whatever(cof);
        std::istringstream whatever2(x);
        long long temp;
        while(whatever>>temp){
            v1.push_back(temp);
        }
        while(whatever2>>temp){
            v2.push_back(temp);
        }

        for(int j = 0 ; j<(int)v2.size();++j){
            long long wholeResult =0;
            long long theVariable =1;
            for(int i=(int)v1.size()-1  ; i>=0;--i){
                wholeResult+= v1[i]*theVariable;
                theVariable*=v2[j];
            }
            std::cout<<wholeResult;
            if(j != v2.size()-1)std::cout<<' ';
        }
        std::cout<<'\n';


    }
    return 0 ;
}















