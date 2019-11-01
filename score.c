#include<stdio.h>
#include<math.h>

int main()

{

float m1,m2,m3,m4,m5,per;

printf("Enter the N1 :");

scanf("%f",&m1);

printf("Enter the N2 :");

scanf("%f",&m2);

printf("Enter the N3 :");

scanf("%f",&m3);

printf("Enter the N4 :");

scanf("%f",&m4);

printf("Enter the N5 :");

scanf("%f",&m5);

per=(m1+m2+m3+m4+m5)/5;

if(per>=60)

printf("Ist div\n");

else if((per<60)&&(per>=50))

printf("IInd div\n");

else if((per<50)&&(per>=40))

printf("IIIrd div\n");

else if(per<40)

printf("Fail\n");

else

printf("Wrong in entering please again\n");

return 0;

}
