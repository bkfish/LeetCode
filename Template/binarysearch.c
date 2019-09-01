#include<stdio.h>
int getIndex(int *a,int x){
	int low=0,high=9,j=0;
	int mid;
	while((low<=high)&&(x!=a[j]))
	{
		mid=(low+high)/2;
		if(x==a[mid])
		return mid;
		else if(x<a[mid])
		high=mid-1;
		else low=mid+1;
	}
	return j;
}
int main(){
	int a[10]={1,2,5,7,9,12,13,16,156,200};
	int x=0;
	scanf("%d",&x);
	int i=getIndex(a,x);
	if (i!=0)
	{
		printf("Êý×ÖÎ»ÖÃ£º%d",i+1);
	}
	return 0;
} 
