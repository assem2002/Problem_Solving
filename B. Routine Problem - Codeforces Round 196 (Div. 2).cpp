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
int gcd(int x,int y){
    if (y==0)
        return x;
    return gcd(y,x%y);
}

stdpairint,int slay(int x, int y){
    int gcdres =gcd(x,y);
    return stdmake_pair(xgcdres,ygcdres);
}

int main(){
    double a,b,c,d;
    stdcinabcd;
    stdtie(a,b) = slay(a,b);
    a=100;
    b=100;
    stdtie(c,d) = slay(c,d);
    int resa,resb;
    if (adc b){
        stdtie(resa,resb) = slay(((cb)-(ad)),(cb));
        stdcoutresaresb;
        return 0;
    }
    stdtie(resa,resb) = slay(((ad)-(cb)),(da));
    stdcoutresaresb;
    return 0;


}

