
#pragma once
#include <cstring>
#include <functional>
#include <future>
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;

const string HEXTable ="0123456789abcdef";
class methods{
    public:
    void def ();
    ifstream methodf;
    string result;
    string strToHex(string str);
    double hextodec(string s); 
    string dectohex(double s);
    string dectohex(int s);
    string readFFile();
    string sResult, enc;
    void genString(int iter, int seed);
    void swap();
    void load(string s);
    methods();
    private:
};
namespace bits{
    int flipb(int* i, int p);
    int setb(int* i, bool bit, int p);
    int getb(int i, int p);
}
