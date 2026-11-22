// hostelhub.h - shared by every module.
// Constants and the function each module provides to the others.
// Change this file only after agreeing with the team.
#ifndef HOSTELHUB_H
#define HOSTELHUB_H

#include <iostream>
#include <string>
using namespace std;

// ---------- shared constants ----------
const int MAX_STUDENTS = 200;
const int MAX_STAFF    = 20;
const int DAYS         = 31;   // days in a month for the mess grid
const int ITEM_TYPES   = 6;    // shirt, trouser, shalwar kameez, bedsheet, towel, other
const int MAX_ORDERS   = 500;

// ---------- Module 1: User Management (users.cpp) ----------
void   loadUsers();                     // read students.txt, staff.txt, admin.txt
void   saveUsers();                     // write them back
int    studentLogin();                  // returns student index, or -1 if login failed
bool   staffLogin();
bool   wardenLogin();
void   wardenUserMenu();                // register / remove / change password
int    findStudent(int regNo);          // recursive binary search: index or -1
string getStudentName(int s);
int    getStudentRegNo(int s);
int    getStudentCount();

// ---------- Module 2: Mess Management (mess.cpp) ----------
void loadMess();
void saveMess();
void messStudentMenu(int s);            // calendar, mark in/out, guest meals
void messStaffMenu();                   // headcount, edit menu
int  getDaysIn(int s);                  // used by billing
int  getGuestMeals(int s);              // used by billing

// ---------- Module 3: Laundry Management (laundry.cpp) ----------
void loadLaundry();
void saveLaundry();
void laundryStudentMenu(int s);         // my orders, receipts, status
void laundryStaffMenu();                // new order, update status, return check
int  getLaundryTotal(int s);            // Rs total of this month's receipts, used by billing

// ---------- Module 4: Billing and Reports (billing.cpp) ----------
void loadBilling();
void saveBilling();
void showBill(int s);
void complaintMenu(int s);              // file complaint, rate meal
void wardenReportsMenu();               // bills, summary, missing items, complaints
void setRatesMenu();

#endif
