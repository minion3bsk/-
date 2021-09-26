#include <stdio.h>
#include <math.h>

#コードきたなすぎ
int main(void){
    int i;
    int div;
    for(i=2;i<=100;i++){
        printf("%d = ", i);
        int n = i;
        int left = 0;
        int d_i = (double)i;
        int sq = sqrt(d_i); 
            int div_count = 0;
        for(div=2;div<=i;div++){
            int count = 0;
            if(n != 0){
                left = 0;
                count = 0;
                while(left == 0){
                    left = n % div;
                    if(left == 0){
                        n = n / div;
                    }
                    count++;
                }
                    count--;
                    if(count!=0){
                        if(div_count>=1){
                            printf("・");
                        }
                        printf("%d^%d",div, count); 
                        div_count++;
                    }
                    int d_count = (double)count;
                    /* double div_n = pow(div, count);
                    div_n = (int)div_n;
                    n = i / div_n; */
            }
        }
        printf("\n");
    }



}

