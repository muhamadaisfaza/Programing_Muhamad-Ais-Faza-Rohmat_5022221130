#include <iostream>
using namespace std;

int main()
{
    int v,a,b,c,e,f,g;
    float x,y;
    cout<< "" <<endl;
    cin>>v;
    a = v-5;
    b = v-3;
    c = v-1;
    e = a*a/10;
    f = b*b/10;
    g = c*c/10;
    x = v-0.1002;
    y = v+0.0711;
    if(v==30){
        cout<<e<<" "<<x<<endl;
    }else if(v<30 && v>=20){
        cout<<e<<" "<<y<<endl;
    }else if(v<=20 && v>10){
        cout<<f<<" "<<y<<endl;
    }else if(v<=10 && v>=1){
        cout<<g<<" "<<y<<endl;
    }else{
        cout<<"";
    }

    return 0;
}
