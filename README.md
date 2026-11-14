🏠 HOSTEL-HUB
Smart Mess In/Out, Laundry Tracking & Billing System

**CS-101 Computing & Artificial Intelligence – Semester Project (Fall 2026)**
Ghulam Ishaq Khan Institute (GIKI) · BS (CS) Batch 36 · Instructor: M. Qasim Riaz

## 🧑‍🤝‍🧑 Team
| Name | Reg # | Module |
|---|---|---|

| Ashman Shabir Awan | 2026140 |

| Maaz Gohar | 2026320 |

| Syed Tayyab Hussain | 2026744 |

| Syed Umar Farooq | 2026745 |

---

## 📌 About the project
In hostels, the mess cooks for every registered student, even when many are away, which wastes food and makes bills unfair. Laundry runs on paper slips, so clothes are often misplaced and nobody can prove what was handed in.

**HOSTEL-HUB** is a C++ console application that:
- lets students **mark mess in/out** in advance,
- gives mess staff an **exact daily headcount** so less food is wasted,
- lets laundry staff **count every item on a digital receipt** and **track each order** until it's collected, so missing clothes are caught,
- and generates **accurate monthly bills**, including mess and laundry charges, automatically.

All data is stored in text files, so records are saved between runs.

---

## 👥 Users
| User | What they can do |
|---|---|
| **Student** | Mark mess in/out, request guest meals, view laundry orders and receipts, view monthly bill, rate meals, file complaints |
| **Staff** (mess and laundry) | View daily headcount, edit the weekly menu, create laundry orders, record item counts, update order status, check returned items |
| **Warden** (Admin) | Register/remove users, set rates, view all bills, view missing-item reports, resolve complaints, view hostel reports |

---

## ✨ Features
1. **Login and registration**: role-based login, with accounts stored in files
2. **Mess in/out**: monthly calendar per student; mark a single day or a date range as out, with a cutoff rule
3. **Headcount and menu**: tomorrow's headcount, 7-day forecast, weekly menu, meals saved
4. **Laundry tracking and receipts**
   - Count items by type (shirt, trouser, shalwar kameez, bedsheet, towel, other)
   - Automatic charge calculation and a digital receipt for every order
   - Order status: Received → Washing → Ready → Collected
   - Returned items checked against the receipt; any shortfall is flagged as **Missing**
5. **Billing**: monthly bill = mess days + guest meals + laundry receipts + fixed charges
6. **Complaints and feedback**: categorised complaints, 1–5 meal ratings
7. **Warden reports**: hostel summary, attendance stats, missing-item reports, total billing

---

## 🧠 CS-101 concepts used
| Concept | Example in HOSTEL-HUB |
|---|---|
| 1D arrays | Reg numbers, names, rooms, laundry rates, order status |
| 2D arrays | `attendance[student][day]`, `menu[7][3]`, `items[order][type]`, `returned[order][type]` |
| Functions and recursion | Recursive binary search (reg #s and order IDs), recursive mess-out streak, recursive pending-item count |
| File handling | Loading and saving all records with `ifstream` / `ofstream` |
| Pointers and references | Dynamic student arrays, pointers to a student's attendance row and an order's item row |
| Pass by value / reference | Bill total and missing-item count updated by reference |
| Conditions, switch and loops | Role menus, order status, validation, grid processing |

---

## 📁 Project structure
```
HOSTEL-HUB/
├── src/        # C++ source code (one file per module)
├── data/       # Text files: students, staff, menu, attendance, laundry orders, bills...
├── docs/       # Project report and documentation
└── README.md
```

---

## ▶️ How to run
1. Clone or download this repository.
2. Compile all source files, e.g. with g++:
   ```
   g++ src/*.cpp -o HostelHub
   ```
   or open the files in Dev-C++ / Code::Blocks / VS Code and build.
3. Run `HostelHub.exe` from the project folder so it can find the `data/` files.

---

---

## 🚧 Project status
- [x] Repository set up
- [ ] Login and file handling
- [ ] Mess in/out and headcount
- [ ] Laundry tracking and receipts
- [ ] Billing and reports
- [ ] Testing and documentation

## 🔮 Future work
A mobile version where students mark mess in/out and track laundry orders from their phones, and staff see live headcounts.
