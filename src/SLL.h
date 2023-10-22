#pragma once
typedef struct SLL{
    struct SLL* n = nullptr;
    int x;
}SLL;

class HSLL{
    public:
        void insert(int val);
        void insert(int val, int index);
        void pop(int index);
        int searchv(int index);
        SLL* search(int index);
        int getRVal();
        int len();
    private:
        int length = 0;
        int* retVal = nullptr;
        SLL* h =nullptr;
        void res();
};

