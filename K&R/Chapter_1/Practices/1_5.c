#include <stdio.h>

int main(){

    float Fahr, Cels;
    int lower = 0, upper = 300, step = 20;

    Fahr= upper;
    printf("Fahr Cels\n");
    while(Fahr >= lower){
        Cels = (5.0/9.0) * (Fahr - 32.0);
        printf("%3.0f %6.1f\n", Fahr, Cels);
        Fahr -= step;
    }
}
