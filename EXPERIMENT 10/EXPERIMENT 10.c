#include<stdio.h>
int main(){
	int n;
	printf("enter the nth value of the series :");
	scanf("%d",&n);
	int sum=0;
	for(int i=2;i<=n;i+=2){
		sum+=i*i;
		
	}
	printf("the output of the nth seriez is:%d",sum);
	return 0;
}
