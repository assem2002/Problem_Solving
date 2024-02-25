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
////#include<limits>+++

using namespace std;


int main(){
    int n;
    long long a;
    cin>>n>>a;
    long long spareUP =0;
    long long spareDown =0;
    vector<int> data;
    vector<int> possibleSolution(n,1);
    long long aTemp =a-n;
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        data.push_back(temp);
        long long temprem =temp-1;
        if((aTemp-temprem) >=0){
            possibleSolution[i] = temp;
            aTemp-=temprem;
        }
        else if (aTemp){
            possibleSolution[i]+=aTemp;
            aTemp=0;
        }
    }
    for(int i =0;i<n ;++i ){
        spareUP+=data[i] - possibleSolution[i];
        spareDown += possibleSolution[i] -1;
    }
    long long templong=0;
    for(int i=0;i<n;++i){
        int res=0;
        templong = spareUP -(data[i]-possibleSolution[i]);
        long long coverup = templong - (possibleSolution[i] - 1);
        if (coverup<0) res+=abs(coverup);
        templong = spareDown - (possibleSolution[i] -1);
        long long coverdown = templong - (data[i] - possibleSolution[i]);
        if(coverdown<0) res+=abs(coverdown);
        cout<<res<<' ';
    }


}

