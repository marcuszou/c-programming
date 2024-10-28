#include <stdio.h>

int main() {

    // if-else
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    if (grade == 'A') {
        printf("Great!");
    }
    else if (grade == 'B') {
        printf("Not bad");
    }
    else if (grade == 'C') {
        printf("Study harder");
    }
    else if (grade == 'D') {
        printf("Danger");
    }
    else if (grade == 'F') {
        printf("FAILED");
    }
    else {
        printf("Enter a valid grade");
    }

    return 0;
}