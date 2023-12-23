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
    int n;
    std::cin>>n;
    int res[n];
    int number=0;
    if (n%2 == 0){
        std::cout<<-1;
        return 0 ;
    }
    for(int i = 0 ; i<n;i+=2) res[i] = number++;
    for(int i = 1 ; i<n;i+=2) res[i] = number++;
    for(int i = 0 ; i<n ; i++) std::cout<<res[i]<<" ";
    std::cout<<std::endl;
    for(int i = 0 ; i<n ; i++) std::cout<<res[i]<<" ";
    std::cout<<std::endl;
    for(int i = 0 ; i<n ; i++) std::cout<<i<<" ";
    return 0;


}














