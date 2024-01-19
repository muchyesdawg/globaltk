#include "bintree.h"
MDataTypes::binTree::node *MDataTypes::binTree::tnode;

template<typename T> void MDataTypes::node::destroy(){
    union goof{
        void *z;
        T y;
    }goof;
    union goof go;
    go.z = data;
    delete go.y;
    data = nullptr;
}
unsigned int MDataTypes::binTree::tint;
void MDataTypes::binHead::add(unsigned int index, binTree::node *x)
{
    MDataTypes::binTree::tnode = h;
    while(index >1){
        MDataTypes::binTree::tnode = (index&1) ==0? MDataTypes::binTree::tnode->l : MDataTypes::binTree::tnode->r;
        index>>=1;
    }
    index == 0 ? MDataTypes::binTree::tnode->l = x:MDataTypes::binTree::tnode->r = x;
    return;
}
MDataTypes::binTree::node *MDataTypes::binHead::get(unsigned int index){
    MDataTypes::binTree::tnode = h;
    while(index !=0){
        MDataTypes::binTree::tnode = (index&1) ==0? MDataTypes::binTree::tnode->l : MDataTypes::binTree::tnode->r;
        index>>=1;
    }
    return MDataTypes::binTree::tnode;
}
MDataTypes::binTree::node::node(){ l = nullptr; r = nullptr; data = nullptr; }
MDataTypes::binTree::node::~node() noexcept(false){ 
    if(data != nullptr)
        throw std::runtime_error("didnt deinitialize data");
    if(l != nullptr)
        delete l;
    if(r != nullptr)
        delete r;
}
MDataTypes::binHead::binHead(){
    h = nullptr;
}
MDataTypes::binHead::binHead(void *i){
    h = new MDataTypes::binTree::node();
    h->data = i;
}
MDataTypes::binHead::~binHead(){
    delete h;
}
