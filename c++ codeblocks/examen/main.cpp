#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int n,nux,n1,n2;
    cin>>n;
    string aux,cux1,cux2;

    while(n>=1000){
        aux=to_string(n);
        nux=aux.length();
        cux2=aux[1];
        n2=stoi(cux2);
        if(n2==9){
            n-=1000;
            //cout<<"N: "<<n<<"|";
            for(int i=1;i<=(n/1000)+1;i++){
            cout<<"M";
            n-=1000;
            // cout<<"N: "<<n<<"|";
            }
            cout<<"CM";
        }

        else{
            for(int i=1;i<=(n/1000);i++){
            cout<<"M";
            n-=1000;
            }
        }
    }

    while(n<1000 && n>=500){
        for(int q=0;q<=(n/500);q++){
            cout<<"D";
            n-=500;
        }
    }


    while(n<1000 && n>=100){
        for(int j=0;j<=(n/100);j++){
            cout<<"C";
            n-=100;
        }
    }

    while(n<100 && n>=50){
        for(int k=0;k<=(n/50);k++){
            cout<<"L";
            n-=50;
        }
    }

    while(n<50 && n>=10){
        for(int a=0;a<=(n/10);a++){
            cout<<"X";
            n-=10;
        }
    }
    while(n<10 && n>=5){
        for(int b=0;b<=(n/5);b++){
            cout<<"V";
            n-=5;
        }
    }

    while(n<5 && n>=1){
        for(int c=0;c<=n;c++){
            cout<<"I";
            n-=1;
        }
    }



return 0;
}
