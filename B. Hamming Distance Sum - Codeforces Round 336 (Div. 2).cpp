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

int subpos[1000]{0};
int subneg[1000]{0};
int add[2002]{0};
int main() {
    int n;
    std::cin>>n;
    while(n--){
        int r,c;
        std::cin>>r>>c;
        add[r+c]++;
        int temp =r-c;
        (temp>=0)? subpos[temp]++:subneg[-temp]++;
    }
    long long cnt =0;
    for(int i = 0 ; i <1000 ; i++) cnt+=((subneg[i]*(subneg[i]-1))/2);
    for(int i = 0 ; i <1000 ; i++) cnt+=((subpos[i]*(subpos[i]-1))/2);
    for(int i = 0 ; i <2002 ; i++) cnt+=((add[i]*(add[i]-1))/2);
    std::cout<<cnt;

}

