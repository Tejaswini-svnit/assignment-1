#include<stdio.h>
int main(){

    float celcius, farenheit;

    printf("temperature in farenheit:");
    scanf("%f",&farenheit);

    celcius= 5*(farenheit-32)/9;
    printf("temperature in celcius %f", celcius);




    return 0;
}