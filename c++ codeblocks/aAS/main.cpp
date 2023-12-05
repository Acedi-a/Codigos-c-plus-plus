#include <iostream>
#define Fn(i,x1,x2) for(int i=x1; i<x2; i++)
#define ct(x) cout<<x<<endl

using namespace std;

int main()
{

   int x1,y1,x2,y2,c=0;
   cin>>x1>>y1>>x2>>y2;
   bool key = false;
   if(x1>x2)ct(0);
   else{
      Fn(i,0,1001){
         x1+=y1;
         x2+=y2;
         if(x1>x2) {key=true; c++; break;}
         else c++;
         //ct(c);
      }
      if(key) ct(c);
      else ct(-1);
   }

}
