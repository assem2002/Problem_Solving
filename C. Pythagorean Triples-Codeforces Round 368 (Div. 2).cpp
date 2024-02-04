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



int main(){
    long long n;
    cin>>n;
    long long res1,res2;
    if(n%2){

        res1= (pow(n,2)/2)-0.5;
        res2 =(pow(n,2)/2)+0.5;
    }
    else{
        res1= pow((n/2),2)-1;
        res2 = pow((n/2),2)+1;

    }
    (res1>0 && res2>0)? cout<<res1<<' '<<res2:cout<<-1;

}



















