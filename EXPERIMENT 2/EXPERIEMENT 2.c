#include<stdio.h>
int main(){
	int n;
	printf("enter the value for the series:");
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2){
		printf("%d\t",i);
		
	}
	return 0;
}
