#include "binManip.h"
static unsigned int temp1;
namespace binManip{
    unsigned int reverse(unsigned int x){
        temp1 = 0;
        for (int i = 0; i < 32; i++) {
            temp1 |= ((x&1)<<((32-1)-i));
            x>>=1;
        }
        return temp1;
    }
}
