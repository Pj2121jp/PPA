#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f =90.99f;
    double d =90.88;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp =  &d;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);


    void *vp = NULL;

    vp = &ch;
    printf("%c\n",*vp);

    vp = &i;
    printf("%d\n",*vp);

    vp = &ch;
    printf("%c\n",*vp);


    return 0;
}