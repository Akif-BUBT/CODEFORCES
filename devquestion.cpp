#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int remain_x=x;
        int remain_y=y;
        int count=0;
        while(remain_x!=0||remain_y!=0){
            count++;
            if(count%2==1){
                remain_x=remain_x-min(remain_x,k);
                
            }
            else{
                remain_y-=min(remain_y,k);
               
            }
        }
        cout<<count<<endl;
    }
    
}