#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <Windows.h>

using namespace std;

struct SystemDate {
    int day;
    int month;
    int year;
};

struct MedicalStaff {
    int id;
    char name[50];
    char department[50];
    double salary;
    int kpi;
};

struct Medicine {
    char name[50];
    int stock;
    SystemDate expDate;
};

struct PatientCRM {
    char name[50];
    SystemDate dob;
};

static SystemDate currentDate = { 30, 3, 2026 };

static vector<MedicalStaff> staffDB;
static int qBHYT = 0;
static int qSRV = 1000;

static vector<Medicine> inventory = {
    {"Paracetamol", 10, {15, 4, 2026}},
    {"Amoxicillin", 50, {30, 4, 2026}},
    {"Vitamin C", 5, {10, 10, 2026}},
    {"Paracetamol", 100, {20, 12, 2026}}
};
static vector<PatientCRM> patients = {
    {"Nguyen Van A", {30, 3, 1990}},
    {"Le Thi B", {15, 6, 1985}}
};

static void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

static int getValidChoice(int min, int max) {
    int choice;
    while (true) {
        printf_s("Choice (%d-%d): ", min, max);
        if (scanf_s("%d", &choice) == 1 && choice >= min && choice <= max) {
            clearBuffer();
            return choice;
        }
        printf_s("Invalid choice! Please try again.\n");
        clearBuffer();
    }
}

static void printHeader(const char* title) {
    system("cls");
    printf_s("==================================================================\n");
    printf_s(" %s \n", title);
    printf_s("==================================================================\n");
}

static void addStaff() {
    printHeader("ADD NEW MEDICAL STAFF");
    MedicalStaff s = { 0 };
    printf_s("Enter ID: ");
    while (scanf_s("%d", &s.id) != 1) {
        printf_s("Invalid ID! Enter a number: ");
        clearBuffer();
    }
    clearBuffer();
    printf_s("Enter Full Name: ");
    scanf_s("%49[^\n]", s.name, (unsigned)_countof(s.name));
    clearBuffer();
    printf_s("Enter Department: ");
    scanf_s("%49[^\n]", s.department, (unsigned)_countof(s.department));
    clearBuffer();
    printf_s("Enter Base Salary (VND): ");
    scanf_s("%lf", &s.salary);
    clearBuffer();
    printf_s("Enter KPI ");
    s.kpi = getValidChoice(1, 100);
    staffDB.push_back(s);
    printf_s("\nStaff record created successfully! Press Enter...");
    (void)getchar();
}

static void viewStaff() {
    printHeader("VIEW STAFF DATABASE");
    if (staffDB.empty()) {
        printf_s("Database is empty.\n");
    }
    else {
        printf_s("%-5s | %-20s | %-15s | %-15s | %-5s\n", "ID", "Name", "Department", "Salary (VND)", "KPI");
        printf_s("----------------------------------------------------------------------\n");
        for (const auto& s : staffDB) {
            printf_s("%-5d | %-20s | %-15s | %-15.0f | %-5d\n", s.id, s.name, s.department, s.salary, s.kpi);
        }
    }
    printf_s("\nPress Enter to return...");
    (void)getchar();
}

static void searchStaff() {
    printHeader("SEARCH STAFF BY DEPARTMENT");
    char searchDept[50] = { 0 };
    printf_s("Enter Department name to filter: ");
    scanf_s("%49[^\n]", searchDept, (unsigned)_countof(searchDept));
    clearBuffer();
    bool found = false;
    printf_s("\n%-5s | %-20s | %-15s | %-15s | %-5s\n", "ID", "Name", "Department", "Salary (VND)", "KPI");
    printf_s("----------------------------------------------------------------------\n");
    for (const auto& s : staffDB) {
        if (strcmp(s.department, searchDept) == 0) {
            printf_s("%-5d | %-20s | %-15s | %-15.0f | %-5d\n", s.id, s.name, s.department, s.salary, s.kpi);
            found = true;
        }
    }
    if (!found) printf_s("No staff found in this department.\n");
    printf_s("\nPress Enter to return...");
    (void)getchar();
}

static void updateStaff() {
    printHeader("UPDATE STAFF KPI & SALARY");
    int searchId;
    printf_s("Enter Staff ID to update: ");
    scanf_s("%d", &searchId);
    clearBuffer();
    for (auto& s : staffDB) {
        if (s.id == searchId) {
            printf_s("Current Salary: %.0f VND | Current KPI: %d\n", s.salary, s.kpi);
            printf_s("Enter New Salary (VND): ");
            scanf_s("%lf", &s.salary);
            clearBuffer();
            printf_s("Enter New KPI: ");
            s.kpi = getValidChoice(1, 100);
            printf_s("\nUpdate successful! Press Enter...");
            (void)getchar();
            return;
        }
    }
    printf_s("ID not found. Press Enter...");
    (void)getchar();
}

static void deleteStaff() {
    printHeader("DELETE STAFF RECORD");
    int searchId;
    printf_s("Enter Staff ID to delete: ");
    scanf_s("%d", &searchId);
    clearBuffer();
    for (auto it = staffDB.begin(); it != staffDB.end(); ++it) {
        if (it->id == searchId) {
            staffDB.erase(it);
            printf_s("\nRecord deleted successfully. Press Enter...");
            (void)getchar();
            return;
        }
    }
    printf_s("ID not found. Press Enter...");
    (void)getchar();
}

static void operateQueue() {
    printHeader("MODULE 2: QUEUE MANAGEMENT");
    printf_s("Select Examination Type:\n");
    printf_s("1. Service Examination (1001+)\n");
    printf_s("2. Health Insurance - BHYT (0001+)\n");

    int queueType = getValidChoice(1, 2);

    printf_s("\nGenerating Queue Ticket...\n");
    printf_s("--------------------------------------\n");
    if (queueType == 2) {
        qBHYT++;
        printf_s("TICKET: #%04d\n", qBHYT);
        printf_s("Type: BHYT Examination\n");
    }
    else {
        qSRV++;
        printf_s("TICKET: #%d\n", qSRV);
        printf_s("Type: Service Examination\n");
    }
    printf_s("Please proceed to Waiting Area.\n");
    printf_s("--------------------------------------\n");
    printf_s("Press Enter to return...");
    (void)getchar();
}

static void manageBilling() {
    printHeader("MODULE 3: FINANCE & BILLING");
    double fee;
    printf_s("Enter Examination Fee (VND): ");
    scanf_s("%lf", &fee);

    printf_s("Does patient have Health Insurance?\n1. Yes (80%% reduction)\n2. No\n");
    int hasInsurance = getValidChoice(1, 2);

    double finalBill = (hasInsurance == 1) ? (fee * 0.2) : fee;
    printf_s("\n--- INVOICE SUMMARY ---\n");
    printf_s("Base Fee: %.0f VND\n", fee);
    printf_s("Insurance Coverage: %s\n", (hasInsurance == 1) ? "80%" : "0%");
    printf_s("TOTAL PAYABLE: %.0f VND\n", finalBill);
    printf_s("-----------------------\n");

    printf_s("Confirm Transaction?\n1. Complete\n2. Cancel\n");
    int confirmAction = getValidChoice(1, 2);

    if (confirmAction == 1) {
        printf_s("\nStatus: Payment Completed.\n");
        printf_s("[CRM] Auto-sending Satisfaction Survey...\n");
    }
    else {
        printf_s("\nStatus: Transaction Cancelled.\n");
    }

    printf_s("\nPress Enter to return...");
    (void)getchar();
}

static void showInventoryTable(const vector<Medicine>& list) {
    printf_s("%-15s | %-6s | %-12s | %-10s | %-10s\n", "Medicine", "Stock", "Expiry", "Exp Alert", "Stock Alert");
    printf_s("----------------------------------------------------------------------\n");
    for (const auto& m : list) {
        const char* expX = " ";
        const char* stockX = " ";
        int daysDiff = (m.expDate.year - currentDate.year) * 365 + (m.expDate.month - currentDate.month) * 30 + (m.expDate.day - currentDate.day);
        if (daysDiff <= 30) expX = "[X]";
        if (m.stock < 15) stockX = "[X]";
        printf_s("%-15s | %-6d | %02d/%02d/%4d |    %-7s |    %-7s\n", m.name, m.stock, m.expDate.day, m.expDate.month, m.expDate.year, expX, stockX);
    }
}

static void managePharmacy() {
    int action = 0;
    while (action != 4) {
        printHeader("MODULE 4: PHARMACY & INVENTORY");
        printf_s("System Current Date: %02d/%02d/%04d\n\n", currentDate.day, currentDate.month, currentDate.year);
        showInventoryTable(inventory);

        printf_s("\nOptions:\n1. Add / Restock Medicine\n2. Filter by Name\n3. View All\n4. Return\n");
        action = getValidChoice(1, 4);

        if (action == 1) {
            Medicine newMed;
            printf_s("\nEnter Medicine Name: ");
            scanf_s("%49[^\n]", newMed.name, (unsigned)_countof(newMed.name)); clearBuffer();
            printf_s("Enter Stock Quantity: ");
            scanf_s("%d", &newMed.stock); clearBuffer();
            printf_s("Enter Expiry Date (DD MM YYYY): ");
            scanf_s("%d %d %d", &newMed.expDate.day, &newMed.expDate.month, &newMed.expDate.year); clearBuffer();

            bool found = false;
            for (auto& m : inventory) {
                if (_stricmp(m.name, newMed.name) == 0 && m.expDate.day == newMed.expDate.day && m.expDate.month == newMed.expDate.month && m.expDate.year == newMed.expDate.year) {
                    m.stock += newMed.stock;
                    found = true;
                    printf_s("\nStock updated successfully!\n");
                    break;
                }
            }
            if (!found) inventory.push_back(newMed);
            printf_s("Press Enter..."); (void)getchar();
        }
        else if (action == 2) {
            char fName[50];
            printf_s("Enter name to search: ");
            scanf_s("%49[^\n]", fName, (unsigned)_countof(fName)); clearBuffer();
            vector<Medicine> filtered;
            for (const auto& m : inventory) {
                if (strstr(m.name, fName)) filtered.push_back(m);
            }
            printHeader("FILTER RESULTS");
            showInventoryTable(filtered);
            printf_s("\nPress Enter..."); (void)getchar();
        }
    }
}

static void executeCRM() {
    printHeader("MODULE 5: CUSTOMER CARE");
    printf_s("System Current Date: %02d/%02d/%04d\n\n", currentDate.day, currentDate.month, currentDate.year);
    printf_s("Scanning patient database for birthdays matching today...\n");
    int bdayCount = 0;
    for (const auto& p : patients) {
        if (p.dob.day == currentDate.day && p.dob.month == currentDate.month) {
            printf_s("-> [MATCH] Sending Happy Birthday SMS to: %s\n", p.name);
            bdayCount++;
        }
    }
    if (bdayCount == 0) printf_s("-> No patient birthdays found for today.\n");
    printf_s("\nPress Enter to return...");
    (void)getchar();
}

static void staffManagementMenu() {
    int choice = 0;
    while (choice != 6) {
        printHeader("MODULE 1: MEDICAL STAFF MANAGEMENT");
        printf_s("1. Add Medical Staff\n2. View Staff Database\n3. Search by Department\n4. Update KPI & Salary\n5. Delete Staff\n6. Back\n");
        choice = getValidChoice(1, 6);
        switch (choice) {
        case 1: addStaff(); break;
        case 2: viewStaff(); break;
        case 3: searchStaff(); break;
        case 4: updateStaff(); break;
        case 5: deleteStaff(); break;
        }
    }
}

int main() {
    int choice = 0;
    while (choice != 6) {
        printHeader("HOSPITAL MANAGER DASHBOARD");
        printf_s("1. Manage Medical Staff\n2. Operate Queue Management\n3. Manage Finance & Billing\n4. Manage Pharmacy Inventory\n5. Execute Customer Care\n6. Exit System\n");
        choice = getValidChoice(1, 6);
        switch (choice) {
        case 1: staffManagementMenu(); break;
        case 2: operateQueue(); break;
        case 3: manageBilling(); break;
        case 4: managePharmacy(); break;
        case 5: executeCRM(); break;
        case 6: printf_s("Exiting...\n"); break;
        }
    }
    return 0;
}
