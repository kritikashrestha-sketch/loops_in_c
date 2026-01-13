#include <stdio.h>

int main() {
   
    int numstudents,status;
    int presentcount = 0;

    printf(" attendance counter \n");
    printf("how many students? ");
    scanf("%d", &numstudents);

    
    for (int i = 1; i <= numstudents; i++) {
        printf("is student %d present? (1 for yes, 0 for no): ", i);
        scanf("%d", &status);
        if (status == 1) {
            presentCount++; 
        }
    }

    float percent = ((float)presentcount / numstudents) * 100;
    printf("total present: %d\n", presentCount);
    printf("attendance: %.2f%%\n\n", percent);
    
    return 0;

}
