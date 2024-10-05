#include <stdio.h>

int main() {
    float C_Language, DBMS, DSA, Discrete_Maths, average;
    int fail = 0;

    printf("Enter marks for C Language, DBMS, DSA, Discrete Maths: ");
    scanf("%f %f %f %f", &C_Language, &DBMS, &DSA, &Discrete_Maths);

    if (C_Language < 40 || DBMS < 40 || DSA < 40 || Discrete_Maths < 40) {
        fail = 1;
    }

    average = (C_Language + DBMS + DSA + Discrete_Maths) / 4;
    
    printf("Average Marks: %.2f\n", average);

    if (fail) {
        printf("Grade: Fail\n");
    } else {
        printf("Grade: ");
        if (average >= 90) printf("A\n");
        else if (average >= 80) printf("B+\n");
        else if (average >= 70) printf("B\n");
        else if (average >= 60) printf("C+\n");
        else if (average >= 50) printf("C\n");
        else if (average >= 40) printf("D\n");
        else printf("Fail\n");
    }

    return 0;
}
