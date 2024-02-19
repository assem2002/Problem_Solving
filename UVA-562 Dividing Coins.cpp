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
vector<int> coins;
int total;
int s;
int mini =20000000;
bool arr[102][50005];
int takeOrLeave(int idx ,int have){
    int res =(total-have)-have;
    mini = min(mini, abs(res));
    if(idx==s) return 0;
    bool &ret =arr[idx][have] ;
    if(ret) return 0;
    ret =true;
    if( (res < 0)) return 0;

    takeOrLeave(idx+1,have+coins[idx]);
    takeOrLeave(idx+1,have);
    return 0;
}

int main(){
    int n ;
    cin>>n;
    while(n--){
        for(int i =0;i<101;++i)
            for(int j=0 ;j<50005;++j)
                arr[i][j] =false;
        cin>>s;
        total=0;
        mini =2000000000;
        coins.clear();
        for(int i=0;i<s;++i){
            int temp;
            cin>>temp;
            total+=temp;
            coins.push_back(temp);
        }
        sort(coins.begin(),coins.end());
//        total-=coins[0];
        takeOrLeave(0,0);
        cout<<mini<<'\n';

    }
    return 0;

}




















