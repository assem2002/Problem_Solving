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
    int n;
    int zeroes=0;
    std::cin>>n;
    std::string x = "1";
    while(n--){
        std::string temp;
        std::cin>>temp;
        if (temp == "0"){
            std::cout<<"0";
            return 0;
        } 
        int zerolocal= std::count(temp.begin(),temp.end(),'0');
        int ones = std::count(temp.begin(),temp.end(),'1');
        if (ones == 1 && (zerolocal == (int)temp.size()-1)) zeroes+=zerolocal;
        else x=temp;
    }

    while(zeroes--) x+='0';
    std::cout<<(x);
}



