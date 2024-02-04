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





int main(){
    int n,d;
    vector<int>v;
    cin>>n>>d;
    for(int i =0;i<n;++i){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    long long res=0;
    for(int i=0 ;i<n;++i){
        auto leap =upper_bound(v.begin(),v.end(),v[i]+d);
        if(*(v.end()-1) <= v[i]+d) leap = v.end()-1;
        else if (*(leap-1)<=v[i]+d) leap--;
        else continue;
        if(((leap-(v.begin()+i))+1)<3)continue;
        cout<<((leap-(v.begin()+i))+1)<<'\n';
        int n =((leap-(v.begin()+i))-1);
        res+=(n*(n+1))/2;

    }
    cout<<res;



}




















