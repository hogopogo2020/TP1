

#include <iostream>


int calculerPGCD(int a, int b);
void simplifier();


int i,nb=0,PGCD;
int* a;
int* b;

int main(int argc, const char * argv[]) {

}
int calculerPGCD(int a, int b){
    int div=1;
    PGCD=0;
    int min;
    
    if (a<b){
        min=a;
    }
    else
        min=b;

    for (div=1;div<=min;div++){
        if(a%div==0 && b%div==0)
            PGCD=div;
    }
    return PGCD;
}

void simplifier(int& a, int& b, int PGCD){
    a=a/PGCD;
    b=b/PGCD;

}

