#include<iostream>
using namespace std;
int fu(int a[],int n){
    int b[n];
    int fr=-1;
    int i;
    for(i=0;i<n;i++){
        if(a[i]==-1){
            fr=i+1;
            break;
        }
    }
    int j=0;
    while(fr!=-1){
        b[j]=fr;
        j++;
        int np=-1;
        for(i=0;i<n;i++){
            if(a[i]==fr){
                np=i+1;
                break;
            }
        }
        fr=np;
    }
    for(i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
}
int main(){
    int n;
    int i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    
    return 0;
}