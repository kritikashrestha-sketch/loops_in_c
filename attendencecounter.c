#include <stdio.h>

int main() {
   
    int numStudents, status;
    int presentCount = 0;

    printf(" Attendance Counter \n");
    printf("How many students? ");
    scanf("%d", &numStudents);

    
    for (int i = 1; i <= numStudents; i++) {
        printf("Is student %d present? (1 for Yes, 0 for No): ", i);
        scanf("%d", &status);
        if (status == 1) {
            presentCount++; 
        }
    }

    float percent = ((float)presentCount / numStudents) * 100;
    printf("Total Present: %d\n", presentCount);
    printf("Attendance: %.2f%%\n\n", percent);
    
    return 0;
}