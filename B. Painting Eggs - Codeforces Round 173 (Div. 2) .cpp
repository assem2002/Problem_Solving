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
//#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<cstring>
#include<string>
#include <unordered_map>
#include<memory>
int main(){
    int n;
    std::cin>>n;
    std::string arr;
    int cntA = 0 , cntB=0;
    for (int i = 0 ; i<n ; i++){
        int temp1,temp2;
        std::cin>>temp1>>temp2;
        if (std::abs((cntA+temp1) - cntB )<=500){
            std::putchar('A');
            cntA+=temp1;
        }
        else{
            std::putchar('G');
            cntB+=temp2;
        }

    }
    return 0;


}








