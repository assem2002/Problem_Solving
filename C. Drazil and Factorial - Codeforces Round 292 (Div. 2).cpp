//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
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
#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<cstring>
#include<string>
#include <unordered_map>
#include<memory>
#include <iostream>
#include <thread>


int main(){
    std::string arr[10] {{""},{""},{"2"},{"3"},{"223"},{"5"},{"35"},{"7"},{"2227"},{"3327"}};
    int n;
    std::string mainNumber,res;
    std::cin>>n>>mainNumber;
    for (int i=0 ; i<n;i++)
        res+=arr[(int)mainNumber[i]-48];
    std::sort(res.begin(),res.end(),std::greater<char>());
    std::cout<<res;
}













