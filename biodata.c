#include <stdio.h>
int main()
{
    char name[30],course[30],department[30],gender[30],address[30],email[30],nationality[30],institution[100],skill[30],state[30],intrests[30],hobbies[30];
    int age,birth,phone_Number,graduation_Year,pincode,height,weight;
    float sslc, hsc;
    printf("---------------------------------BIODATA---------------------------------\n");
    printf("Name: ");
    scanf("%s",&name);
    printf("Birth Date: ");
    scanf("%s", &birth);
    printf("Gender: ");
    scanf("%s",&gender);
    printf("Phone_number: ");
    scanf("%s",&phone_Number);
    printf("Email: ");
    scanf("%s",&email);
    printf("Height: ");
    scanf("%i",&height);
    printf("Weight: ");
    scanf("%i",&weight);
    printf("Address: ");
    scanf("%s",&address);
    printf("Pincode: ");
    scanf("%i",&pincode);
    printf("State: ");
    scanf("%s",&state);
    printf("Nationality: ");
    scanf("%s",&nationality);
    printf("Age:");
    scanf("%i",&age);
    printf("------------------------------EDUCATION-----------------------------------------\n");
    printf("SSLC Percentage: ");
    scanf("%f",&sslc);
    printf("HSC Percentage: ");
    scanf("%f",&hsc);
    printf("Institution Name: ");
    scanf("%s",&institution);
    printf("Course: ");
    scanf("%s",&course);
    printf("Department: ");
    scanf("%s",&department);
    printf("Year of Graduation:");
    scanf("%i",&graduation_Year);
    printf("------------------------------SKILLS-----------------------------------------\n");
    printf("Skill 1:");
    scanf("%s",&skill);
    printf("Skill 2:");
    scanf("%s",&skill);
    printf("Skill 3:");
    scanf("%s",&skill);
    printf("------------------------------INTRESTS and HOBBIES-----------------------------------------\n");
    printf("Intrests:");
    scanf("%s",&intrests);
    printf("Hobbies:");
    scanf("%s",&hobbies);

    return 0;
}
