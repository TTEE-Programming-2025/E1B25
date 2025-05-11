#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,i=0,n,l=0,w=0;
	char ch,ch1,j,k,ch2;
	while(i<=1){
	
	printf("*******************\n");
    printf(" *****************\n");
    printf("  ***************\n");
    printf("   *************\n");
    printf("    ***********  \n");
    printf("     *********   \n");
    printf("      *******    \n");
    printf("       *****     \n");
    printf("        ***     \n");
    printf("         *   \n");
    i++;
	}
	system("pause");
	system("CLS");
	for(i=1;i<=3;i++){
		printf("¿é¤J 4 ­Ó¼Æ¦rªº±K½X(2025):");
		scanf("%d",&a);
		if(a==2025){
			
			printf("±K½X¥¿½T.\n");
			printf("Welcome\n");
			break;
			
		}
		else{
			printf("±K½X¿ù»~.\n");
			w++;
			
			
		}
	}
	system("pause");
	system("CLS");
	if(w==3){
		return 0;
	}
	

	printf("------[Booking System]------\n");
	printf("|  a. Available            |\n");
	printf("|  b. Arrange for you      |\n");
	printf("|  c. Choose by yourself   |\n");
	printf("|  d. Exit                 |\n");
	printf("----------------------------\n");
	fflush(stdin); 
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'){
		
	}
			
			
	
	system("pause");
	return 0;
}


