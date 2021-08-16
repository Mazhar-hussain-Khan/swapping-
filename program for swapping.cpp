/*Name: Mazhar Hussain    Registration No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk */
/*program using function for swaping two numbers */
#include<stdio.h>
void swap(int , int);

int main(){
	int n1,n2;
	printf(" Function : swap two numbers using function :\n");
	
	printf("enter any two numbers:\n");
	scanf("%d %d",&n1,&n2);
	
	swap(n1,n2);
	return 0;
}

void swap(int num1,int num2){
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("after swaping num1 = %d and num2 = %d\n\n",num1,num2);
}
