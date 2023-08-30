#include<iostream>

using namespace std;

int main(){
    int n=1,m=1,e=0,jj=0;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            jj=j+1;
            if(a[i][j]==-1){
                break;
            }
        }
        for(int j=jj;j<10;j++){
            a[i][j]=0;
            if(a[i][7]=='E' && a[i][8]=='O' && a[i][9]=='F'){
                break;
            }
        }
        for(int k=0; k<i; k++){
            for(int l=0; l<10; l++){
               if(a[i][l] == a[i-k-1][l]){
                e=1;
                }
                else{
                e=0;
                }

                cout<<e<<endl;
            }

        }
        n=n+1;
        //cout<<e<<endl;
    }
}
