#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int arr[m];
    int i=0;
    while(i!=m){
        cin>>arr[i];
        i++;
    }
    long long int sum=arr[0]-1;
    long long int fix;
    fix=arr[0];
    for(int i=1;i<m;i++){
        if(arr[i]>fix){
            sum=sum+(arr[i]-fix);
            fix=arr[i];
            
        }
        else if(arr[i]<fix){
            sum=sum+n-(fix-arr[i]);
            
            fix=arr[i];
        }
        
    }
    cout<<sum;
}