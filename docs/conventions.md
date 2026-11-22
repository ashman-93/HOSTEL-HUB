# HOSTEL-HUB team conventions

Agree on these before coding. If anything here changes, tell the whole team.

## File formats (data/ folder, one record per line, comma-separated)

| File | Format | Owner |
|---|---|---|
| students.txt | regNo,name,room,password | Module 1 |
| staff.txt | staffId,name,password | Module 1 |
| admin.txt | username,password | Module 1 |
| mess_nov.txt | regNo,d1,d2,...,d31 (1 = IN, 0 = OUT) | Module 2 |
| guests.txt | regNo,guestMeals | Module 2 |
| menu.txt | day,breakfast,lunch,dinner | Module 2 |
| laundry_orders.txt | orderId,regNo,shirt,trouser,kameez,bedsheet,towel,other,status | Module 3 |
| missing_items.txt | orderId,regNo,itemType,missingCount | Module 3 |
| settings.txt | dailyRate,guestRate,fixedCharges | Module 4 |
| complaints.txt | regNo,category,text,resolved(0/1) | Module 4 |
| bills_nov.txt | regNo,daysIn,guestMeals,laundry,fixed,total | Module 4 |

Status codes for laundry: 0 Received, 1 Washing, 2 Ready, 3 Collected.

## Rules

- Each module's data arrays live only in that module's .cpp file. Other modules use the functions in hostelhub.h.
- A student is passed around by **index** (from findStudent / studentLogin), not by name.
- Keep students sorted by reg #, so findStudent's binary search works.
- Every module provides its own load...() and save...() functions; main.cpp calls them all at start and exit.
- Pull before you start, commit small and often, and only edit your own .cpp file. Ask the team before changing hostelhub.h or main.cpp.

## How to build

- g++: `g++ src/*.cpp -o HostelHub`, run from the project folder.
- Dev-C++ / Visual Studio: create one Console project and add all five .cpp files plus hostelhub.h to it.
