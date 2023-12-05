#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> palabras;
    string a;
    getline(cin,a);

    for (int i = 0; i < a.length(); i++) a[i] = tolower(a[i]);

    for(int i=0; i<a.length();i++){
        palabras[a[i]]++;
    }



    for(auto it = palabras.begin();it != palabras.end();it++){
        cout<<it->second<<" ";
    }


}
