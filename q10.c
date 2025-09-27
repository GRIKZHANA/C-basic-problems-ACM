
 #include <stdio.h>
int main() {
    float km, meters, centimeters, millimeters;

    
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    
    meters = km * 1000;
    centimeters = km * 100000;
    millimeters = km * 1000000;

    
    printf("%.2f km = %.2f meters\n", km, meters);
    printf("%.2f km = %.2f centimeters\n", km, centimeters);
    printf("%.2f km = %.2f millimeters\n", km, millimeters);

    return 0;
}
 
