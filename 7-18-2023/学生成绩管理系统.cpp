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
		printf("请输入第%d个学生的姓名:",i);
		scanf("%s",&student[i-1].name);
		for(j=1;j<6;j++){
			printf("请输入第%d个学生的%d科目成绩:",i,j);
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
	printf("%s的平均分为%f\n",student[j].name,(sum/5.0));
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
	printf("%d科目平均分为:%f\n",(j+1),(sum/N));
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
	printf("%d科目最高分为:%d\n最低分为%d\n",(j+1),m1,m2);
	}
}
void dis(Student student[]){
	printf("请输入要查询不及格的科目：(1-5)\n");
	int c;
	
	while(1){
		scanf("%d",&c);
			if((c==1)||(c==2)||(c==3)||(c==4)||(c==5)){
			int i;
		printf("该科目不及格的人有："); 
	for(i=0;i<N;i++)
		if(student[i].score[c-1]<60)
			printf("%s\t",student[i].name);
	break;}
	else
		printf("输入错误，请重新输入！");

	}
}
int main(){
	printf("欢迎进入学生成绩管理系统\n");
	menu();
	printf("已经成功录入！");
	int a;
	while(1){
		printf("\n请选择接下来你要进行的操作：\n0、退出\t1、查看学生的平均分\t2、查看各科目平均成绩\n3、查看各科的最高最低分\t4、查看各科未及格学生名单\n");
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
			printf("退出系统成功！");
			break;
		}
		else{
			printf("输入错误，请重新输入\n");
			continue;
		}
		
	}
	
	
	return 0;
}
