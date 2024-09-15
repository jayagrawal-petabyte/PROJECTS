/*
  AUTHOR - JAY AGRAWAL
  PURPOSE- LEARN NEW THINGS
  USED multiple loops
designed by me and as a begineer it is my first project in c 
doubts were resolved by Faculties and chat gpt*/


#include<stdio.h>
#include<math.h>

    int categ,conv;
    double inp,res;

void TIME(){
            printf("Enter 1 to convert Century to Decades \n");
            printf("Enter 2 to convert Decades to years \n");
            printf("Enter 3 to convert years to weeks \n");
            printf("Enter 4 to convert weeks to days \n");
            printf("Enter 5 to convert days to hours \n");
            printf("Enter 6 to convert hours to minute \n");
            printf("Enter 7 to convert minutes to seconds \n");
            printf("Enter 8 to convert seconds to milisecond \n");
            printf("Enter conversion you want\n");
            scanf("%d",&conv);

            printf("Enter input value\n");
            scanf("%lf",&inp);

            if (conv==1) res= inp*10;
            else if (conv==2) res= inp*10;
            else if (conv==3) res= inp*52;
            else if (conv==4) res= inp*7;
            else if (conv==5) res= inp*24;
            else if (conv==6) res= inp*60;
            else if (conv==7) res= inp*60;
            else if (conv==8) res= inp*1000;
            else{
            printf("Enter valid choice");
            return;}


            printf("Converted value is %.2lf\n",res);
}
void LENGTH()
{
    
            printf("Enter 1 to convert mile to kilometer \n");
            printf("Enter 2 to convert Kilometer to meter \n");
            printf("Enter 3 to convert meter to centimeter \n");
            printf("Enter 4 to convert centimeter to milimeter \n");
            printf("Enter 5 to convert foot to inches \n");
            printf("Enter 6 to convert inches to centimeter \n");
            printf("Enter conversion you want\n");
            scanf("%d",&conv);

            printf("Enter input value\n");
            scanf("%lf",&inp);

            if (conv==1) res= inp*1.609344;
            else if (conv==2) res= inp*1000;
            else if (conv==3) res= inp*100;
            else if (conv==4) res= inp*10;
            else if (conv==5) res= inp*12;
            else if (conv==6) res= inp*2.54;
            else{
            printf("Enter valid choice");
            return;}
            
            printf("Converted value is %.3lf\n",res);
        }
void MASS()
{
            printf("Enter 1 to convert tonne to kilogram \n");
            printf("Enter 2 to convert kilogram to gram \n");
            printf("Enter 3 to convert gram to miligram \n");
            printf("Enter 4 to convert kilogram to ounces \n");
            printf("Enter 5 to convert kilogram to Pounds \n");
            printf("Enter 6 to convert pound to ounces \n");
            printf("Enter conversion you want\n");
            scanf("%d",&conv);

            printf("Enter input value\n");
            scanf("%lf",&inp);

            if (conv==1) res= inp*1000;
            else if (conv==2) res= inp*1000;
            else if (conv==3) res= inp*1000;
            else if (conv==4) res= inp*35.27396;
            else if (conv==5) res= inp*2.20462;
            else if (conv==6) res= inp*16;
            else{
            printf("Enter valid choice");
            return;}
            
            printf("Converted value is %.3lf\n",res);
}
void TEMPERATURE()
{
            printf("Enter 1 to convert Centigrade to Fahrenheit \n");
            printf("Enter 2 to convert Fahrenheit to Centigrade \n");
            printf("Enter 3 to convert Kelvin to Fahrenheit \n");
            printf("Enter 4 to convert Fahrenheit to Kelvin \n");
            printf("Enter 5 to convert Centigrade to Kelvin \n");
            printf("Enter 6 to convert Kelvin to Centigrade \n");
            printf("Enter conversion you want\n");
            scanf("%d",&conv);

            printf("Enter input value\n");
            scanf("%lf",&inp);

            if (conv==1) res= (inp*9/5)+32;
            else if (conv==2) res= 5/9*(inp-32);
            else if (conv==3) res= 9/5*(inp-273.15)+32;
            else if (conv==4) res= 5/9*(inp-32)+273.15;
            else if (conv==5) res= inp+273.15;
            else if (conv==6) res= inp-273.15;
            else{
            printf("Enter valid choice");
            return;}
            
            printf("Converted value is %.3lf\n",res);
}
void VOLUME()
{
            printf("Enter 1 to convert cubic meter to cubic centimeter \n");
            printf("Enter 2 to convert cubic meter to liter \n");
            printf("Enter 3 to convert gallon to ounces \n");
            printf("Enter 4 to convert gallon to liter \n");
            printf("Enter conversion you want\n");
            scanf("%d",&conv);
            
            printf("Enter input value\n");
            scanf("%lf",&inp);

            if (conv==1) res= inp*pow(10,6);
            else if (conv==2) res= inp*1000;
            else if (conv==3) res= inp*128;
            else if (conv==4) res= inp*3.78541;
            else{
            printf("Enter valid choice");
            return;}
            
            printf("Converted value is %.3lf\n",res);
}
void AREA()
{
            printf("Enter 1 to convert hectare to square meter \n");
            printf("Enter 2 to convert square meter to square centimeter \n");
            printf("Enter 3 to convert square foot to square inches \n");
            printf("Enter 4 to convert acre to square feet \n");
            printf("Enter 5 to convert square meter to square feet \n");
            printf("Enter 6 to convert hectare to acre \n");
            printf("Enter conversion you want\n");
            scanf("%d",&conv);

            printf("Enter input value\n");
            scanf("%lf",&inp);

            if (conv==1) res= inp*pow(10,4);
            else if (conv==2) res= inp*pow(10,4);
            else if (conv==3) res= inp*144;
            else if (conv==4) res= inp*43560;
            else if (conv==5) res= inp*10.76;
            else if (conv==6) res= inp*2.47;
            else{
            printf("Enter valid choice");
            return;}
            
            printf("Converted value is %.3lf\n",res);
             
}

int main()
{
  
  for(;;)
   {
        
        printf("------------------------------------");
        printf("\n         CONVERSION TABLE        \n");
        printf("------------------------------------\n");
        printf("    Enter 1 to convert TIME\n");
        printf("    Enter 2 to convert LENGTH\n");
        printf("    Enter 3 to convert MASS\n");
        printf("    Enter 4 to convert TEMPERATURE \n");
        printf("    Enter 5 to convert  VOLUME\n");
        printf("    Enter 6 to convert  AREA\n");
        printf("    Enter 0 to EXIT\n");

        printf("    Enter category you want     \n");
        printf("-------------------------------------\n");
        scanf("%d",&categ);

        if(categ==0){
        printf("EXITING THE PROGRAM");
        break;}


        if(categ<1 || categ>6){
        printf("Enter valid category");
        continue;}

        switch (categ) {
            case 1:     TIME();             break;

            case 2:     LENGTH();           break;
        
            case 3:     MASS();             break;
        
            case 4:     TEMPERATURE();      break;
        
            case 5:     VOLUME();           break;
        
            case 6:     AREA();             break;
        
            default:
            printf("Enter valid category"); break;
        }
    }
 return 0;
}
