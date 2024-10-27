#include <stdio.h>

int main() {

    // if-else
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A':
            printf("Great!");
            break;
        case 'B':
            printf("Not bad");
            break;
        case 'C':
            printf("Study harder");
            break;
        case 'D':
            printf("Danger");
            break;
        case 'F':
            printf("FAILED");
            break;
        default:
            printf("Enter a valid grade");
    }

    return 0;
}