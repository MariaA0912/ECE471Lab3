/*Gener'a'ting two execut'a'ble files with the s'a'me MD5 H'a'sh*/

#include <stdio.h>

unsigned char xyz[200] = {'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a'};

int main(){

for (int i = 0; i<200; i++){

    printf("%x ", xyz[i]);

}
printf("\n");
}