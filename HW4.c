#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void){
	int a,i=0,w=0,j;
	while(i<=1){
	
	printf("    **   **   \n");
    printf(" *************  \n");
    printf("***************\n");
    printf(" *************\n");
    printf("  ***********  \n");
    printf("   *********   \n");
    printf("    *******    \n");
    printf("     *****     \n");
    printf("      ***     \n");
    printf("       *   \n");
    i++;
	}
	system("pause");
	system("CLS");
	for(i=1;i<=3;i++){
		printf("��J 4 �ӼƦr���K�X(2025):");
		scanf("%d",&a);
		if(a==2025){
			
			printf("�K�X���T.\n");
			printf("Welcome\n");
			break;
			
		}
		else{
			printf("�K�X���~.\n");
			w++;	
		}
	}
	system("pause");
	system("CLS");
	if(w==3){
		return 0;
	}
	
	system("CLS");
	printf("------------[Grade System]------------\n");
	printf("|  a. Enter student grades           |\n");
	printf("|  b. Display student grades         |\n");
	printf("|  c. Search for student grades      |\n");
	printf("|  d. Grade ranking                  |\n");
	printf("|  e. Exit system                    |\n");
	printf("--------------------------------------\n");

	return 0;
}

