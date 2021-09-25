#include <stdio.h>
#include <math.h>

#コードきたなすぎ
int main(void){
    int count = 0;
    int i = 360;
    int n = i;
    int left = 0;
    int div;
    int d_i = (double)i;
    int sq = sqrt(d_i); 
    printf("%d\n", i);
    for(div=2;div<=sq;div++){
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
                    printf(":%dで%d回\n",div, count); 
                }
                int d_count = (double)count;
                /* double div_n = pow(div, count);
                div_n = (int)div_n;
                n = i / div_n; */
        }
    }


}

