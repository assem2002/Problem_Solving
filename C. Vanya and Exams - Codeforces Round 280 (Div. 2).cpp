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


int main(){
    long long n,r,avg;
    std::cin>>n>>r>>avg;
    long long win = n*avg;
    long long needed;
    long long sumPoints=0;
    std::pair<int,int> arr[n];
    for(int i = 0 ; i <n;i++){
        int points,cost;
        std::cin>>points>>cost;
        sumPoints+=points;
        arr[i] = std::make_pair(cost,r-points);
    }
    needed =  win - sumPoints;
    long long res = 0;
    std::sort(arr,arr+n);
    for (int i = 0 ; i <n;i++){
        if (needed <=0) break;

        if (arr[i].second <=needed){
            res+=((long long)arr[i].first*(long long)arr[i].second);
            needed-=arr[i].second;
        }
        else{
            res+=(long long)arr[i].first*(long long)needed;
            break;
        }

    }
    std::cout<<res;
}














