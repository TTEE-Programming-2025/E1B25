#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,i;
	char ch;
	srand(time(NULL)); 
    int times = rand() % 10 + 1; 
    for ( i = 0; i < times; i++) {
    printf("***************\n");
    printf(" *************\n");
    printf("  ***********  \n");
    printf("   *********   \n");
    printf("    *******    \n");
    printf("     *****     \n");
    printf("      ***     \n");
    printf("       *   \n");
	}

	system("pause");
	system("CLS");
	printf("��J 4 �ӼƦr���K�X:");
	scanf("%d",&a);
	if(a==2024){
		printf("�w��\n");
		system("pause");
		system("CLS");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|  'A'......'Z' : Uppercase  |\n");
		printf("|  'a'......'z' : Lowercase  |\n");
		printf("|  '0'......'9' : Digit      |\n");
		printf("|   Otherwise   : Your name  |\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("��J1�Ӧr��:");
		fflush(stdin);
		scanf("%c",&ch);
		if(ch>='A'&&ch<='Z'){
			printf("Uppercase");
			system("pause");
		}
		else if(ch>='a'&&ch<='z'){
			printf("Lowercase");
			system("pause");
		}
		else if(ch>='0'&&ch<='9'){
			printf("Digit");
			system("pause");
		}
		else{
			printf("E1B25���m");
			system("pause");
		}
	}
	else{
		printf("��J���~");
	}
	return 0;
} 
