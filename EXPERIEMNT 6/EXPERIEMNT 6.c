#include<stdio.h>
int main(){
	int n;
	printf("enter the n values of the series:");
	scanf("%d",&n);
	int sum=0;
	for(int i=2;i<=n;i+=2){
		sum+=i;
	}
	printf("the sum of the even number series is:%d",sum);
	return 0;
	
	}
