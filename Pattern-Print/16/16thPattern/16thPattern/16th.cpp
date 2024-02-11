#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	printf("Enter how many rows you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("%2d",i);
		}
		printf("\n");
	}
	getch();
}