#include<stdio.h>
/*
format if-else
if(ko�ul_sorgusu)
{
Yap�lacak i�lemler;
}
else
{
Ko�ul sorgusu do�ru de�ilse yap�lacak i�lemler;
}

format -> ��l� �art operat�r�

ko�ul sorgusu ?  do�ru ise yap�lacak i�lem : yanl�� ise yap�lacak i�lem;


*/

int main (){
	
	int sayi;
	printf("Bir Sayi Giriniz : ");
	scanf("%d",&sayi);
	
	sayi % 3 == 0 ? printf("Sayinin 3'e bolumunden kalan 0'dir"):sayi % 3 == 1 ? printf("Sayinin 3'e bolumunden kalan 1'dir"): printf("Sayinin 3'e bolumunden kalan 2'dir");
/*
	sayi % 2 ==0 ? printf("Sayiniz Cift Sayidir"): printf("Sayiniz Tek Sayidir.");

	if(sayi %3 ==0)
	{
		printf("Sayini 3'e bolumunden kalan 0'dir''");
	}
	
	else if(sayi % 3 == 1)
	{
		printf("Sayinin 3'e bolumunden kalan 1'dir.");
	}
	else
	{
		
		printf("Sayinin 3'e bolumunden kalan 2'dir.");
	}
*/
	return 0;
}
