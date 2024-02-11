#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	printf("Enter how many rows you want to print\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}