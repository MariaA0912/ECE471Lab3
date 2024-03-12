
#include <stdio.h>
#include <stdbool.h>
//initializing array x and y
unsigned char x[200] = {'a','a','a','a','a','a','a','a','a','a',
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

unsigned char y[200] = {'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','b','a','a','a','a',
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
                        'a','a','a','a','a','a','a','a','b','a',
                        'a','a','a','a','a','a','a','a','a','a',
                        'a','a','a','a','a','a','a','a','a','a'};


int main(){
bool check = true; //boolean variable to check if arrays are the same or different. 

for (int i = 0; i<200; i++){

    if (x[i] != y[i]){

         check = false;//should run malicious code if the contents are not the same
    
    }
    

}

if (check == true){
    printf("Benign code is executing.....\n"); //benign code should ecomxecute if arrays are the same.

}
else{

    printf("Malicious code is executing....\n"); //malicious code should execute if the arrays are different. 

}

}