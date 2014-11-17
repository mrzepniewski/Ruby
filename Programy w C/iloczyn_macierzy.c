//Marcin Rzepniewski  -  Mnozenie Macierzy
#include<stdio.h>

int main(void)
{
	int wiersze1,wiersze2,kolumny1,kolumny2;
	printf("Podaj ilosc wierszy pierwszej macierzy");
	scanf("%d", &wiersze1);	
	printf("\nPodaj ilosc kolumn pierwszej macierzy");
	scanf("%d", &kolumny1);	
	printf("\nPodaj ilosc wierszy drugiej macierzy");
	scanf("%d", &wiersze2);	
	printf("\nPodaj ilosc kolumn drugiej macierzy");
	scanf("%d", &kolumny2);
	int macierz1[wiersze1][kolumny1];
	int macierz2[wiersze2][kolumny2];
	int macierzwynikowa[wiersze1][kolumny2];
	if(kolumny1==wiersze2)
	{	
		printf("\nWstawiaj liczby do pierwszej macierzy");
		int i,j;
		for(i=0;i<wiersze1;i++)
		{
			for(j=0;j<kolumny1;j++)
			{
				scanf("%d", &macierz1[i][j]);
			}
		}

		printf("\nWstawiaj liczby do drugiej macierzy");
        	for(i=0;i<wiersze2;i++)
        	{
        	        for(j=0;j<kolumny2;j++)
        	        {
        	                scanf("%d", &macierz2[i][j]);
        	        }
        	}
       	
		printf("\n\n Macierz pierwsza\n");
        	for(i=0;i<wiersze1;i++)
		{
			for(j=0;j<kolumny1;j++)
			{
				printf("%d\t", macierz1[i][j]);
			}
			printf("\n");
		}
		printf("\n\n Macierz druga\n");
        for(i=0;i<wiersze2;i++)
        {
                for(j=0;j<kolumny2;j++)
		{
			printf("%d\t", macierz2[i][j]);
		}
		printf("\n");
	}
	int k;
	int wynik=0;
	// mnozenie macierzy i zapis do nowej tablicy 
	for(i=0;i<wiersze1;i++){	
	for(j=0;j<kolumny2;j++)
		{
			macierzwynikowa[i][j]=0;
			for(k=0;k<wiersze2;k++)
			{
		//		printf("wynik = %d + %d*%d\n", macierzwynikowa[i][j],macierz1[i][k],macierz2[k][j]);

				macierzwynikowa[i][j]+=macierz1[i][k]*macierz2[k][j];
//				printf("wynik = %d + %d*%d\n", macierzwynikowa[i][j]+macierz1[j][k],macierz2[k][j]);
			}	
		printf("\n\n NEXT\n\n");	
		}
	}	
	
printf("\n\n\n MAcierz wynikowa \n\n");
  for(i=0;i<wiersze1;i++)
	{
		for(j=0;j<kolumny2;j++)
		{
			printf("%d\t", macierzwynikowa[i][j]);
		}
		printf("\n");
	}

}
	else
	{
		printf("\nPodane macierze nie da sie mnozyc\n");
	}

	return 0;
}
