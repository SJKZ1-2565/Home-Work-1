#include <iostream>

int main()
{
    int workingHours;
    int limitWokingHours = 6;
    int salary;

    printf("Enter your working time : ");
    scanf("%d",&workingHours);
    printf("Your working hour is %d" " hours\n",workingHours);

    if(workingHours > limitWokingHours) {
        int otHours = workingHours - limitWokingHours;
        salary = (workingHours-otHours) * (100) + (otHours * 200);
        printf("Your overtime working hours is %d\n",otHours);
        printf("Your salary is %d\n",salary);
    }
    else {
        salary = workingHours * 100;
        printf("Your salary is %d\n",salary);
    }
    
    return 0;
}
