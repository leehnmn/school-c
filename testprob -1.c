#include <stdio.h>
int main() {
	int e = -10;
	
	e = e + 5; printf("e=%d \n", e);
	
 e = e - 3; printf("e=%d \n", e);
	
 e =e * -3; printf("e=%d \n", e); 
  
 e = e / 0.5; printf("e=%d \n", e);

 ++e; printf("++e \n", ++e);
	return 0;

 }