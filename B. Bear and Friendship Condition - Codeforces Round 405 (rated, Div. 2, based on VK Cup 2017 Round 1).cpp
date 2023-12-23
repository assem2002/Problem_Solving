//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
#include <iostream>
#include<numeric>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
//#include <bitset>
//#include<iomanip>
#include <algorithm>
//#include<queue>
//#include<deque>
//#include<numeric>
#include<set>
//#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<string>
#include<bitset>


int main(){
    int cnt =  0;
    int n,l,r,x;
    std::cin>>n>>l>>r>>x;
    int dataa[n];
    for (int m = 0 ; m<n ; m++) std::cin>>dataa[m];
    std::sort(dataa,dataa+n,std::greater<int>());
    for (int i= 0 ;i<std::pow(2,n) ; i++){
        std::string num = std::bitset<15>(i).to_string();
        int sum =  0;
        int last = 0;
        int first=  0;
        int s = 15 -n;
        for(int j= (15-n) ;j<15;j++ ){
            if(num[j] =='1'&& sum ==0) {
                sum+=dataa[j-s];
                first = dataa[j-s];
                last= dataa[j-s];
            }
            else if (num[j]=='1'){
                sum+=dataa[j-s];
                last= dataa[j-s];
            }
        }
        if (l<=sum && sum<=r &&std::abs(first-last)>=x)
            cnt++;

    }
    std::cout<<cnt;
}
