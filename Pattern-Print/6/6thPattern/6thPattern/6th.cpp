#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n;
	printf("Enter how many rows you wnat to print\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=n;j++){
			printf("%2d",i);
		}
		printf("\n");
    
	}
	getch();
}