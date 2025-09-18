 int main()
 {
 double weight, height, bmi;
 printf("Enter weight (kg): ");
 scanf("%lf", &weight);
 printf("Enter height (m): ");
 scanf("%lf", &height);
 bmi = weight / (height * height);
 printf("BMI: %lf\n", bmi);
 return 0;
 }
