#include<stdio.h>
int main(){
	int x=2,y=-1,z=2;
	if(x<y)
		if(y<0)
			z=0;
		else
			z+=1;
	printf("%d",z);
	return 0;
}
