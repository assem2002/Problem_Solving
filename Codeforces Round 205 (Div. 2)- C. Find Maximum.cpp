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
    int n;
    cin>>n;
    vector<int> data(n+1);
    data[0]=0;
    long long totalgood =0;
    for(int i =1;i<=n;++i){
        int temp;
        cin>>temp;
        totalgood+=temp;
        data[i] = temp;
    }
    string seq="1",t;
    cin>>t;
    seq+=t;
    int i=n;
    for(;i>=0 ;--i){
        if(seq[i]=='1') break;
        totalgood-=data[i];
    }
    long long maxi=0;
    for( ;i>=0 ; --i){
      if(seq[i]=='1'){
        maxi=max(maxi,totalgood-data[i]);
      }
      else{
        totalgood-=data[i];

      }
    }
    cout<<maxi;




}



















