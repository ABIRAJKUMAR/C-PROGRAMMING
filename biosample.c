#include <stdio.h>

int main() {
    char name[30], course[30], department[30], gender[30], address[30], phone_Number[30], email[30], nationality[30], institution[100];
    int age, birth;
    float sslc, hsc;

    printf("---------------------------------BIODATA---------------------------------\n");
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Birth Date: ");
    scanf("%d", &birth);
    printf("Gender: ");
    scanf("%s", gender);
    printf("Phone number: ");
    scanf("%s", phone_Number);
    printf("Email: ");
    scanf("%s", email);
    printf("Address: ");
    scanf("%s", address);
    printf("Nationality: ");
    scanf("%s", nationality);
    printf("Age: ");
    scanf("%d", &age);
    printf("------------------------------EDUCATION-----------------------------------------\n");
    printf("SSLC Percentage: ");
    scanf("%f", &sslc);
    printf("HSC Percentage: ");
    scanf("%f", &hsc);
    printf("Institution Name: ");
    scanf("%s", institution);
    printf("Course: ");
    scanf("%s", course);
    printf("Department: ");
    scanf("%s", department);

    return 0;
}
