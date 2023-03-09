#include "Gmethod.hpp"
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    methods m;
    m.example();
    int a=rand(),b=rand(),c=rand()%25672;
    cout<<m.strToHex(to_string((a/c)%1))<<endl<<m.strToHex(to_string(b/c))<<endl;
    m.genString(a,b);
    cout<<m.strToHex("earth.png")<<endl;
    return 0;
}