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
    
    return          s;
}
void methods::example(){ enc ="qiwoeprtyuahsjdkflgZVBXNCMQEWRYTUIPOAFSGDHJLKzmxncbv1234567890 ./"; }
string methods::readFFile(){
    string s = "";
    const char *e=enc.c_str();
    bool d = true;
    while(d){
        string t;
        methodf>>t;
        int i =hextodec(t);
//        std::cout<<s<<endl<<i<<"\nread:"<<t<<endl;
        /*std::cout<<
            "\ninput:"<<
            s<<
            endl;*/
        if(i==255)break;
        else if(i>=enc.length())break;
        //std::cout<<"\nindex : "<<hextodec(s)<<"\ncharacter : "<<e[i]<<endl;
        s.append(1,e[i]);
        cout<<"looped";
    }
    sResult = s;
    return s;
}
methods::methods(string s){ methodf.open(s); }
void methods::genString(int iter, int seed){
    example();
    cout<<enc<<endl;
    srand(seed);
    char*t=new char[enc.length()+1];
    //got to lazy to read docs 
    for (int i = 0; i < enc.length(); i++) {
        t[i]=enc.at(i);
    }
    cout<<t<<endl;
    for (int i = 0; i < iter; i++) {
        int t1 = rand()%enc.length(),t2=rand()%enc.length();
        char td = t[t1];
        t[t1]=t[t2];
        t[t2]=td;
    }
    cout<<t;
    
    enc = t;
    
}
