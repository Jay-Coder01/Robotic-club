#include <stdio.h>
#include <string.h>

// Structure to store patient information
struct Patient {
    int id;
    char name[100];
    int age;
    char gender[10];
    char disease[100];
    char doctor[100];
};

// Function prototypes
void addPatient();
void displayPatients();
void searchPatientByID();
void searchPatientByName();

// Global variables
struct Patient patients[100];
int patientCount = 0;

int main() {
    int choice;
    
    while (1) {
        printf("\nHospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient by ID\n");
        printf("4. Search Patient by Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                displayPatients();
                break;
            case 3:
                searchPatientByID();
                break;
            case 4:
                searchPatientByName();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    
    return 0;
}

// Function to add a new patient
void addPatient() {
    struct Patient newPatient;
    
    printf("Enter Patient ID: ");
    scanf("%d", &newPatient.id);
    printf("Enter Patient Name: ");
    scanf(" %[^\n]", newPatient.name); // To take string with spaces
    printf("Enter Patient Age: ");
    scanf("%d", &newPatient.age);
    printf("Enter Patient Gender: ");
    scanf("%s", newPatient.gender);
    printf("Enter Disease: ");
    scanf(" %[^\n]", newPatient.disease);
    printf("Enter Doctor Name: ");
    scanf(" %[^\n]", newPatient.doctor);
    
    patients[patientCount] = newPatient;
    patientCount++;
    
    printf("Patient added successfully.\n");
}

// Function to display all patients
void displayPatients() {
    if (patientCount == 0) {
        printf("No patients found.\n");
        return;
    }

    printf("\nPatient Records:\n");
    for (int i = 0; i < patientCount; i++) {
        printf("ID: %d\n", patients[i].id);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %s\n", patients[i].gender);
        printf("Disease: %s\n", patients[i].disease);
        printf("Doctor: %s\n", patients[i].doctor);
        printf("------------------------\n");
    }
}

// Function to search patient by ID
void searchPatientByID() {
    int id, found = 0;
    printf("Enter Patient ID to search: ");
    scanf("%d", &id);
    
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            printf("Patient found:\n");
            printf("ID: %d\n", patients[i].id);
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("Gender: %s\n", patients[i].gender);
            printf("Disease: %s\n", patients[i].disease);
            printf("Doctor: %s\n", patients[i].doctor);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Patient with ID %d not found.\n", id);
    }
}

// Function to search patient by name
void searchPatientByName() {
    char name[100];
    int found = 0;
    printf("Enter Patient Name to search: ");
    scanf(" %[^\n]", name); // To take string with spaces
    
    for (int i = 0; i < patientCount; i++) {
        if (strcmp(patients[i].name, name) == 0) {
            printf("Patient found:\n");
            printf("ID: %d\n", patients[i].id);
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("Gender: %s\n", patients[i].gender);
            printf("Disease: %s\n", patients[i].disease);
            printf("Doctor: %s\n", patients[i].doctor);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Patient with name '%s' not found.\n", name);
    }
}
