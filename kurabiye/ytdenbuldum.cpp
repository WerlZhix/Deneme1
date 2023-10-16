


#include<stdio.h>
#include <locale.h>
 int main () {
	setlocale(LC_ALL , "turkish");
	int n  ;
	
	printf("n deðeri giriniz :");
	scanf("%d" , &n);
	
	while (n!=0) {
		
		printf("%d" ,n);
		
		
		n++;
		
		
		
	}
	
	
	
	
	return 0;
} 
