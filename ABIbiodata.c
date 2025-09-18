#include <stdio.h>
int main()
{
    char name[30],course[30],department[30],gender[30],address[30],phone_Number[30],email[30],nationality[30],institution[100],graduation_Year[30],cn[30];
    int age,birth;
    float sslc,hsc;




    printf("---------------------------------BIODATA---------------------------------\n");
    printf("Name:  ");
    scanf("%s",&name);
    printf("Birth Date: ");
    scanf("%s", &birth);
    printf("Gender: ");
    scanf("%s",&gender);
    printf("Phone_number: ");
    scanf("%s",&phone_Number);
    printf("Email: ");
    scanf("%s",&email);
    printf("Address: ");
    scanf("%s",&address);
    printf("Nationality: ");
    scanf("%s",&nationality);
    printf("Age:");
    scanf("%d",&age);
    printf("------------------------------EDUCATION-----------------------------------------\n");
    printf("SSLC Percentage: \n");
    scanf("%f",&sslc);
    printf("HSC Percentage: \n");
    scanf("%f",&hsc);
    printf("Institution Name: \n");
   getsf("%s",&institution);
 printf("Course: \n");
    getsf("%s",&course);
printf("Department: \n");
    scanf("%s",&department);
    return 0;
}
