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
    unsigned long long n,a,b;
    std::cin>>n>>a>>b;
    if(a>=b){

        for (int i = 0 ; i<n ; i++){
            int temp;
            std::cin>>temp;
            std::cout<<0<<" ";
        }
    }
    else{
        for(int i = 0 ; i<n ; i++){
            unsigned long long temp;
            std::cin>>temp;
            unsigned long long c = (temp*a)%b;
            std::cout<<std::setprecision(19)<<std::floor(c/a)<<" ";

        }
    }
}
