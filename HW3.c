#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void){
	int a,i=0,w=0,j,t,row,col;
	char ch,ch2;
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
	Start:
	system("CLS");
	printf("------[Booking System]------\n");
	printf("|  a. Available            |\n");
	printf("|  b. Arrange for you      |\n");
	printf("|  c. Choose by yourself   |\n");
	printf("|  d. Exit                 |\n");
	printf("----------------------------\n");
	fflush(stdin); 
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='A'){
		
		system("CLS");
		printf("\\123456789\n");
		for(i=8;i>=0;i--){
			printf("%d",i+1);
			for(j=0;j<9;j++){
				printf("%c",m[i][j]);
			}
			printf("\n");
		}
		system("pause");
		system("CLS");
		goto Start;
		
		
	}
	if(ch=='b'||ch=='B'){
    int n;
    printf("�п�J 1~4�G");
    fflush(stdin);
    scanf("%d", &n);
    int placed = 0;
    if (n>=1&&n<=3) {
        int row = rand() %9;
        int start_col;
        int can_place;
        do {
            start_col=rand()%(9-n+1);
            can_place=1;
            for (i=0;i<n;i++) {
                if (m[row][start_col+i] !='-') {
                    can_place = 0;
                    break;
                }
            }
        } while (!can_place);


        for (i=0;i<n;i++)
            m[row][start_col+i] ='@';

    } else if (n==4) {
        int type =rand() % 2; 
        if (type==0) {
       
            int row = rand() %9;
            int start_col;
            int can_place;
            do {
                start_col = rand() % (9-4+1);
                can_place =1;
                for (i=0;i<4;i++) {
                    if (m[row][start_col + i] != '-') {
                        can_place = 0;
                        break;
                    }
                }
            } while (!can_place);

            for (i=0;i<4;i++)
                m[row][start_col + i] = '@';

        } else {

            int row = rand() % (9-1); 
            int start_col;
            int can_place;
            do {
                start_col = rand() % (9-2+1); 
                can_place = 1;
                for (i=0;i<2;i++) {
                    if (m[row][start_col + i] != '-' || m[row+1][start_col + i] != '-') {
                        can_place = 0;
                        break;
                    }
                }
            } while (!can_place);

            for (i=0;i<2;i++) {
                m[row][start_col + i] = '@';
                m[row+1][start_col + i] = '@';
            }
        }
    }
    for (i=8;i>=0;i--) {
    	printf("%d",i+1);
        for (j=0;j<9;j++)
            printf("%c",m[i][j]);
        printf("\n");
    }
    printf("���N?(y/n)");
    fflush(stdin);
    scanf("%c",&ch2);
   	while(ch2!='Y'&&ch2!='y'&&ch2!='N'&&ch2!='n'){
		printf("��J���~�A���s��J");
		fflush(stdin);
		scanf("%c",&ch2);
		}
	if(ch2=='N'||ch2=='n'){
		system("CLS");
		for (i=0;i<9;i++)
            for (j=0;j<9;j++)
                if (m[i][j] == '@')
                    m[i][j] = '-';
		goto Start;
		}
	if(ch2=='Y'||ch2=='y'){
		for (i=0;i<9;i++)
                for (j=0;j<9;j++)
                    if (m[i][j] == '@')
                        m[i][j] = '*';
		goto Start;
		}
	}
	if(ch=='c'||ch=='C'){
		char st[40];
		int num=0;
		fflush(stdin);
		printf("��J�H��? (1-4): ");
		scanf("%d", &num);
    for (i = 0; i<num; i++) {
       	printf("��J�y��(�C-��)");
        fflush(stdin);
		fgets(st, sizeof(st), stdin);
        if (sscanf(st, "%d-%d", &row, &col) != 2 || row < 1 || row > 9 || col < 1 || col > 9) {
            printf("��J���~�A��J�y��(�C-��)\n");
            i--;
            continue;
        }

        if (m[row - 1][col - 1] != '-') {
            printf("�y�즳�H�A���s��J\n");
            i--;
            continue;
        }

        m[row - 1][col - 1] = '@';
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
	system("pause");
	for (i=0;i<9;i++)
                for (j=0;j<9;j++)
                    if (m[i][j] == '@')
                        m[i][j] = '*';
		goto Start;
		
	}
	if(ch=='d'||ch=='D'){
		char ch3;
		printf("'Continue? (y/n)'");
				fflush(stdin);
				scanf("%c",&ch3);
				while(ch3!='Y'&&ch3!='y'&&ch3!='N'&&ch3!='n'){
					printf("��J���~�A���s��J");
					fflush(stdin);
					scanf("%c",&ch3);
				}
				if(ch3=='Y'||ch3=='y'){
					goto Start;
				}
	}

	
			
			
	
	
	return 0;
}


