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
int minimax(int depth, int nodeindex, bool player,int evals[]){	
	if(depth==0||nodeindex<0) return evals[nodeindex];
if(player){
int miv=INT_MIN;
int i;
for(i=1;i<=2;i++){
int v=minimax(depth-1,nodeindex*2+i,!player,evals);
miv=max(v,miv);
}
return miv;
} 
else{
int mx=INT_MAX;
int i;
for(i=1;i<=2;i++){
int v=minimax(depth-1,nodeindex*2+i,!player,evals);
mx=min(v,mx);
}
return mx;
} 
}
int main()
{
	int evals[] = {3, 5, 2, 9, 12, 5, 23, 23};
	int res = minimax(4, 0, true, evals);
	printf("The optimal value is :%d\n",res);
	return 0;
}