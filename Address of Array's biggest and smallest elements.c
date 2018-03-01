#include <stdio.h>

void findMax(int array[]){
int i,*pmax,max;
pmax=&array[0];
max=array[0];

for(i=1;i<=9;i++){
if(array[i]>max){
pmax=&array[i];
max=array[i];
}}
printf("En buyuk eleman: %d \tAdresi:%p ve %u ",max,pmax,pmax); //The biggest element and its address
}

void findMin(int array[]){
int i,*pmin,min;
pmin=&array[0];
min=array[0];

for(i=1;i<=9;i++){
if(array[i]<min){
pmin=&array[i];
min=array[i];
}}
printf("\nEn kucuk eleman: %d \tAdresi:%p ve %u",min,pmin,pmin); //The smallest element and its address
}

int main()
{
    int j,array[10];
    for(j=0;j<=9;j++){
    printf("Deger giriniz:"); //Enter a value (for array elements)
    scanf("%d",&array[j]);}

    findMax(array);
    findMin(array);

    return 0;
}
