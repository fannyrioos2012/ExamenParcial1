#include <stdio.h>
int main()
{
int i=1;
while (i==1)
{
int d;
printf ("�Cual tabla de multiplicar quieres saber?\n");
scanf ("%d", &d);
switch (d)
{
case 1:
printf ("1 x 1 = 1\n");
printf ("1 x 2 = 2\n");
printf ("1 x 3 = 3\n");
printf ("1 x 4 = 4\n");
printf ("1 x 5 = 5\n");
printf ("1 x 6 = 6\n");
printf ("1 x 7 = 7\n");
printf ("1 x 8 = 8\n");
printf ("1 x 9 = 9\n");
printf ("1 x 10 = 10\n");
break;
case 2:
printf ("2 x 1 = 2\n");
printf ("2 x 2 = 4\n");
printf ("2 x 3 = 6\n");
printf ("2 x 4 = 8\n");
printf ("2 x 5 = 10\n");
printf ("2 x 6 = 12\n");
printf ("2 x 7 = 14\n");
printf ("2 x 8 = 16\n");
printf ("2 x 9 = 18\n");
printf ("2 x 10 = 20\n");
break;
case 3:
printf ("3 x 1 = 3\n");
printf ("3 x 2 = 6\n");
printf ("3 x 3 = 9\n");
printf ("3 x 4 = 12\n");
printf ("3 x 5 = 15\n");
printf ("3 x 6 = 18\n");
printf ("3 x 7 = 21\n");
printf ("3 x 8 = 24\n");
printf ("3 x 9 = 27\n");
printf ("3 x 10 = 30\n");
break;
case 4:
printf ("4 x 1 = 4\n");
printf ("4 x 2 = 8\n");
printf ("4 x 3 = 12\n");
printf ("4 x 4 = 16\n");
printf ("4 x 5 = 20\n");
printf ("4 x 6 = 24\n");
printf ("4 x 7 = 28\n");
printf ("4 x 8 = 32\n");
printf ("4 x 9 = 36\n");
printf ("4 x 10 = 40\n");
break;
case 5:
printf ("5 x 1 = 5\n");
printf ("5 x 2 = 10\n");
printf ("5 x 3 = 15\n");
printf ("5 x 4 = 20\n");
printf ("5 x 5 = 25\n");
printf ("5 x 6 = 30\n");
printf ("5 x 7 = 35\n");
printf ("5 x 8 = 40\n");
printf ("5 x 9 = 45\n");
printf ("5 x 10 = 50\n");
break;
case 6:
printf ("6 x 1 = 6\n");
printf ("6 x 2 = 12\n");
printf ("6 x 3 = 18\n");
printf ("6 x 4 = 24\n");
printf ("6 x 5 = 30\n");
printf ("6 x 6 = 36\n");
printf ("6 x 7 = 42\n");
printf ("6 x 8 = 48\n");
printf ("6 x 9 = 54\n");
printf ("6 x 10 = 60\n");
break;
case 7:
printf ("7 x 1 = 7\n");
printf ("7 x 2 = 14\n");
printf ("7 x 3 = 21\n");
printf ("7 x 4 = 28\n");
printf ("7 x 5 = 35\n");
printf ("7 x 6 = 42\n");
printf ("7 x 7 = 49\n");
printf ("7 x 8 = 56\n");
printf ("7 x 9 = 63\n");
printf ("7 x 10 = 70\n");
break;
case 8:
printf ("8 x 1 = 8\n");
printf ("8 x 2 = 16\n");
printf ("8 x 3 = 24\n");
printf ("8 x 4 = 32\n");
printf ("8 x 5 = 40\n");
printf ("8 x 6 = 48\n");
printf ("8 x 7 = 56\n");
printf ("8 x 8 = 64\n");
printf ("8 x 9 = 72\n");
printf ("8 x 10 = 80\n");
break;
case 9:
printf ("9 x 1 = 9\n");
printf ("9 x 2 = 18\n");
printf ("9 x 3 = 27\n");
printf ("9 x 4 = 36\n");
printf ("9 x 5 = 45\n");
printf ("9 x 6 = 54\n");
printf ("9 x 7 = 63\n");
printf ("9 x 8 = 72\n");
printf ("9 x 9 = 81\n");
printf ("9 x 10 = 90\n");
break;
case 10:
printf ("10 x 1 = 10\n");
printf ("10 x 2 = 20\n");
printf ("10 x 3 = 30\n");
printf ("10 x 4 = 40\n");
printf ("10 x 5 = 50\n");
printf ("10 x 6 = 60\n");
printf ("10 x 7 = 70\n");
printf ("10 x 8 = 80\n");
printf ("10 x 9 = 90\n");
printf ("10 x 10 = 100\n");
break;
default:
printf ("Escribe un n�mero del 1 al 10\n");
break;
}
}
return 0;
}
