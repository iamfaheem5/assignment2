In your updated code, using `int result` in each case introduced **two critical new compiler errors**, and two missing semicolons still remain.

### 1. Redefinition of `result` Error (New)

All `case` statements inside a `switch` share the **same scope**.

* Declaring `int result` in `case 1`, `case 2`, `case 3`, and `case 4` attempts to redefine the exact same variable four times in the same scope.
* **Compiler Error:** `redefinition of 'result'`

---

### 2. Statement Immediately Following a Case Label (New)

In standard C, a `case` label must be followed by a **statement**, not a variable declaration.

* Writing `case 1: int result = ...;` fails because `int result` is a declaration.
* **Fix:** Either declare `int result;` once at the top of `main()`, or wrap each `case` body in curly braces `{}` to create a new scope for each case.

---

### 3. Missing Semicolons (Remaining)

* Line 28: `printf("press 1 for add...")` needs a `;` at the end.
* Line 29: `scanf("%d",&option)` needs a `;` at the end.

---

### The Cleanest Fix

Declare `result` once before the `switch` block:

```c
#include <stdio.h>

int add(int a, int b) {
    int c = a + b;
    return c;
}

int substraction(int a, int b) {
    int c = a - b;
    return c;
}

int mutiply(int a, int b) {
    int c = a * b;
    return c;
}

int division(int a, int b) {
    int c = a / b;
    return c;
}

int main() {
    int a, b;
    int option;
    int result; // Declared once here!

    printf("input the 2 numbers: ");
    scanf("%d%d", &a, &b);

    printf("press 1 for add ,2 for subsctaction , 3 for multiplacation , 4 for division: ");
    scanf("%d", &option); // Added missing semicolon

    switch (option) {
        case 1:
            result = add(a, b); // Reuse result
            printf("this is the output %d", result);
            break;
        
        case 2:
            result = substraction(a, b); // Reuse result
            printf("this is the output %d", result);
            break;

        case 3:
            result = mutiply(a, b); // Reuse result
            printf("this is the output %d", result);
            break;

        case 4:
            if (b != 0) {
                result = division(a, b); // Reuse result
                printf("this is the output %d", result);
            } else {
                printf("Error: Cannot divide by zero");
            }
            break;

        default:
            printf("Error ");
            break;
    }

    return 0;
}

```