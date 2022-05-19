#include<iostream>
using namespace std;

int main(){
    int t,n,p;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>p;
        int h[p],ans=0,f=6;
        for(int i=0;i<p;i++){
            cin>>h[i];
        }
        for(int i=1;i<=n;i++){
           
            if(i%7!=6 && i%7!=0){
                for(int j=0;j<p;j++){
                    if(i%h[j]==0){
                        ans++;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;;
    }


    return 0;
}