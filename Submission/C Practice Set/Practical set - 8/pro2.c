#include <stdio.h>

int main(){
    int unit;
    float rate;
    printf("Enter units: ");
    scanf("%d",&unit);
    printf("Enter rate: ");
    scanf("%f",&rate);
    Electricity_Bill_generator(unit,rate);
    return 0;
}

float Electricity_Bill_generator(int units,float rate_per_unit);
float bill;
float  Electricity_Bill_generator(int units,float rate_per_unit){
    int units;
    float rate_per_unit;
    printf("Enter units: ");
    scanf("%d",&units);
   

    if ((units >0) && (units <=100) )
    {
        rate_per_unit = 1.5;
        float bill = units * rate_per_unit;
    }
    else if ((units >100) && (units <=200) )
    {
        rate_per_unit = 2;
        float bill = units * rate_per_unit;
    }
    else if ((units >201) && (units <=300) )
    {
        rate_per_unit = 3;
        float bill = units * rate_per_unit;
    }
    else if (units >300  )
    {
        rate_per_unit = 5;
        float bill = units * rate_per_unit;
    }
    else{
        printf("Invalid units\n");
    }
    printf("Electricity bill: %.2f\n", bill);

}