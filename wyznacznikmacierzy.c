#include<stdio.h>

int main(void)
{
 		printf("1- macierz 2x2");
		printf("\n2-macierz 3x3");
		int wybor;
		int macierz2[2][2];
                int i,j;
		int macierz[3][3];
	        int det=0;
		int kontroler=0;
                while(1){	
			if(kontroler==0){
			scanf("%d", &wybor);
			switch(wybor){
				case 1:
		
						printf("Podawaj wartości do macierzy");
						for(i=0;i<2;i++){
								for(j=0;j<2;j++){
										scanf("%d", &macierz2[i][j]);
								}
						}
						printf("wpisana macierz:\n\n");
                   			     for(i=0;i<2;i++){
							for(j=0;j<2;j++){
									printf("%d", macierz2[i][j]);
							}
						printf("\n");
						}
						det=macierz2[0][0]*macierz2[1][1]-macierz2[0][1]*macierz2[1][0];
						printf("\ndet=%d\n", det);
						kontroler=1;
						break;
						case 2:
	                
						printf("metoda sarrusa\n");
						printf("Podawaj wartości do macierzy");
						for(i=0;i<3;i++){
							for(j=0;j<3;j++){
								scanf("%d", &macierz[i][j]);
							}
						}
						printf("wpisana macierz:\n\n");
			                        for(i=0;i<3;i++){
								for(j=0;j<3;j++){
									printf("%d", macierz[i][j]);
								}
							printf("\n");
						}
					
						det=(macierz[0][0]*macierz[1][1]*macierz[2][2]+macierz[0][1]*macierz[1][2]*macierz[2][0]+macierz[0][2]*macierz[1][0]*macierz[2][1])-(macierz[0][1]*macierz[1][0]*macierz[2][2]+macierz[0][0]*macierz[1][2]*macierz[2][1]+macierz[0][2]*macierz[1][1]*macierz[2][0]);
						printf("\ndet=%d\n", det);
						kontroler=1;
						break;
						default:
						printf("podana zostala zla opcja");
               					 break;
			}
			}
			else break;
		}
return 0;
}