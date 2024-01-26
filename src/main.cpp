#include "binManip.h"
#include <iostream>
int countBits(){
    unsigned int i = ~0;
    int x = 0;
    while(i !=0)
    {
        i>>=1;
        x++;
    }
    return x;
}
int main()
{
    std::cout<<binManip::reverse(1);
    return 0;
}
