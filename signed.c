#include<stdio.h>


int main()
    {
        int i = 10;
        signed int j = 20;
        signed int k = -30;

            unsigned int a = 40;
            //unsigned int b = -40;      //NA

                int x = 10;         // 10/- 4 byte
                short int y = 10;  // 8/-  2 byte
                long int z = 20;    //15/  8 byte

                    printf("%d\n",i);           //10
                    printf("%d\n",j);          //20
                    printf("%d\n",k);          //-30
                    printf("%d\n",a);          //40
                    

                        printf("sixe of x is : %d\n",sizeof(x));
                        printf("sixe of y is : %d\n",sizeof(y));
                        printf("sixe of z is : %d\n",sizeof(z));

    return 0;
}