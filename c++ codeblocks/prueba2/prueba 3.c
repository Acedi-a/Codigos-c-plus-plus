#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int h;
    if(h>12){
        h-=12;
        if(h<=1){
            cout<<"Es la 1 de la tarde.";
        }
        cout<<"Son las "<<h-12<<" de la tarde.";
    } else {
         h-=12;
        if(h<=1){
            cout<<"Es la 1 de la ma�ana.";
        }
        cout<<"Son las "<<h-12<<" de la ma�ana.";
    }
    return 0;
}
