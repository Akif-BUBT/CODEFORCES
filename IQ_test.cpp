#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> num;
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    for(int i=0;i<t;i++){
        if(num[i]%2==0){
            even.push_back(num[i]);
        }
        else{
            odd.push_back(num[i]);
        }
    }
    if(even.size()==1){
        int x=even[0];
        auto it=find(num.begin(),num.end(),x);
        cout<<it-num.begin()+1;
    }
    else{
        int x=odd[0];
        auto it=find(num.begin(),num.end(),x);
        cout<<it-num.begin()+1;
    }
    
}