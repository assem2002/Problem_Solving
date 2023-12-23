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
////#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include<memory>
////#include <iostream>
////#include <thread>
////#include<limits>





//int arr[170]{0};
//int main(){
//    std::string s,t;
//    std::cin>>s>>t;
//    for(char l:t) arr[l]++;
//    int yay=0,whooh=0;
//    std::string rem;
//    for(char l:s){
//        if (arr[l]){
//            ++yay;
//            --arr[l];
//        }
//        else rem+=l;
//
//    }
//    for(char l:rem){
//        if(arr[(int)l-32]){
//            ++whooh;
//            --arr[(int)l-32];
//        }
//        else if(arr[(int)l+32]){
//            ++whooh;
//            --arr[(int)l+32];
//        }
//    }
//    std::cout<<yay<<" "<<whooh;
//
//
//}



long long n,m,k;

int main(){
    std::cin>>n>>m>>k;
    std::vector<long long> arr;
    std::vector<long long> arrhowlong(n+1,0);
    std::vector<std::pair<long long,long>> operations(m+1,std::make_pair(0,0));
    std::vector<long long>d(m+1,0);
    std::vector<long long> operationshowlong(m+1,0);
    int temp;
    for(int i=0;i<n;++i){std::cin>>temp ;arr.push_back(temp);}
    for(int i=0;i<m;++i)std::cin>>operations[i].first>>operations[i].second>>d[i];
    for(int i=0;i<k;++i){
        int f,s;
        std::cin>>f>>s;
        --f;
        ++operationshowlong[f];
        --operationshowlong[s];
    }
    long long howmany=0;
    for(int i=0;i<m;++i){
        howmany+=operationshowlong[i];
        if(!howmany) continue;
        arrhowlong[operations[i].first-1]+=d[i]*howmany;
        arrhowlong[operations[i].second]-=d[i]*howmany;
    }
    long long adding=0;
    for(int i=0;i<n;++i){
        adding+=arrhowlong[i];
        if(!adding)continue;
        arr[i]+=adding;
    }
    for(long long a:arr) std::cout<<a<<" ";

}












