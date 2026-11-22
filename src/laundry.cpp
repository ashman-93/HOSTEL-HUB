// laundry.cpp - Module 3: Laundry Management
// Owner: Syed Tayyab Hussain (2026744)
// Data owned here: orders, items[order][type], returned[order][type], status.
#include "hostelhub.h"

int orderId[MAX_ORDERS];
int orderReg[MAX_ORDERS];                  // reg # of the student
int items[MAX_ORDERS][ITEM_TYPES];         // counts handed in
int returned[MAX_ORDERS][ITEM_TYPES];      // counts given back
int orderStatus[MAX_ORDERS];               // 0 Received, 1 Washing, 2 Ready, 3 Collected
int orderCount = 0;
int itemRate[ITEM_TYPES] = {40, 40, 60, 80, 30, 50};   // Rs per item (sample rates)

void loadLaundry() {
    // TODO: read data/laundry_orders.txt into the arrays.
}

void saveLaundry() {
    // TODO: write orders back; write missing items to data/missing_items.txt.
}

void laundryStudentMenu(int s) {
    // TODO: list this student's orders with status and amount; show one receipt.
    cout << "[My laundry for " << getStudentName(s) << " - coming soon]\n";
}

void laundryStaffMenu() {
    // TODO: new order (reg #, item counts, max 30 items), print and save receipt,
    //       update status (switch), return check: compare returned[][] with items[][]
    //       and flag missing items.
    cout << "[Laundry orders - coming soon]\n";
}

int getLaundryTotal(int s) {
    // TODO: add up count x itemRate for every order belonging to this student.
    return 0;
}
