#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while (x--)
    {
        int r;
        cin>>r;
        cin.ignore();
        if(r>=1900){
            cout<<"Division 1"<<endl;
        }
        else if(r>=1600&&r<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(r>=1400&&r<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(r<=1399){
            cout<<"Division 4"<<endl;
        }
    }
    
}
