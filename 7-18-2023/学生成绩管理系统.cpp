#include<stdio.h>
#include<math.h>
#define N 2
struct Student{
	char name[5];
	int score[5];
}student[N];
void menu(){
	int i,j;
	for(i=1;i<=N;i++){
		printf("�������%d��ѧ��������:",i);
		scanf("%s",&student[i-1].name);
		for(j=1;j<6;j++){
			printf("�������%d��ѧ����%d��Ŀ�ɼ�:",i,j);
			scanf("%d",&student[i-1].score[j-1]);
		}
	}	
}
void aver1(Student student[]){
	int i,j,sum=0;
	for(j=0;j<N;j++){
		sum=0;
		for(i=0;i<5;i++)
		sum+=student[j].score[i];
	printf("%s��ƽ����Ϊ%f\n",student[j].name,(sum/5.0));
	}
}
void averall(Student student[]){
	int i,j;
	float sum;
	for(j=0;j<5;j++){
		sum=0.0;
		for(i=0;i<N;i++){
		sum+=student[i].score[j];
	}
	printf("%d��Ŀƽ����Ϊ:%f\n",(j+1),(sum/N));
	}
}
void mm(Student student[]){
	int i,j,m1,m2;
	for(j=0;j<5;j++){
		m1=student[0].score[j];
		m2=student[0].score[j];
		for(i=1;i<N;i++){
		if(student[i].score[j]>m1){
			m1=student[i].score[j];
		}
		if(student[i].score[j]<m2){
			m2=student[i].score[j];
	}
	} 
	printf("%d��Ŀ��߷�Ϊ:%d\n��ͷ�Ϊ%d\n",(j+1),m1,m2);
	}
}
void dis(Student student[]){
	printf("������Ҫ��ѯ������Ŀ�Ŀ��(1-5)\n");
	int c;
	
	while(1){
		scanf("%d",&c);
			if((c==1)||(c==2)||(c==3)||(c==4)||(c==5)){
			int i;
		printf("�ÿ�Ŀ����������У�"); 
	for(i=0;i<N;i++)
		if(student[i].score[c-1]<60)
			printf("%s\t",student[i].name);
	break;}
	else
		printf("����������������룡");

	}
}
int main(){
	printf("��ӭ����ѧ���ɼ�����ϵͳ\n");
	menu();
	printf("�Ѿ��ɹ�¼�룡");
	int a;
	while(1){
		printf("\n��ѡ���������Ҫ���еĲ�����\n0���˳�\t1���鿴ѧ����ƽ����\t2���鿴����Ŀƽ���ɼ�\n3���鿴���Ƶ������ͷ�\t4���鿴����δ����ѧ������\n");
		scanf("%d",&a);
		if(a==1){aver1(student);
			continue;
		}
			
		else if(a==2){averall(student);
			continue;
		} 
		else if(a==3){	mm(student);
			continue;
		}
		else if(a==4){
			dis(student);
			continue;
		}
		else if(a==0){
			printf("�˳�ϵͳ�ɹ���");
			break;
		}
		else{
			printf("�����������������\n");
			continue;
		}
		
	}
	
	
	return 0;
}
