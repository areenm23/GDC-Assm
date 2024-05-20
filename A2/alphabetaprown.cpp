#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
int max(int a,int b){
    if(a>=b) return a;
    else return b;
}
int min(int a,int b){
    if(a>=b) return b;
    else return a;
}
int minimax(int depth, int nodeindex, bool player,int evals[],int a,int b){	
	if(depth==0||nodeindex==0) return evals[nodeindex];
if(player){
int miv=INT_MIN;
int i;
for(i=1;i<=2;i++){
int v=minimax(depth-1,nodeindex*2+i,false,evals,a,b);
miv=max(v,miv);
a=max(a,miv);
if(a>=b) break;
}
return miv;
} 
else{
int mx=INT_MAX;
int i;
for(i=1;i<=2;i++){
int v=minimax(depth-1,nodeindex*2+i,true,evals,a,b);
mx=min(v,mx);
b=min(b,mx);
if(a>=b) break;
}
return mx;
} 
}
int main()
{
	int evals[] = {3, 5, 2, 9, 12, 5, 7, -6,3,4,-3,9,-8,-3,-100,2};
	int res = minimax(4, 0, true, evals,-1000,1000);
	printf("The optimal value is :%d\n",res);
	return 0;
}