//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
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

const int maxx = 10002;
int n,k;
int dataa[maxx];
int best(int start,int finish,int currentK){
    if(start>=finish || currentK > k)
        return 0;
    int ret = 100000;
    if (dataa[start] == dataa[finish])
        ret = best(start+1,finish-1,currentK);
    else
         ret = min ((best(start+1,finish,currentK+1)+1),best(start,finish-1,currentK+1)+1);
    return ret;


}


int main(){
    int t;
    cin>>t;
    for(int test = 0 ;test<t; ++test){
        cin>>n>>k;
        for(int i =0;i<n;++i)
            cin>>dataa[i];
        int retu = best(0,n-1,0);
        cout<<"Case "<<test+1<<": ";
        if(retu>k)
            cout<<"Too difficult";
        else if(!retu)
            cout<<"Too easy";
        else
            cout<<retu;
        cout<<"\n";

    }
    return 0;
}
