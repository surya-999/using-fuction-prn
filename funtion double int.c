#include<stdio.h>
long long int input()
{	
long long int prn1;
printf("enter your prn\n");
scanf("%llu",&prn1);
return prn1;
}
int output(long long int prn3)
{
printf("prn is %llu",prn3);
}

int main()
{
long long int prn2 = input();
output(prn2);
}

