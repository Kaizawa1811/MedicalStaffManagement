#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

struct MedicalStaff {
    int id;
    char name[50];
    char role[50];
    char department[50];
    double rating;
    char achievement[100];
};

static vector<MedicalStaff> staffDatabase;

static void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

static bool loginSystem() {
    char username[50] = { 0 };
    char password[50] = { 0 };

    while (true) {
        printf_s("\n=== LOGIN ===\n");
        printf_s("Username: ");
        scanf_s("%49s", username, (unsigned)_countof(username));
        clearBuffer();

        printf_s("Password: ");
        scanf_s("%49s", password, (unsigned)_countof(password));
        clearBuffer();

        if (strcmp(username, "admin") == 0 && strcmp(password, "123456") == 0) {
            printf_s("Login successful!\n");
            return true;
        }
        printf_s("Access Denied! Invalid credentials, please try again.\n");
    }
}

static void addStaff() {
    MedicalStaff newStaff = { 0 };

    printf_s("\nEnter Staff ID: ");
    while (scanf_s("%d", &newStaff.id) != 1) {
        printf_s("Invalid ID! Please enter a number: ");
        clearBuffer();
    }
    clearBuffer();

    printf_s("Enter Name: ");
    scanf_s("%49[^\n]", newStaff.name, (unsigned)_countof(newStaff.name));
    clearBuffer();

    printf_s("Enter Role: ");
    scanf_s("%49[^\n]", newStaff.role, (unsigned)_countof(newStaff.role));
    clearBuffer();

    printf_s("Enter Department: ");
    scanf_s("%49[^\n]", newStaff.department, (unsigned)_countof(newStaff.department));
    clearBuffer();

    printf_s("Enter Rating: ");
    while (scanf_s("%lf", &newStaff.rating) != 1) {
        printf_s("Invalid Rating! Please enter a number: ");
        clearBuffer();
    }
    clearBuffer();

    printf_s("Enter Achievement: ");
    scanf_s("%99[^\n]", newStaff.achievement, (unsigned)_countof(newStaff.achievement));
    clearBuffer();

    staffDatabase.push_back(newStaff);
    printf_s("Staff added successfully!\n");
}

static void viewStaffList() {
    int viewChoice = 0;
    printf_s("\n1. View All | 2. Filter by Dept\nSelection: ");
    if (scanf_s("%d", &viewChoice) != 1) {
        viewChoice = 1;
    }
    clearBuffer();

    char filterDept[50] = { 0 };
    if (viewChoice == 2) {
        printf_s("Enter Dept to filter: ");
        scanf_s("%49[^\n]", filterDept, (unsigned)_countof(filterDept));
        clearBuffer();
    }

    printf_s("\n--- LIST ---\n");
    for (size_t i = 0; i < staffDatabase.size(); ++i) {
        if (viewChoice == 2 && strcmp(staffDatabase[i].department, filterDept) != 0) continue;
        printf_s("ID: %d | Name: %s | Role: %s | Dept: %s | Rating: %.1f | Achievement: %s\n",
            staffDatabase[i].id, staffDatabase[i].name, staffDatabase[i].role,
            staffDatabase[i].department, staffDatabase[i].rating, staffDatabase[i].achievement);
    }
}

static void deleteStaff() {
    int targetId = 0;
    printf_s("\nEnter ID to delete: ");
    if (scanf_s("%d", &targetId) != 1) {
        printf_s("Invalid ID format!\n");
        clearBuffer();
        return;
    }
    clearBuffer();

    for (auto it = staffDatabase.begin(); it != staffDatabase.end(); ++it) {
        if (it->id == targetId) {
            staffDatabase.erase(it);
            printf_s("Deleted successfully!\n");
            return;
        }
    }
    printf_s("ID not found!\n");
}

int main() {
    loginSystem();

    int choice = 0;
    while (choice != 4) {
        printf_s("\n=== MEDICALSTAFF MANAGEMENT ===\n");
        printf_s("1. Add | 2. View | 3. Delete | 4. Exit\nSelection: ");
        if (scanf_s("%d", &choice) != 1) {
            choice = 0;
        }
        clearBuffer();

        switch (choice) {
        case 1:
            addStaff();
            break;
        case 2:
            viewStaffList();
            break;
        case 3:
            deleteStaff();
            break;
        case 4:
            printf_s("Exiting System...\n");
            break;
        default:
            printf_s("Invalid choice! Please select a number from 1 to 4.\n");
            break;
        }
    }
    return 0;
}
