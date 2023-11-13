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
#include <bitset>
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



int main() {
    int n;
    std::cin>>n;
    int temp = n;
    int leap=-1;
    while(temp!=0){
        leap++;
        temp/=10;
    }
    int res =1;
    for (int i = 1 ; i<=leap; i++) res+=std::pow(2,i);
    int start = 4.444444444*std::pow(10,leap);
    std::string op = std::to_string(n-start);
    int ind = 0;
    for (int i = (op.size()-1) ; i>=0; i--)
        if (op[ind++]=='3') res+=std::pow(2,i);
    std::cout<<res;


}




