#include<stdio.h>
int main(){
	int n;
	printf("enter the nth value of series:");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i+=2){
		sum+=i;
	}
	printf("the sum of odd number series is:%d",sum);
	return 0;
}
