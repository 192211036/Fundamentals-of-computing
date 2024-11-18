#include<stdio.h>
int main(){
	int n;
	printf("enter the nth value of the series:");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	printf("the sum of the n series is:%d",sum);
	return 0;
}
