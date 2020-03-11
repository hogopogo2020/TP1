

#include <iostream>

void saisie();
int calculerPGCD(int a, int b);
void simplifier();
void afficher();


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

void saisie(){
    
    
    std :: cout << "Saisir le nombre de fractions a traiter : ";
    std :: cin >> nb;
    std :: cout << "\n";
    
    a = new int [nb];
    b = new int [nb];
    
    for (i=0;i<nb;i++){
        std :: cout << "Numerateur #" << i+1 << " : ";
        std :: cin >> a[i];
        std :: cout << "\n";
        std :: cout << "Denominateur #" << i+1 << " : ";
        std :: cin >> b[i];
        std :: cout << "\n";
        while(a[i]==0 || b[i]==0){
            std :: cout << "Veuillez saisir des valeurs plus grandes que 0.\n";
            std :: cout << "Numerateur #" << i+1 << " : ";
            std :: cin >> a[i];
            std :: cout << "\n";
            std :: cout << "Denominateur #" << i+1 << " : ";
            std :: cin >> b[i];
            std :: cout << "\n";
        }
    }
    
    

    
}

void afficher(){
    
    for (i=0;i<nb;i++){
        
        PGCD=calculerPGCD(a[i],b[i]);
        std :: cout << a[i] << "/" << b[i] << " >>> ";
        simplifier(a[i], b [i], PGCD);
        std :: cout << a[i] << "/" << b[i] << "\n";
    
        
        
    }
    delete [] a;
    delete [] b;
}


