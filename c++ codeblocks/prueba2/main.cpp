#include <bits/stdc++.h>

using namespace std;
void solv()
{
    int dia,per,x,cont=0,tempaux=0,y=0;
    cin>>dia>>per;
    int temp[dia];
    int cm[per];
    for(int i=0;i<dia;i++){
        cin>>temp[i];
    }

    for(int i=0;i<per;i++){
        cin>>cm[i];
    }

    float a;
    for(int j=0;j<per;j++){
        for(int i=0;i<dia;i++){
            if(y==0){
                tempaux = temp[i];
                a = (tempaux / 5.0);
            }
            else if(y==1){
                a = (tempaux / 5.0);
            }

            if(a<0) a*=-1;
            if(a>cm[j] || a==cm[j]){
                cont++;
                tempaux=0;
                y=0;
            }
            else{
                tempaux+=temp[i+1];
                y=1;
            }

        }
        cout<<cont<<" ";
        cont=0;
        tempaux = 0;



    }


}


int main()
{
    solv();
    return 0;
}
