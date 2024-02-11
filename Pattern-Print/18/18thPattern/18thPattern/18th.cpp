#include<stdio.h>
#include<conio.h>
void main(){
	char i,j,n;
	printf("Enter the range of alphabet you want to print\n");
	scanf("%c",&n);
	for(i='A';i<=n;i++){
		for(j=n;j>=i;j--){
			printf("%2c",i);
		}
		printf("\n");
	}
	getch();
}