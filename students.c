#include "datatype.h"  // Ð?m b?o r?ng b?n bao g?m file header dúng

#define MAX_STUDENTS 100

struct student students[MAX_STUDENTS] = {
    {"S001", "C001", "Alice Nguyen", {15, 6, 2000}, 0, "alice.nguyen@example.com", "0901234567", "pass1234"},
    {"S002", "C002", "Bob Tran", {22, 3, 1999}, 1, "bob.tran@example.com", "0902345678", "pass2345"},
    {"S003", "C003", "Charlie Le", {10, 12, 2001}, 1, "charlie.le@example.com", "0903456789", "pass3456"},
    {"S004", "C004", "David Pham", {30, 7, 1998}, 1, "david.pham@example.com", "0904567890", "pass4567"},
    {"S005", "C005", "Emma Hoang", {5, 11, 2000}, 0, "emma.hoang@example.com", "0905678901", "pass5678"}
};
int numStudents = 5;

