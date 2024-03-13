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
// I HAVE FUCKING OVER DO THE THINGS HERE.(AND DIDN'T THINK IT THOROGH)
//It could be solved using horner method.

const int g = 34943;

bool inline get_bit(char current_number,int bit) {
    return ((int)current_number & (1<<bit));
}

int succ_pow(int pow){
    long long res=2;
    long long spare=1;

    while(true){
        if(pow==0) {
            res=1;
            break;
        }

        if(pow%2){
            spare*=res;
            spare%=g;
            pow--;
        }
        else{
            res = res*res;
            res%=g;
            pow/=2;
        }
    }
    return ((res*spare)%g);


}


int get_bit_value(bool bit,int &max_pow){
    int res=0;

    if (bit) res = succ_pow(max_pow);
    max_pow--;
    return res;


}


void solve(string &s,int siz){
    int max_pow = siz*8;
    max_pow+=15;
    int string_res=0;
    for(int i=0;i<siz;++i){
        char currentChar = s[i];
        for(int bit=7;bit>=0;--bit){
           string_res+=get_bit_value(get_bit(currentChar,bit),max_pow);
           string_res%= g;
        }
    }
    int remaining = g-string_res;
    remaining%=g;
    std::stringstream ss;
    ss<< std::hex << remaining;
    std::string res ( ss.str() );

    string ret ="0000";
    int hexaSize=res.size()-1;
    int p=3;
    for(int i=hexaSize ;i>=0;--i){
        if (res[i]>64) res[i] -=32;
        ret[p--] = res[i];
    }
    for(int i=0;i<2;++i) cout<<ret[i];
    cout<<" ";
    for(int i=2;i<4;++i) cout<<ret[i];
    cout<<"\n";
    return;


}


int main (){
    string s;
    while(true){
        getline(cin,s);
        int siz = s.size();
        if(s == "#" && siz==1) break;
        solve(s,siz);
    }

}

