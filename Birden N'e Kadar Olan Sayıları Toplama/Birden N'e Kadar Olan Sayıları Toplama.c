#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x,i,sonuc;
	
	sonuc=0;
	
	printf("kacinci degere kadar toplamak istiyorsunuz:\n");
	scanf("%d",&x);
	printf("\n\n");
	
	for(i=0;i<=x;i++)
	{
		sonuc=sonuc+i;
	}
	
	printf("sonucunuz= %d",sonuc);
	
	
	
	
	
	
	getch(0);
	return 0;
}
