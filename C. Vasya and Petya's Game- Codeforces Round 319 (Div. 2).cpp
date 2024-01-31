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
#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include <thread>
////#include<limits>



std::vector<int> arr(1002,1);
int main(){
    for(int j =2 ; j*j<=1001;++j){
        if(!arr[j]) continue;
        for(int i =j*j ; i<=1001 ; i+=j){
            arr[i] =0;
        }
    }
    arr[0]=0;
    arr[1]=0;
    std::vector<int> primes;
    for(int i =0 ; i<1001;++i){
        if(arr[i])primes.push_back(i);
    }
    int n;
    std::cin>>n;
    if(n==1) {std::cout<<0;return 0;}
    std::unordered_set<int> res;
    for(int i = 2 ;i<=n ; ++i){
        std::vector<int> single;
        int lop=0;
        int a=i;
        while(a!=1){
            if(a%primes[lop] == 0){
                single.push_back(primes[lop]);
                a/=primes[lop];
            }
            else lop++;
        }
        int before=single[0],counter=1;
        for(int k=1 ;k<single.size();++k){
            if(single[k] == before)counter++;
            else{
                res.insert(std::pow(before,counter));
                counter=1;
                before =single[k];
            }
        }
        res.insert(std::pow(before,counter));
    }
    std::cout<<res.size()<<'\n';
    for(int a: res){
        std::cout<<a<<' ';
    }

    return 0;


}














