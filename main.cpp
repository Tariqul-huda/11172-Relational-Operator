#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int test;
    long long int a,b;
//    freopen("input.txt","r",stdin);
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>a>>b;
        if(a>b){
            cout<<'>'<<endl;
        }
        else if(a<b){
            cout<<'<'<<endl;
        }
        else{
            cout<<'='<<endl;
        }
    }
    return 0;
}
