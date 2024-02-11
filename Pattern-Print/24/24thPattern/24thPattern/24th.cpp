#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	printf("Enter how many rows you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){
			if(j<=i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}