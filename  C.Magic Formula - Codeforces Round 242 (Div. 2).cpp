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
////#include<limits>
//
using namespace std;

int arr[1000002]{0};

int repeatitiveXOR(int x ,int portionCnt){
    if(portionCnt%2)
        return x;
    return 0;
}


int getall(int n){
    int x=0;
    int res=0;
    for(int i=1;i<=n;++i){
        arr[i] = x;
        int portionCnt= (n-i+1)/i;
        res^=repeatitiveXOR(x,portionCnt);
        int portionremainCnt=(n-i+1)%i;
        res^=arr[portionremainCnt];
        res^=repeatitiveXOR(i,n-i);
        x^=i;
    }
    return res;



}
long long r,m,l
pair<int,int> binarySearchOnTriples(int s,int comp,int other1,int other2){
    long long mid,midp,start=1,last=10e9+2;
    while(start<last){
        mid = (start+last)/2;
        midp =mid+1;
        
        l = (midp*midp - (mid*mid));
        m = s*mid*midp;
        r = (midp*midp + (mid*mid));
        if(comp==s)return {other1 ,other2};
        else if (comp<s) start =mid;
        else last = mid;
    }
}


int main(){
    int n;
    cin>>n;
    long long res =getall(n);
    for(int i =1;i<=n;++i){
        long long temp;
        cin>>temp;
        res^=temp;
    }
    cout<<res;
    cout<<(65535^0^1^0^0^0);
    for(int n =1;n<=20;++n){
        func(n);
        cout<<"\n----\n";
    }
    func(20);


}



















