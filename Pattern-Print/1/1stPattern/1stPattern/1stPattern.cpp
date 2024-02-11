#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,n;
	printf("Enter how many stars you want to print in a row..\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();

}