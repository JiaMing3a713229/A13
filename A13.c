/*�@�~13:�м��g�@�ӵ{���A�O�I���q���ѥ��~����N�~�O�I�P�ӤH�N�~�O�I�A
���~����N�~�O�I�n��g����ƥ]�A�H�U���ءG
���~�W�١B���u�m�W�B��O�B�סC
�ӤH�N�~�O�I�n��g����ƥ]�A�H�U���ءG�ӤH�m�W�B�ӤH�q�ܡB��O�B�סC
�бN�W�z��̫ئ����c��C
�M��A�Φ@����զX�_�ӡA
����L��� 1.���~����N�~�O�I, 2.�ӤH�N�~�O�I�A
�M��A�̿�ܿ�J������ƫ�A�A�N��ƿ�X�C 

*�f�a�� 3a713229
*/ 
#include<stdio.h>
#include<stdlib.h>

struct Comp_insurance{
	char comp_name[20];   //���q�W�� 
	char employee_name[20];//���q���u 
	int comp_insured_amount;//�O�I���B 
}; 
struct Personal_insurance{
	char name[20]; //�ӤH�m�W 
	char cellphone[11];//�ӤH��� 
	int per_insured_amount;//�O�I���B 
};
union Mydata{
	struct Comp_insurance comp_insurance;//�@�ΰO���� 
	struct Personal_insurance personal_insurance; 
}mydata;

void show (int, union Mydata);
int main(void){
	
	int option;
	printf("�п�J�Ҧ�:"); 
	scanf("%d", &option);
	
	switch(option){
	   case 1:{
			printf("�п�J���q�W��:");
			scanf("%s",mydata.comp_insurance.comp_name);
			printf("�п�J���u�W��:");
			scanf("%s", mydata.comp_insurance.employee_name);
			printf("�п�J��O���B:");
			scanf("%d",&mydata.comp_insurance.comp_insured_amount);
			break;
		}
	   case 2:{
			printf("�п�J�ӤH�m�W:");
			scanf("%s",mydata.personal_insurance.name);
			printf("�п�J�ӤH�q��:");
			scanf("%s", mydata.personal_insurance.cellphone);
			printf("�п�J��O���B:");
			scanf("%d", &mydata.personal_insurance.per_insured_amount);
			break;
		}
					
	}
	
	show(option,mydata);
	
}
void show(int option,union Mydata mydata){
	switch(option){
		case 1:{
			printf("\n\n");
			printf("���q�W��%s\n", mydata.comp_insurance.comp_name);
			printf("���u�m�W:%s\n", mydata.comp_insurance.employee_name);
			printf("��O���B:%d\n", mydata.comp_insurance.comp_insured_amount);
			break;
		}
		case 2:{
			printf("\n\n");
			printf("�ӤH�m�W:%s\n", mydata.personal_insurance.name);
			printf("�ӤH�q��:%s\n", mydata.personal_insurance.cellphone);
			printf("��O���B:%d\n", mydata.personal_insurance.per_insured_amount);
			break;
		}
	}
	
}
