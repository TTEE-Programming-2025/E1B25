#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct std {
		char name[10];
		int number;
		int m;
		int p;
		int e;
		float avg;
	}st[10];
	int n=0;
void a(void){
	int i;
	printf("�п�J���(5~10):");
	fflush(stdin);
	scanf("%d",&n);
	while(n<5||n>10){
		printf("��J���~�A�п�J���(5~10):");
		fflush(stdin);
		scanf("%d",&n);
	}
	
	for(i=0;i<n;i++){
		
		fflush(stdin);
		printf("�ǥͩm�W:");
		fgets(st[i].name,10,stdin);
		st[i].name[strcspn(st[i].name, "\n")] = '\0';
		printf("�ǥ;Ǹ�:");
		fflush(stdin);
		scanf("%d",&st[i].number);
		while(st[i].number<100000||st[i].number>999999){
			printf("��J���~�A�Ч勵:");
			scanf("%d",&st[i].number);
		}
		printf("�ƾǦ��Z:");
		fflush(stdin);
		scanf("%d",&st[i].m);
		while(st[i].m>100||st[i].m<0){
			printf("��J���~�A�Ч勵:");
			scanf("%d",&st[i].m);
		}
		printf("���z���Z:");
		fflush(stdin);
		scanf("%d",&st[i].p);
		while(st[i].p>100||st[i].p<0){
			printf("��J���~�A�Ч勵:");
			scanf("%d",&st[i].p);
		}
		printf("�^�妨�Z:");
		fflush(stdin);
		scanf("%d",&st[i].e);
		while(st[i].e>100||st[i].e<0){
			printf("��J���~�A�Ч勵:");
			scanf("%d",&st[i].e);
		}
		
		
	}
	
	printf("\n��ƿ�J�����A�Ы����N��^�D���...\n");
    getchar(); 
    getchar(); 
	return;
}

void b(void){
	int i;
	if (n == 0) {
        printf("�ثe�|�L�ǥ͸�ơI\n");
        printf("�Ы����N���^�D���...\n");
        getchar();
        getchar(); 
        return;
    }
	for(i=0;i<n;i++){
		printf("�ǥͩm�W:%s ",st[i].name);
		printf("�ǥ;Ǹ�:%d ",st[i].number);
		printf("�ƾǦ��Z:%d ",st[i].m);
		printf("���z���Z:%d ",st[i].p);
		printf("�^�妨�Z:%d ",st[i].e);
		st[i].avg = (st[i].m + st[i].p + st[i].e) / 3.3f;
		printf("������:%.2f\n",st[i].avg);
	}
	getchar();
    getchar();
	return ;
}
int main(void){
	int i=0,w=0,j,p;
	char ch;
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
		scanf("%d",&p);
		if(p==2025){
			
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
	Start:
	system("CLS");
	printf("------------[Grade System]------------\n");
	printf("|  a. Enter student grades           |\n");
	printf("|  b. Display student grades         |\n");
	printf("|  c. Search for student grades      |\n");
	printf("|  d. Grade ranking                  |\n");
	printf("|  e. Exit system                    |\n");
	printf("--------------------------------------\n");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'){
		a();
		goto Start;
	}
	if(ch=='b'||ch=='B'){
    	b();
    	goto Start;
	}
	if(ch=='c'||ch=='C'){
		
		
	}
	if(ch=='d'||ch=='D'){
		
	} 
	
	
	return 0;
	}
	
	

