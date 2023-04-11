#include "Gmethod.hpp"
int main(void){
    methods m;
    m.example();
    m.load("./file.txt");
    {
    string a = m.readFFile(),b;
    cout<<a<<endl;
    b=m.readFFile();
    cout<<b<<endl;
    m.genString(stoi(a), stoi(b));
    }
    cout<<m.dectohex(12)<<endl;
    string t;
    while(t!="EOF"){
        t=m.readFFile();
        cout<<t<<endl;
    }
    return 0;
}
