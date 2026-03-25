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

static bool loginSystem() {
    char username[50] = { 0 };
    char password[50] = { 0 };

    printf_s("=== LOGIN ===\n");
    printf_s("Username: ");
    scanf_s("%49s", username, (unsigned)_countof(username));
    printf_s("Password: ");
    scanf_s("%49s", password, (unsigned)_countof(password));

    if (strcmp(username, "admin") == 0 && strcmp(password, "123456") == 0) {
        return true;
    }
    return false;
}

static void addStaff() {
    MedicalStaff newStaff = { 0 };

    printf_s("\nEnter Staff ID: ");
    scanf_s("%d", &newStaff.id);
    (void)getchar();

    printf_s("Enter Name: ");
    scanf_s("%49[^\n]", newStaff.name, (unsigned)_countof(newStaff.name));
    (void)getchar();

    printf_s("Enter Role: ");
    scanf_s("%49[^\n]", newStaff.role, (unsigned)_countof(newStaff.role));
    (void)getchar();

    printf_s("Enter Department: ");
    scanf_s("%49[^\n]", newStaff.department, (unsigned)_countof(newStaff.department));
    (void)getchar();

    printf_s("Enter Rating: ");
    scanf_s("%lf", &newStaff.rating);
    (void)getchar();

    printf_s("Enter Achievement: ");
    scanf_s("%99[^\n]", newStaff.achievement, (unsigned)_countof(newStaff.achievement));

    staffDatabase.push_back(newStaff);
    printf_s("Staff added successfully!\n");
}

static void viewStaffList() {
    int viewChoice = 0;
    printf_s("\n1. View All | 2. Filter by Dept\nSelection: ");
    scanf_s("%d", &viewChoice);
    (void)getchar();

    char filterDept[50] = { 0 };
    if (viewChoice == 2) {
        printf_s("Enter Dept to filter: ");
        scanf_s("%49[^\n]", filterDept, (unsigned)_countof(filterDept));
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
    scanf_s("%d", &targetId);

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
    if (!loginSystem()) {
        printf_s("Access Denied!\n");
        return 0;
    }

    int choice = 0;
    while (choice != 4) {
        printf_s("\n=== TEAM 4 MANAGEMENT ===\n");
        printf_s("1. Add | 2. View | 3. Delete | 4. Exit\nSelection: ");
        scanf_s("%d", &choice);

        if (choice == 1) addStaff();
        else if (choice == 2) viewStaffList();
        else if (choice == 3) deleteStaff();
    }
    return 0;
}