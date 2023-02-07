#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Gmethod.hpp"

#include <cstring>
using namespace std;
using namespace sf;
int main( void ){
    /*sf::Image img;
    img.loadFromFile("1.png");
    sf::Color ca = img.getPixel(0,0);
    std::cout<<ca.toInteger();
    if(ca.r == 172)std::cout<<"\nok nvm it works";*/

    //ca = img.getPixel(0,31);
    //std::cout<<ca.r<<"\n"<<ca.g<<"\n"<<ca.b<<"\n";
    methods m("funnyahh.txt");

    /*string s="";
    if(!m.methodf.is_open()){
        cout<<"couldnt open file";
        return 1;
    }
    else{
        m.example();
        cout<<m.enc.length();
        s = m.readFFile();
        cout<<s;
        //cout<<s.empty()<<"\n\nit shouldve printed honestly\n\n";
    }
    */
    Image img;
    img.loadFromFile("./1.png");
    cout<<"it got here";
    return 0;
}
