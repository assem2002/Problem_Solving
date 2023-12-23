//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
//#include<numeric>
#include<vector>
#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
////#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include<memory>
////#include <iostream>
////#include <thread>
////#include<limits>





int arr[170]{0};
int main(){
    std::string s,t;
    std::cin>>s>>t;
    for(char l:t) arr[l]++;
    int yay=0,whooh=0;
    std::string rem;
    for(char l:s){
        if (arr[l]){
            ++yay;
            --arr[l];
        }
        else rem+=l;

    }
    for(char l:rem){
        if(arr[(int)l-32]){
            ++whooh;
            --arr[(int)l-32];
        }
        else if(arr[(int)l+32]){
            ++whooh;
            --arr[(int)l+32];
        }
    }
    std::cout<<yay<<" "<<whooh;


}
















