// users.cpp - Module 1: User Management
// Owner: Ashman Shabir Awan (2026140)
// Data owned here: student, staff and warden accounts.
#include "hostelhub.h"

// Student data: parallel arrays (only this file touches them).
int    regNo[MAX_STUDENTS];
string stuName[MAX_STUDENTS];
string stuRoom[MAX_STUDENTS];
string stuPass[MAX_STUDENTS];
int    stuCount = 0;

void loadUsers() {
    // TODO: open data/students.txt, check it opened,
    //       read each line with getline(..., ',') into the arrays, stuCount++.
    //       Same for data/staff.txt and data/admin.txt.
    //       Then sort students by reg # (bubble sort) so findStudent works.
}

void saveUsers() {
    // TODO: write every student back to data/students.txt (ofstream, overwrite).
    //       Same for staff and admin.
}

int findStudent(int key) {
    // TODO: recursive binary search on regNo[0 .. stuCount-1]; return index or -1.
    //       Tip: write a helper search(low, high, key) that calls itself.
    return -1;
}

int studentLogin() {
    // TODO: ask for reg #, findStudent(), allow 3 password attempts.
    //       Return the student's index on success, -1 on failure.
    cout << "[Student login not built yet - using demo student]\n";
    return 0;
}

bool staffLogin() {
    // TODO: staff ID + password from staff.txt, 3 attempts.
    cout << "[Staff login not built yet - demo access]\n";
    return true;
}

bool wardenLogin() {
    // TODO: warden password from admin.txt, 3 attempts.
    cout << "[Warden login not built yet - demo access]\n";
    return true;
}

void wardenUserMenu() {
    // TODO: menu: register student (reject duplicate reg #), remove user
    //       (shift arrays, count--), change password; sort and save after changes.
    cout << "[Manage users - coming soon]\n";
}

string getStudentName(int s) {
    if (s >= 0 && s < stuCount) return stuName[s];
    return "Demo Student";      // TODO: remove once loading works
}

int getStudentRegNo(int s) {
    if (s >= 0 && s < stuCount) return regNo[s];
    return 0;
}

int getStudentCount() {
    return stuCount;
}
