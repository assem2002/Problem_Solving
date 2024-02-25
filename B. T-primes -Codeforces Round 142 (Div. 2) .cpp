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
    cin>>n;
    for(int i =0;i<n;++i){
        long long temp;
        cin>>temp;
        if(temp ==4)cout<<"YES\n";
        else if ((temp%2)==0) cout<<"NO\n";
        else{
            long long res =sqrt(temp);
            if((res* res) != temp || temp == 1)cout<<"NO\n";
            else{
                bool a=false;
                if(!(res%2)){
                    cout<<"NO\n";
                    continue;
                }
                for(int i=3 ;i*i<=res;i+=2){
                    if((temp%i)==0){
                        a=true;
                        cout<<"NO\n";
                        break;
                    }
                }
                if(!a) cout<<"YES\n";
            }
        }

    }

}

