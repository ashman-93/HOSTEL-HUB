// mess.cpp - Module 2: Mess Management
// Owner: Maaz Gohar (2026320)
// Data owned here: attendance[student][day], guest meals, weekly menu.
#include "hostelhub.h"

int    attendance[MAX_STUDENTS][DAYS];   // 1 = IN, 0 = OUT
int    guestMeals[MAX_STUDENTS];
string menu[7][3];                       // day x (breakfast, lunch, dinner)

void loadMess() {
    // TODO: read data/mess_nov.txt into attendance[][] and guestMeals[],
    //       read data/menu.txt into menu[7][3]. If a file is missing, mark everyone IN.
}

void saveMess() {
    // TODO: write attendance, guest meals and menu back to their files.
}

void messStudentMenu(int s) {
    // TODO: show this student's calendar, mark a day / range OUT (cutoff: tomorrow onwards),
    //       mark a day IN, request guest meals, show the out-streak (recursive countOutStreak).
    cout << "[Mess menu for " << getStudentName(s) << " - coming soon]\n";
}

void messStaffMenu() {
    // TODO: tomorrow's headcount = sum of that day's column + guests,
    //       7-day forecast, view and edit menu[7][3].
    cout << "[Headcount and menu - coming soon]\n";
}

int getDaysIn(int s) {
    // TODO: count the 1s in attendance[s][...] for the month.
    return 0;
}

int getGuestMeals(int s) {
    // TODO: return guestMeals[s].
    return 0;
}
