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
#include<queue>
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
#include <unordered_map>


int main(){
    int n;
    std::cin>>n;
    int localMaxLen = 0,globalMaxlen=0;
    int maximum;
    int minimum;
    std::cin>>minimum;
    maximum = minimum;
    globalMaxlen++;
    localMaxLen++;
    int lastIndMax=0;
    int lastIndMin = 0;
    int lastDigitMax = 0 ;
    int lastDigitMin =0;
    int swapperdigit = minimum;
    int previousDigit = minimum;
    for (int i = 1 ; i<n ; i++){
        int newNumber;
        std::cin>>newNumber;
        localMaxLen++;
        if (newNumber>maximum){
            minimum = maximum;
            maximum =newNumber;
            localMaxLen =i-lastIndMax+1;
            lastDigitMax=  newNumber;
            lastIndMax = i;

        }
        else if(newNumber<minimum){
            maximum = minimum;
            minimum = newNumber;
            localMaxLen =i-lastIndMin+1;
            lastDigitMin = newNumber;
            lastIndMin = i;
        }
        else if(newNumber != previousDigit){
            if (newNumber == minimum){
                lastIndMin =i;
            }
            else
                lastIndMax = i;

        }
        if (globalMaxlen<localMaxLen) globalMaxlen = localMaxLen;
        previousDigit = newNumber;

    }
    std::cout<<globalMaxlen;
}



