#include <stdio.h>
int main(){
        char operator;
        float a, b;
        printf("Masukan operator(+,-,*,/):");
        scanf("%c", &operator);
        printf("masukan dua angka:");
        scanf("%f%f", &a, &b);
        switch(operator){
                case'+':
                        printf("Hasil:%.2f\n",a+b);
                        break;
                case'-':
                        printf("Hasil:%.2f\n",a-b);
                        break;
                case'*':
                       printf("Hasil:%.2f\n", a*b);
                       break;
                case'/':
                       if(b!=0)
                        printf("Hasil:%.2f\n",a/b);
                        else
                        printf("Error:Pembagian dengan Nol!\n");                        break;
                default:
                        printf("Operator tidak valid");
                        break;
        }
        return 0;
}
