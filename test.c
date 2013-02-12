/* Header */

#include <stdio.h>

/*Funktions-Prototypen*/

int add();
int sub();
int mult();
int div();

int main(void)
{
	int a=0, b=0, c=0, i=0, j=0;

	/*
	Oberhalb:	Variablen
	Unterhalb:	Menüausgabe
	*/
	system("color 0A");
	printf("\tWilkommen\n");

while(i < 1337)
{
	printf("\tWaehlen sie die Rechenart\n");
	printf("\n0--Addition\n1-->Subtraktion\n2-->Multiplikation\n3-->Division\n404-->Programm beenden\n");

	/*Abfrage welches Rechenverfahren*/
	scanf("%d",&j);
	fflush(stdin);

	/*Ausführen der Rechenverfahren*/
	switch (j)
	{
	case 0:
		add();
	break;
	
	case 1:
		sub();
	break;

	case 2:
		mult();
	break;

	case 3:
		div();
	break;

	case 404:
		i=1337;
	break;

	default:
		printf("falsche Eigabe, bitte wiederholen");
	break;
	}
}


	/*system("PAUSE");*/
	return 0;
}

/*Funktionen*/

int add()
{
	int a=0, b=0, c=0, dummy=0;
	printf("Geben sie Zahl 1 ein\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Geben sie Zahl 2 ein\n");
	scanf("%d",&b);
	fflush(stdin);
	c=a+b;
	printf("Ergebniss: %d\n",c);
}

int sub()
{
	int a=0, b=0, c=0, dummy=0;
	printf("Geben sie 2 Zahlen ein [Zahl 1 - Zahl 2] \n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Geben sie Zahl 2 ein\n");
	scanf("%d",&b);
	fflush(stdin);
	c=a-b;
	printf("Ergebniss: %d\n",c);

}

int div()
{
	float a=0, b=0, c=0, dummy=0;
	printf("Geben sie 2 Zahlen ein [Zahl 1 / Zahl 2]\n");
	scanf("%f",&a);
	fflush(stdin);
	printf("Geben sie Zahl 2 ein\n");
	scanf("%f",&b);
	fflush(stdin);
	c=a/b;
	printf("Ergebniss: %.3f\n",c);

}

int mult()
{
	int a=0, b=0, c=0, dummy=0;
	printf("Geben sie 2 Zahlen ein [Zahl 1 x Zahl 2]\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Geben sie Zahl 2 ein\n");
	scanf("%d",&b);
	fflush(stdin);
	c=a*b;
	printf("Ergebniss: %d\n",c);

}