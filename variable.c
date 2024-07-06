#include <stdio.h>
#include <stdbool.h>

int main(){

char item[] = "Steak";
char grade = 'A';
int available = 3;
float price = 4.05;

printf("Item: %s\n",item);
printf("Grade: %c\n",grade);
printf("Price Lb/: $%f\n",price);
printf("In Stock: %d\n",available);

return 0;
}       