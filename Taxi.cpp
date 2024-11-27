#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int y;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        cin>>y;
        if(y==1){
            d++;
        }
        else if(y==2){
            c++;
        }
        else if(y==3){
            b++;
        }
        else if(y==4){
            a++;
        }
    }
    int sum=a;
    if(b>d){
        sum=sum+b;
        d=0;
    }
    else{
        sum=sum+b;
        d=d-b;
    }
    if(c%2==0){
        sum=sum+(c/2);
    }
    else{
        sum=sum+(c/2)+(c%2);
    }
    if(d%4==0){
        sum=sum+(d/4);
    }
    else{
        sum=sum+(d/4)+(d%4);
    }
    cout<<sum;
}
