// billing.cpp - Module 4: Billing and Reports
// Owner: Syed Umar Farooq (2026745)
// Data owned here: rates, bills, complaints, ratings.
#include "hostelhub.h"

int dailyRate = 450, guestRate = 300, fixedCharges = 1500;   // sample rates (Rs)

void loadBilling() {
    // TODO: read rates from data/settings.txt and complaints from data/complaints.txt.
}

void saveBilling() {
    // TODO: write rates, bills and complaints back to their files.
}

void calculateBill(int s, int &total) {
    // TODO: total = getDaysIn(s) * dailyRate + getGuestMeals(s) * guestRate
    //             + getLaundryTotal(s) + fixedCharges;
    total = 0;
}

void showBill(int s) {
    int total;
    calculateBill(s, total);
    // TODO: print a formatted bill with one line per item, save to data/bills_nov.txt.
    cout << "[Bill for " << getStudentName(s) << " - coming soon, total so far Rs " << total << "]\n";
}

void complaintMenu(int s) {
    // TODO: file a complaint (switch on category), rate a meal 1-5.
    cout << "[Complaints and ratings - coming soon]\n";
}

void wardenReportsMenu() {
    // TODO: all bills, hostel summary (sort by mess-out days), missing items, complaints.
    cout << "[Reports - coming soon]\n";
}

void setRatesMenu() {
    // TODO: change dailyRate, guestRate, fixedCharges and save.
    cout << "[Set rates - coming soon]\n";
}
