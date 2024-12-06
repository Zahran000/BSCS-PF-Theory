#include <stdio.h>

struct Employee
    {
        int employeeCode;
        char employeeName[100];
        char dateOfJoining[100];
    };

void assignVal(struct Employee *em){
    printf("Enter the employee code: ");
    scanf("%d", &em->employeeCode);
    printf("Enter the employee name: ");
    scanf("%s", em->employeeName);
    printf("Enter the date of joining in format DD-MM-YYYY: ");
    scanf("%s", em->dateOfJoining);
}

int jobDuration(struct Employee *em, char current_date[50]){
    static count = 0;
    
    int day, month, year;
    int join_day, join_month, join_year;
    
    sscanf(current_date, "%d-%d-%d", &day, &month, &year);
    sscanf(em->dateOfJoining, "%d-%d-%d", &join_day, &join_month, &join_year);
    int duration = (year - join_year)*365 + (month - join_month)*30 + (day - join_day);
    if (duration > 1095){
        printf("Employee: %s with employee code %d has been working for more than 3 years\n", em->employeeName, em->employeeCode);
        count += 1;
    }
    return count;
}

int main(){
    int em_count;
    char current_date[50];
    struct Employee em1;
    
    struct Employee array[4];
    for(int i=0; i<4; i++){
        assignVal(&array[i]);
        
    }
    printf("Enter the current date in format DD-MM-YYYY: ");
    scanf("%s", current_date);
    for(int i = 0; i<4; i++){
        em_count = jobDuration(&array[i], current_date);
    }
    printf("The number of employees working for more than 3 years are: %d\n", em_count);
    
}