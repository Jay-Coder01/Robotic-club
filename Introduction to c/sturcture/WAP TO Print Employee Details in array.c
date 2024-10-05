#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    char designation[50];
    float salary;
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];  // Array of Employee structures

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Name: ");
        getchar(); // To consume the newline character left by scanf
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        printf("Enter Designation: ");
        fgets(employees[i].designation, sizeof(employees[i].designation), stdin);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Print employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s", employees[i].name);
        printf("Designation: %s", employees[i].designation);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
