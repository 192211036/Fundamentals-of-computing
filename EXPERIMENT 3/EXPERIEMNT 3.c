#include<stdio.h>
void findfibo(n){
	int a=0,b=1,next;
	for(int i=1;i<=n;i++){
		printf("%d\t",a);
		next=a+b;
		a=b;
		b=next;
	}
	printf("\n");
}
int main(){
	int n;
	printf("enter the nth value of series:");
	scanf("%d",&n);
	printf("the fibonacci series is:");
	findfibo(n);
	return 0;
}
