#include "iostream"
#include "bintree.h"
union goof{
    int x;
    void* y;
    MDataTypes::binTree::node* z;
};
int main()
{
    std::cout<<"hello\n";
    MDataTypes::binHead *h;
    MDataTypes::binTree::node *x;
    goof g,f;
    g.x = 10;
    x = new MDataTypes::binTree::node();
    h = new MDataTypes::binHead();
    x->data = g.y;
    h->h=x;
    g.x = 3294;
    g.y = x->data;
    std::cout<<g.x<<std::endl;

    f.z = new MDataTypes::binTree::node();
    g.x=134;
    f.z->data = g.y;//creates a class in f.z
    h->h->data = f.y;
    g.y = h->h->data;
    g.y = g.z->data;
    std::cout<<g.x<<std::endl;
    
    std::cout<<"\n";
    return 0;
}
