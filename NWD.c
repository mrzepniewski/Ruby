/*Marcin Rzepniewski gr.2E ;login :mrzepniewski ; data: 10.03.2013
7.3 Napisać funkcję o nazwie czy_wz_pierwsze posiadającą dwa parametry będące dodatnimi liczbami naturalnymi.
Funkcja ma zwracać wartość logiczną zawierającą informację, czy parametry są wobec siebie względnie pierwsze.
Przetestuj swoją funkcję - wczytaj dwie liczby naturalne dodatnie, wywołaj funkcję, aby sprawdzić, wczytane liczby są
względnie pierwsze, wypisz odpowiedni komunikat na ekran.
Wsk: Liczby a i b są względnie pierwsze jeżeli NWD(a,b)=1
Algorytm Euklidesa [wersja z resztą z dzielenia] (lista kroków):
K1: Dane są dwie dodatnie liczby naturalne a i b.
K2: r ← a mod b, gdzie mod to reszta z dzielenia
K3: Jeśli r = 0 to wyprowadź wynik NWD=b i zakończ algorytm
K4: a ← b; b ← r
K5: Idź do kroku K2*/
#include<stdio.h>
#include<stdlib.h>

NWD(int a, int b) 
{
	if (a==b) return a;
	else if(a>b) {
		a=a-b;
		return NWD(a,b);
	}
	else if(b>a) {
		b=b-a;
		return NWD(a,b);
	}
}

int main(){
	int a,b;	
	printf("Podaj a : ");
	scanf("%d",&a);
	if(a<=0){
		printf("Złe dane\n");
		exit (0);
	}	
	printf("Podaj b : ");
	scanf("%d",&b);
	if(b<=0){
		printf("Złe dane\n");
		exit (0);
	}
	if(NWD(a,b)==1){
		printf("Są względnie pierwsze\n");
	}
	else{
		printf("Nie są względnie pierwsze\n");
	}

}


