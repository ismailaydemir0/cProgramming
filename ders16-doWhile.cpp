#include<stdio.h>


int main()
{
	
	/*
	Donguyu Baslatma
	
	do {
	
	islemler
	
	    }
	while(kosul)
	{
	
	}
	
	*/
	
/*

1234 rakamlar� toplam� - ka� haneli oldugunu soylesin


*/

		int n,hane=0,toplam=0;
		
		printf("Sayi Giriniz: ");
		scanf("%d",&n);
		
		do{
			
			toplam= toplam+(n%10);
			
			hane++;
			
			n=n/10;
			
			
		}
		while(n>0);
		{
		printf("Rakamlari toplam %d ve %d Haneli",toplam,hane);
	
		}
	return 0;
}
