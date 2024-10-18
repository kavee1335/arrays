//a program to calculate bill of electricity using functions 
#include<stdio.h>

float paya(float unit_consumed);
float payb( float unit_consumed);
float payc( float unit_consumed);
float payd( float unit_consumed);
float paye(float charges);
float payf(float total_charges);

int main(){

float unit_consumed,charges,total_charges,total,total_pay;
int customer_ID;
char customer_name[50];


//we prompt the user to enter the customer id
printf("Enter customer ID :");
scanf("%d",&customer_ID);

//prompting the user to enter customer name
printf("Enter user name :");
scanf("%s",&customer_name);

//prompting the user to enter unit consumed 
printf("Enter unit consumed :");
scanf("%f",&unit_consumed);

//using if else to do the confusions
if(unit_consumed <= 199){
charges = paya(unit_consumed);

}

else if(unit_consumed >= 200 &&unit_consumed < 400){
charges = payb(unit_consumed);

}

else if(unit_consumed >= 400 &&unit_consumed <600){
charges = payc(unit_consumed);

}

else if(unit_consumed >= 600){
charges = payd(unit_consumed);

}

if (charges > 400){
total_pay = paye(total_charges);
}
printf("%d\n", customer_ID);
printf("%s\n", customer_name);
printf("%f\n",unit_consumed);
printf("%f\n",charges);
printf("%f\n",total_pay);

return 0; 
}
float charges,total,total_charges,unit_consumed;
float paya( float unit_consumed){
//float charges;
charges = unit_consumed * 1.20;
return charges;
}

float payb(float unit_consumed){
//float charges;
charges = unit_consumed * 1.50;
return charges;
}

float payc(float unit_consumed){
//float charges;
charges = unit_consumed * 1.80;
return charges;
}

float payd(float charges){
//float charges;
charges = unit_consumed * 2.00;
return charges;
}

float paye(float charges){
total = charges * 0.15;
return total;
}

float payf(float total){
total_charges = total + charges;
return total_charges;
}