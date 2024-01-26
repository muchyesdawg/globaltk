#include "bintree.h"
using namespace structs;
bintree::node* structs::temp::t;
using namespace structs::temp;
using namespace structs;
static unsigned int temp1;
static unsigned int reverse(unsigned int x){
    temp1 = 0;
    for (int i = 0; i < 32; i++) {
        temp1 |= ((x&1)<<((32-1)-i));
        x>>=1;
    }
    return temp1;
}
bintree::node::node(void* i){
    l = nullptr;
    r = nullptr;
    data = i;
    parent = nullptr;
}
bintree::node::node(){
    l = nullptr;
    r = nullptr;
    data = nullptr;
    parent = nullptr;
}
bintree::node::node(void* i, bintree* h){
    l = nullptr;
    r = nullptr;
    data = i;
    parent = h;
    
}
bintree::node* bintree::getN(unsigned int index){
    index = reverse(index);
    t = h;
    while(t != nullptr){
        t = ((index&1)==1?t->r:t->l);
        index = index >> 1;
    }
    return t;
}
template <typename T>
    void bintree::node::add(T input, unsigned int index){
        union z{
            T x;
            void* y;
        }z;
        union z x;
        x.x = input;
        t= new bintree::node(x.y);
        
    }
