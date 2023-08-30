#include <iostream>
using namespace std;

int main()
{
int N,x1,y1,x2,y2;
//��J
cin>>N;
cin>>x1>>y1>>x2>>y2;
int t;
if(x1>x2){
    t=x1;
    x1=x2;
    x2=t;
}
if(y2>y1){
    t=y1;
    y1=y2;
    y2=t;
}
int squ[N*2-1][N*2-1];
//�W�h&���h
for(int i=0;i<N;i++){
    //�e�q
    for(int i_f=0;i_f<=i;i_f++){
        squ[i][i_f]=N-i_f;
        squ[i][i_f]=squ[i][i_f]%100000;
        //cout<<"("<<i<<","<<i_f<<")"
        //cout<<squ[i][i_f]<<" ";
    }
    //���q
    if(i!=N-1){
        for(int i_m=i+1;i_m<(N*2-1)-i;i_m++){
            squ[i][i_m]=N-i;
            squ[i][i_m]=squ[i][i_m]%100000;
            //cout<<"("<<i<<","<<i_m<<")"
            //cout<<squ[i][i_m]<<" ";
        }
	}
	//��q
    for(int i_l=N*2-1-i;i_l<N*2-1;i_l++){
        squ[i][i_l]=i_l+1-N+1;
        squ[i][i_l]=squ[i][i_l]%100000;
        //cout<<"("<<i<<","<<i_l<<")"
        //cout<<squ[i][i_l]<<" ";
    }
    //cout<<endl;
}
//�U�h
for(int i=N;i<N*2-1;i++){
    //�e�q
    for(int i_f=0;i_f<N*2-1-i;i_f++){
        squ[i][i_f]=N-i_f;
        squ[i][i_f]=squ[i][i_f]%100000;
        //cout<<"("<<i<<","<<i_f<<")"
        //cout<<squ[i][i_f]<<" ";
    }
    //���q
    for(int i_m=N*2-1-i;i_m<i+1;i_m++){
        squ[i][i_m]=i-N+2;
        squ[i][i_m]=squ[i][i_m]%100000;
        //cout<<"("<<i<<","<<i_m<<")"
        //cout<<squ[i][i_m]<<" ";
	}
	//��q
    for(int i_l=i+1;i_l<N*2-1;i_l++){
        squ[i][i_l]=i_l-N+2;
        squ[i][i_l]=squ[i][i_l]%100000;
        //cout<<"("<<i<<","<<i_l<<")"
        //cout<<squ[i][i_l]<<" ";
    }
    //cout<<endl;
}
//cout<<endl;
/*//�C�L�T�{
for(int i=0;i<N*2-1;i++){
    for(int j=0;j<N*2-1;j++){
        //cout<<"("<<i<<","<<j<<")"
        //cout<<squ[i][j]<<" ";
    }
    //cout<<endl;
}*/
//���
int sum=0;
//cout<<"("<<x1<<","<<y1<<") ("<<x2<<","<<y2<<")";
//cout<<"["<<squ[N*2-1-y1][x1-1]<<","<<squ[N*2-1-y2][x2-1]<<"]"<<endl;
for(int i=0;i<y1-y2+1;i++){
    for(int j=0;j<x2-x1+1;j++){
        sum=sum+squ[N*2-1-y1+i][x1-1+j];
        sum=sum%10000;
    }
}
cout<<sum;
return 0;
}
