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
#include <iostream>
#include <thread>
#include <atomic>
#include<variant>
#include<any>

int arr[10010]{0};
int main(){
    int l,h,r;
    int maximumR=0;
    bool flag = 0;
    int theL;
    //notice that every l here would have 1 added to it as the points in the array means square
    while (std::cin>>l){
        std::cin>>h>>r;
        if (!flag){
            theL = l+1;
            flag = 1;
        }
        for (int i = l+1 ; i<=r;i++){
            if (arr[i]<h) arr[i] = h;
        }
        if (maximumR<r)maximumR =r;
    }
    
    int currentHeight = arr[theL];
    int currentL = theL;
    for(;theL <=maximumR+1 ; theL++){
        if (arr[theL] != currentHeight){
            std::cout<<currentL-1<<" "<<currentHeight<<" ";
            currentL = theL;
            currentHeight =arr[theL];
        }
    }
    std::cout<<currentL-1<<" "<<currentHeight<<std::endl;
}













