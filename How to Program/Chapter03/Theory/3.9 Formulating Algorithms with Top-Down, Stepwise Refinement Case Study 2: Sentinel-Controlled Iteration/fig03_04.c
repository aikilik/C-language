// fig03_04.c
// Class-average program with sentinel-controlled iteration.
#include <stdio.h>

// function main begins program execution
int main(void) {
    // initialization phase
    int total = 0; // initialize total
    int counter = 0; // initialize loop counter

    // processing phase
    // get first grade from user
    printf("%s", "Enter grade, -1 to end: "); // prompt for input
    int grade = 0; // grade value
    scanf("%d", &grade); // read grade form user

    // loop while sentinel value not yet read from user
    while (grade != -1) {
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt for input
        scanf("%d", &grade); // read next grade
    } // end while

    // termination phase
    // if user entered at least one grade
    if (counter != 0) {

        // calculate average of all grade entered
        double average = (double) total / counter; // avoid truncation

        // display average with two digits of precision
        printf("Class average is %.2f\n", average);
    } // end if
    else { // if no grade were entered, outpu message
        puts("No grades were entered");
    } // end else
} // end function main