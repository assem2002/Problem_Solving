    stdsetvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   (will neglect the c's stdio.h property of doing inline flushing with every line of code)
    stdios_basesync_with_stdio(false);    (removes the interoperability that happens between C's stdio.h and iostream )
#include iostream
#includenumeric
#includevector
#includecmath
#includestack
#include iomanip
#include vector
#includebitsstdc++.h
#include bitset
#includeiomanip
#include algorithm
#includequeue
#includedeque
#includenumeric
#includeset
#includeunordered_set
#includemap
#includefstream
#includesstream
#include thread
#include chrono
#includestring
#include unordered_map



int main(){
    int n;
    stdcinn;
    stdvectorintfirst;
    stdvectorintsecond;
    int temp;
    long long firstSum =0;
    while(n--){
        stdcintemp;
        if (temp0){
            first.push_back(temp);
            firstSum+=temp;
        }
        else {
            second.push_back(-1temp);
            firstSum+=temp;
        }
    }
    if (firstSum0 ) stdcoutfirst;
    else if(firstSum0) stdcoutsecond;

    else if (first.size()second.size() && firstsecond  ) stdcoutfirst;
    else if (first.size()second.size() && secondfirst)stdcoutsecond;
    else if (!(firstsecond)&&!(firstsecond)) (temp0)stdcoutfirststdcoutsecond;
    else if (firstsecond) stdcoutfirst;
    else stdcoutsecond;
    return 0;

}

