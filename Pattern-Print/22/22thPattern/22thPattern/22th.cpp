#include<stdio.h>
#include<conio.h>
void main(){
	char i,j,n;
	printf("Enter the range of alphabet you want to print\n");
	scanf("%c",&n);
	for(i=n;i>='A';i--){
		for(j='A';j<=n;j++){
			if(j<=i){
				printf("%2c",i);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}