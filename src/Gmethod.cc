#include "Gmethod.hpp"
double methods::hextodec(string s){
    double r=0;
    const char *SArray=s.c_str();
    for (int i = s.length()-1; i >=0; i--) {
        //find value of hex
        int di=0;
        for(di=0/*???*/;di < 16; di++){
            if(SArray[s.length()-i-1]==HEXTable.at(di)){
                break;
            }
        }
        //converting from hex to decimal value
        r = r+ pow(16,i)*double(di);
    }
    return r;
}
 
methods::methods(){}
string methods::dectohex(double f){ 
    string s        = "";
    int d           = int(f);
    while           (d!=0)
    {
        int t       = d%16;
        d           = (d-t)/16;     //currently d is equal to the quotient of d/16
        s.insert(0,1,HEXTable.at(t));
    }
    return          s;
}
string methods::dectohex(int i){ 
    string s        = "";
    while           (i!=0)
    {
        int t       = i%16;
        i           = (i-t)/16;     //currently d is equal to the quotient of d/16
        s           .insert(0,1,HEXTable.at(t));
    }
    while(s.length()<2){
        s.insert(0,"0");
    }
    return          s;
}
void methods::def(){ enc ="qiw\"oeprtyuahsjdkflgZVBXNCMQEWRYTUIPOAFSGDHJLKzmxncbv1234567890 ./"; }
string methods::readFFile(){
    string s = "";
    const char *e=enc.c_str();
    bool d = true;
    while(d){
        string t;
        methodf>>t;
        int i =hextodec(t);
        //std::cout<<s<<endl<<i<<"\nread:"<<t<<endl;
        /*std::cout<<
            "\ninput:"<<
            s<<
            endl;*/
        if(i==255)break;
        else if(i>=enc.length())break;
        //std::cout<<"\nindex : "<<hextodec(s)<<"\ncharacter : "<<e[i]<<endl;
        s.append(1,e[i]);
    }
    sResult = s;
    return s;
}
void methods::load(string s){ methodf.open(s); }
void methods::genString(int iter, int seed){
    def();
    srand(seed);
    char*t=new char[enc.length()+1];
    //got to lazy to read docs 
    for (int i = 0; i < enc.length(); i++) {
        t[i]=enc.at(i);
    }
    for (int i = 0; i < iter; i++) {
        int t1 = rand()%enc.length(),t2=rand()%enc.length();
        char td = t[t1];
        t[t1]=t[t2];
        t[t2]=td;
    }
    
    enc = t;
    
}
string methods::strToHex(string str){
    string s="";
    for(int di = 0; di<str.length();di++)
    for(int i = 0; i < enc.length();i++){
        if(str.at(di)==enc.at(i)){
            s.append(dectohex(i));
            s.append(" ");
        }
    }
    s.append("ff");
    return s;
}
int bits::flipb(int *i, int p){ if(i==nullptr)return 1;*i ^=1<<p; return 0;}
int bits::getb(int i, int p){return (i>>p)&1;}
int bits::setb(int *i, bool bit, int p){
    if(i==nullptr)return 1;
    if(bit) *i |= (1<<p); 
    else if(*i>>p==0) return 0;
    else *i ^= (1<<p);
    return 0;
}
