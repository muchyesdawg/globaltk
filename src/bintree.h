#pragma once
#include <stdlib.h>
namespace structs{
    class bintree{
        public:
            class node{
                private:
                    void* data;
                    bintree* parent;
                public:
                    node* l, *r;
                    node(void* i);
                    node(void* i, bintree* h);
                    node();
                    template <typename T> 
                        void set(T input, unsigned int index);
                    template <typename T> 
                        T get(unsigned int index);
                    template <typename T> 
                        void add(T input, unsigned int index);
                    template <typename T>
                        void destroy();
            };
            node* h;
            node* getN(unsigned int index);
    };
    namespace temp{
        extern bintree::node* t;
    }
};
