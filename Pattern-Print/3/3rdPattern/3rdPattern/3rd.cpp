#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	printf("Enter how many rows you want to print\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<=n;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}