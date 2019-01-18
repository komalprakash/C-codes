#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=4;
    double d=4.0;
    char s[]="Hackerrank";

    // Declare second integer, double, and String variables.
int l=12;
double j=4.0;
char k[100]="is the best place to learn and practice coding!";

    // Read and save an integer, double, and String to your variables.
    //printf("enter the integer,double value and string data type");
//scanf("%d",&l);
//scanf("%lf",&j);
//gets(k);
    // Print the sum of both integer variables on a new line.
int x;
x=i+l;
 printf("%d\n",x);
double y=d+j;

    // Print the sum of the double variables on a new line.
    printf("%lf\n",y);

    // Concatenate and print the String variables on a new line
strcat(s,k);
printf("%s\n",s);
    // The 's' variable above should be printed first.


return 0;
}
