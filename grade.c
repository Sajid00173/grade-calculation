#include <stdio.h>
#include <stdlib.h>

float main()
{
    float num;
    scanf("%f",&num);
    if(num<=100 && num >=80)
        printf("%.2F is A+ grade.",num);
    else if(num<80 && num >=70)
        printf("%.2F is A grade",num);
    else if(num <70 && num >=60)
        printf("%.2F is A- grade",num);
    else if(num <60 && num >=50)
        printf("%.2F is B grade",num);
    else if(num <50 && num >=40)
        printf("%.2F is C grade",num);
    else
         printf("%.2F is F grade",num);

    return 0;
}
