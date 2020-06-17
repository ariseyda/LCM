#include<stdio.h>

//Scan two positive integer from user, compute their least common multiple(LCM) and print the LCM on console. 
//LCM of integers A and B is A x B / GCD, where GCD is GCD of A and B. 

int main(){
	
	int a,b;
	int i;
	int gcd =2;
	
	printf("Please enter two numbers:");
	scanf("%d%d",&a,&b);
	
	for(i=2;i<15;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	
	int lcm=(a*b)/gcd;
	
	printf("LCM:%d",lcm);
	
	
	
	return 0;
}

