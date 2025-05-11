#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void){
	int a,i=0,w=0,j,t,row,col;
	char ch;
	char m[9][9];
	char p[81];
	srand(time(NULL));
	
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
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				m[i][j]='-';
			}
		}
		for(i=0;i<81;i++){
			p[i]=i;
		}
		for(i=80;i>0;i--){
			j=rand()%(i+1);
			t=p[i];
			p[i]=p[j];
			p[j]=t;
		}
		for(i=0;i<10;i++){
			row=p[i]/9;
			col=p[i]%9;
			m[row][col]='*';
		}
		system("CLS");
		printf("\\123456789\n");
		for(i=8;i>=0;i--){
			printf("%d",i+1);
			for(j=0;j<9;j++){
				printf("%c",m[i][j]);
			}
			printf("\n");
		}
		
	}
			
			
	
	system("pause");
	return 0;
}


