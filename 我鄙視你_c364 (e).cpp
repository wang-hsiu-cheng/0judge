#include <iostream>

using namespace std;

int main(){
int N,sum,err;
err=0;
sum=0;
cin>>N;
int CM[N];
int ans[N]={};
for(int i=0;i<N;i++){
    cin>>CM[i];
}
for(int i=0;i<N;i++){
    err=0;
    for(int j=1;j<N-i;j++){
        if(CM[i]>CM[i+j] && err==0){
            if(CM[i+j]<0){
                ans[i]=ans[i]-CM[i+j];
            }

            else{
                ans[i]=ans[i]+CM[i+j];
            }

        }
        else{
            err=1;
        }
    }
    err=0;
    for(int j=1;j<=i;j++){
        if(CM[i]>CM[i-j] && err==0){
            if(CM[i-j]<0){
                ans[i]=ans[i]-CM[i-j];
            }

            else{
                ans[i]=ans[i]+CM[i-j];
            }
        }
        else{
            err=1;
        }
    }
    cout<<ans[i]<<endl;
}

return 0;
}
