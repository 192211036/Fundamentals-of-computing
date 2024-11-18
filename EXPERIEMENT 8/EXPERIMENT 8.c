#include<stdio.h>
int main(){
	int n;
	printf("enter the nth value of series:");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum-=i;
		}
		else{
			sum+=i;
		}
	}
	printf("the result of the series is:%d",sum);
	return 0;
}
