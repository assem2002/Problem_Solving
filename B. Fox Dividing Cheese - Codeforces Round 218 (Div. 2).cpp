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


//Solution is much simpler than that BTW.
std::unordered_map<int,int> firstNumberFactor;
std::unordered_map<int,int> secondNumberFactor;
std::vector<int> second;
int totalSize=0;
void getFactors(int theNumber ,std::unordered_map<int,int>* vec){
    int temp = theNumber;
    second.clear();
    for(int i = 2 ; i <=temp ;i++){
        //Condition for handling the big primes as it would go extremely deep till it stops.
        if (i>5&&(((*vec)[2]+(*vec)[3]+(*vec)[5])==0)){
            std::cout<<-1;
            exit(0);
        }
        if (theNumber == 1 ){
            totalSize+=second.size();
            return;
        }
        while(theNumber%i == 0){
            theNumber/=i;
            (*vec)[i]++;
            second.push_back(i);
        }
    }
}
int main(){
    int a,b,exist=0;
    std::cin>>a>>b;
    getFactors(a,&firstNumberFactor);
    getFactors(b,&secondNumberFactor);
    for(int &element:second){
        if(firstNumberFactor[element]){
            secondNumberFactor[element]--;
            firstNumberFactor[element]--;
            exist+=2;
        }
    }
    int toBeDeleted = firstNumberFactor[2]+firstNumberFactor[3]+firstNumberFactor[5]+secondNumberFactor[2]+secondNumberFactor[3]+secondNumberFactor[5];
    (totalSize-exist-toBeDeleted>0)?std::cout<<-1:std::cout<<toBeDeleted;



}













