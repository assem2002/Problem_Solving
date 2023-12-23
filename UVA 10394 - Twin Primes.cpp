//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
#include<numeric>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
#include <bitset>
//#include<iomanip>
#include <algorithm>
#include<queue>
//#include<deque>
//#include<numeric>
#include<set>
#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<cstring>
#include<string>
#include <unordered_map>
#include<memory>
#include <iostream>
#include <thread>
#include<limits>
int arrPointer =0;
std::vector<bool> arr(18409202,1);
std::pair<int,int> arr2[100009];
int lastFoundPrime =1;

bool flag =0;
void seive(){
    for(int i =2 ;i<=18409201;i+=1+flag){
        if (arr[i]){
            if (i-lastFoundPrime ==2) arr2[arrPointer++] = std::make_pair(lastFoundPrime,i);
            lastFoundPrime =i;
            for(int j =i+i; j<18409201 ;j+=i)arr[j] =0;
        }
        if(i==3) flag=1;
    }

}

int main(){
    seive();
    int n;
    while(std::cin>>n){
        std::pair<int,int> temp = arr2[n-1];
        std::cout<<'('<<temp.first<<", "<<temp.second<<')'<<'\n';
    }


}













