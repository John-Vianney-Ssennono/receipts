#include <stdio.h>

int main() {
    // Declare variables
    int Numbread;
    int Numsoda;
    int Numspice;
    int NumfarmProduce;
    double total_cost;
    char currency = '$';

    // specific item costs
    float totalbread_cost;
    float totalspice_cost;
    float totalsoda_cost;
    float gross_cost;
    float tax;
    float tax_percentage = 0.0425;
    float totalfarmProduce_cost;
    float bread_cost = 9.99;
    float soda_cost = 1.99;
    float spice_cost = 1.00;
    float farmProduce_cost = 5.99;
    
    // Prompt and take data input
    printf("Enter the number of items: \n");
    scanf("%d", &Numbread);
    scanf("%d",&Numsoda);
    scanf("%d",  &Numspice);
    scanf("%d", &NumfarmProduce);


    //input prompt idiotproofing
    if (Numbread < 0){
        printf("Invalid number oif items, the number is negative.\n");
    } else {
        printf("%d\n", Numbread);
    }// idiotproofing Numbread
        if (Numsoda < 0) {
        printf("Invalid number oif items, the number is negative.\n");
    } else {
        printf("%d\n", Numsoda);
    }// idiotproofing Numsoda
        if (Numspice < 0) { 
        printf("Invalid number oif items, the number is negative.\n");
    } else {
        printf("%d\n", Numspice);
    }// idiotproofing Numspice
        if (NumfarmProduce < 0) {
        printf("Invalid number oif items, the number is negative.\n");
    } else {
        printf("%d\n", NumfarmProduce);
    }// idiotproofing NumfarmProduce

    // Calculate total after getting the input
    totalbread_cost = bread_cost* Numbread;
    totalsoda_cost = soda_cost * Numsoda;
    totalspice_cost = spice_cost * Numspice;
    totalfarmProduce_cost = farmProduce_cost * NumfarmProduce;
    
   //total cost calculation
    total_cost = bread_cost + soda_cost + spice_cost + farmProduce_cost;
    
    //tax calculation
    tax = tax_percentage * total_cost;

   // gross cost
   gross_cost = total_cost + tax;
    
    // Print variables
    printf("totalbread_cost: %.2f \n"); 
    printf("totalsoda_cost: %.2f \n");
    printf("totalspice_cost: %.2f \n");
    printf("totalfarmProduce_cost: %.2f \n");
    printf("\n");
    printf("total_cost: %.2f \n");
    printf("tax: %.2f \n");
    printf("\n");
    printf("gross_cost: %.2f \n");

    return 0;
}
