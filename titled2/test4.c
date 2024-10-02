#include <stdio.h>

int main() {
    char name[100];
    char phone[12];
    int id;
    float temperature, height, weight;



    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your phone number (11 digits): ");
    scanf("%11s", phone);

    do {
        printf("Enter patient ID (2 digits): ");
        scanf("%d", &id);
    } while (id < 10 || id > 99);

    do {
        printf("Enter temperature in Celsius (34.0 - 44.0): ");
        scanf("%f", &temperature);
    } while (temperature < 34.0 || temperature > 44.0);

    do {
        printf("Enter height in cm (140 - 230): ");
        scanf("%f", &height);
    } while (height < 140 || height > 230);

    do {
        printf("Enter weight in kg (40.0 - 140.0): ");
        scanf("%f", &weight);
    } while (weight < 40.0 || weight > 140.0);

    printf("Patient ID in decimal: %d, octal: %o, hexadecimal: %X\n", id, id, id);


    int F = (int)((temperature * 9 / 5) + 32);
    int K = (int)(temperature + 273.15);
    printf("Temperature: %.1f??C, %d??F, %dK\n", temperature, F, K);



    float bmi = weight / ((height / 100) * (height / 100));


    printf("The patient's name is %s, phone number is %s, patient ID is %d.\n", name, phone, id);
    if(temperature > 37.2 || temperature < 36.0) {
        printf("Temperature is %.1f??C, sick.\n", temperature);
    }else {
        printf("Temperature is %.1f??C, not sick.\n", temperature);
    }
    if (bmi < 16) {
        printf("Height is %.1fcm, weight is %.1fkg. BMI is %.1f, you are Severely Underweight.\n", height, weight, bmi);
    } else if (bmi < 18.5) {
        printf("Height is %.1fcm, weight is %.1fkg. BMI is %.1f, you are Underweight.\n", height, weight, bmi);
    } else if (bmi < 25) {
        printf("Height is %.1fcm, weight is %.1fkg. BMI is %.1f, you are Normal.\n", height, weight, bmi);
    } else if (bmi < 30) {
        printf("Height is %.1fcm, weight is %.1fkg. BMI is %.1f, you are Overweight.\n", height, weight, bmi);
    } else {
        printf("Height is %.1fcm, weight is %.1fkg. BMI is %.1f, you are Severely Overweight.\n", height, weight, bmi);
    }


    return 0;
}
