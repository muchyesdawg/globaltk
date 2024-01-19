#include <stdlib.h>
#include <cstddef>
#include <iostream>
namespace MDataTypes{
    
    inline namespace binTree{
        class node{
            public:
                void* data;
                node *l;
                node *r;
                template <typename T>
                void destroy();
                node();
                ~node()noexcept(false);
        };
        extern node *tnode;
        extern unsigned int tint;
    }
    class binHead{
        public:
            binTree::node *h;
            void add(unsigned int index, binTree::node* x);
            binHead();
            binHead(void* i);
            binTree::node *get(unsigned int index);
            ~binHead();
    };
    
}
