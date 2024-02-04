//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
//#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
//#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include <thread>
////#include<limits>
//
using namespace std;



//int fact(int n);
//
//int nCr(int n, int r)
//{
//    return fact(n) / (fact(r) * fact(n - r));
//}
//
//// Returns factorial of n
//int fact(int n)
//{
//      if(n==0)
//      return 1;
//    int res = 1;
//    for (int i = 2; i <= n; i++)
//        res = res * i;
//    return res;
//}


int main(){
    int sidest=2;
    vector<int> sides;
    for(int i =0;i<6;++i){
        int temp;
        cin>>temp;
        sides.push_back(temp);
    }
    int line =sides[0];
    long long res=0;
    for(int i =1;i<=sides[1]+sides[2];++i){
        res+=line+(line-1)+sidest;
        line = (line-1)+sidest;
        if(i==sides[1])sidest--;
        if(i==sides[5])sidest--;
    }
    cout<<res;


}



















