// main.cpp - program start, main menu and role menus.
// Owner: Module 1 (User Management)
#include "hostelhub.h"

void studentMenu(int s);
void staffMenu();
void wardenMenu();

void loadAll() {
    loadUsers();
    loadMess();
    loadLaundry();
    loadBilling();
}

void saveAll() {
    saveUsers();
    saveMess();
    saveLaundry();
    saveBilling();
}

int main() {
    loadAll();
    int choice;
    do {
        cout << "\n==============================================\n";
        cout << "        H O S T E L - H U B\n";
        cout << "   Mess In/Out . Laundry . Billing\n";
        cout << "==============================================\n";
        cout << " [1] Student login\n [2] Staff login\n [3] Warden login\n [0] Exit\n";
        cout << " Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int s = studentLogin();
                if (s != -1) studentMenu(s);
                break;
            }
            case 2:
                if (staffLogin()) staffMenu();
                break;
            case 3:
                if (wardenLogin()) wardenMenu();
                break;
            case 0:
                saveAll();
                cout << "Data saved. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 0);
    return 0;
}

void studentMenu(int s) {
    int choice;
    do {
        cout << "\nSTUDENT MENU - " << getStudentName(s) << "\n";
        cout << " [1] Mess in/out\n [2] My laundry\n [3] My bill\n [4] Complaints and ratings\n [0] Logout\n";
        cout << " Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: messStudentMenu(s);    break;
            case 2: laundryStudentMenu(s); break;
            case 3: showBill(s);           break;
            case 4: complaintMenu(s);      break;
            case 0: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}

void staffMenu() {
    int choice;
    do {
        cout << "\nSTAFF MENU\n [1] Mess: headcount and menu\n [2] Laundry orders\n [0] Logout\n";
        cout << " Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: messStaffMenu();    break;
            case 2: laundryStaffMenu(); break;
            case 0: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}

void wardenMenu() {
    int choice;
    do {
        cout << "\nWARDEN MENU\n [1] Manage users\n [2] Reports\n [3] Set rates\n [0] Logout\n";
        cout << " Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: wardenUserMenu();    break;
            case 2: wardenReportsMenu(); break;
            case 3: setRatesMenu();      break;
            case 0: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}
