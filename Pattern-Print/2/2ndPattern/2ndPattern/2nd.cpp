#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	printf("Enter how many rows you want to print\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}