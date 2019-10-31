#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(int argc,char *argv)

{
    int a,b,c;
    float D,x1,x2;
    int status;
    printf("Masukkan Nilai A=");
    scanf("%d,&A");
    printf("Masukkan Nilai B=");
    scanf("%d,&B");
    printf("Masukkan Nilai C=");
    scanf("%d,&C");
    D=(b*b)-(4*a*c);
    if(D>0)
    {
        x1=((-b)+sqrt(D))/(2*a);
        x2=((-b)-sqrt(D))/(2*a);
        status=TRUE;
    }
    else if(D==0)
    {
        x1=((-b)+sqrt(D))/(2*a);
        x2=x1;
        status=TRUE;
    }
    else
    {
        status=FALSE;
    }
    printf("\nAkar-akar persamaan yang didapatkan :\n");
    if(status==1)
    {
        printf("x1\t=%.2f\n",x1);
        printf("x2\t=%.2f\n",x2);
    }
    else
    {
        printf("x1 dan x2 imaginer");
    }
    system("PAUSE");
    return 0;
}
