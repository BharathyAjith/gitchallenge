#include<stdio.h>
void sum(int,int);
void main(){
int a,b;
printf("enter 2 numz");
scanf("%d%d",&a,&b);
sum(a,b);

}
void sum(int num1,int num2){
int rslt;
rslt=num1+num2;
printf("result is %d",rslt);
}

