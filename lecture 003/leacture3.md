# DSA in C++ (CodeHelp)
## Lecture 3: Conditional Statements, Loops & Patterns

---

## 🔁 Recall

In code, a decision is called a **conditional statement**.

```
Example:
I/P: a, b
O/P: a   if a > b
     b   otherwise
```

This kind of logic is solved using **if statements**.

---

## ❓ The `if` Statement

```cpp
if (condition) {
    // If the condition within () is true,
    // execute the entire code block within {}
}
```

**Example:**
```cpp
if (a > b) {
    cout << a << endl;
}
if (a <= b) {
    cout << b << endl;
}
```

> In the above example, instead of checking again for `b > a` in the second `if` block, we already know that if the first condition doesn't get fulfilled, the second block must be executed no matter what. This can be achieved using an **if-else** block.

### `if-else` Block

```cpp
if (a > b) {
    cout << a << endl;   // If this is fulfilled, else block won't execute
} else {
    cout << b << endl;   // If the if block doesn't execute, this else block will
}
```

---

## ⌨️ `cin >>`

`cin >> n` waits for the user to give input and assigns it to `n`'s address.

**Example:**
```cpp
int a;
cin >> a;
```
1. Variable `a` gets initialized with a random garbage value.
2. Program waits for the user to give input (an integer) to `a` and stores it with that value.

> `cin` ignores **ENTER (`\n`)**, **TAB (`\t`)**, and **SPACE (` `)** while taking input — these are called **whitespace characters**.
> Use `cin.get()` to read these whitespace characters.

---

## 📝 Homework / Practice Snippets

### Q1: What's the output?

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 9;
    if (a == 9) {
        cout << "NINEY ";
    }
    if (a > 0) {
        cout << "POSITIVE";
    } else {
        cout << "NEGATIVE";
    }
}
```
**Answer:** `NINEY POSITIVE`

---

### Q2: What's the output?

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 2;
    int b = a + 1;
    if ((a = 3) == b)
        cout << a;
    else
        cout << a + 1;
}
```
**Answer:** `3`

> `a` is assigned `3` (note: `=` is assignment, not comparison). Now `a == b` is true (`3 == 3`).

---

### Q3: What's the output?

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 24;
    if (a > 20) {
        cout << "Love";
    } else if (a == 24) {
        cout << "Lovely";
    } else {
        cout << "Babber";
    }
    cout << a;
}
```
**Answer:** `Love24`

> Since `a > 20` is true, only the first branch runs (the `else if` is never reached), and then `a` (24) is printed after the if-else block.

---

## 🔂 While Loop

```cpp
while (condition) {
    // while the condition is true, keep on executing the block
}
```

### Example: Print 1 to N

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i = i + 1;
    }
    return 0;
}
```

### Example: Find Sum from 1 to N

```cpp
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum = sum + i;
        i = i + 1;
    }
    cout << sum << endl;
    return 0;
}
```

### Q: Find Sum of All Even Numbers from 1 to N

```cpp
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int i = 2;
    while (i <= n) {
        if (i % 2 == 0)
            sum = sum + i;
        i = i + 1;
    }
    cout << "Sum from " << 1 << " to " << n << " = " << sum << endl;
    return 0;
}
```

---

## 🌡️ Fahrenheit to Celsius

**Formula:**  
C = (5/9) × (F − 32)

```cpp
int main() {
    float fahrenheit;
    cin >> fahrenheit;
    float celsius = (5.0 / 9) * (fahrenheit - 32);
    cout << fahrenheit << "F = " << celsius << "C" << endl;
    return 0;
}
```

---

## 🔎 Example: Prime or Not?

```cpp
int main() {
    int n;
    cin >> n;
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            return 0;
        }
        i = i + 1;
    }
    cout << "Prime" << endl;
    return 0;
}
```

---

## ⭐ Patterns

### Example: Square of Stars

For `n = 4` (4 rows, 4 columns):
```
****
****
****
****
```

```cpp
int main() {
    int n;
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
```

> Uses **nested while loops** — the outer loop controls rows, the inner loop controls columns.

---

### Q2: Number Pattern

For `n = 3`:
```
1 1 1
2 2 2
3 3 3
```

**Logic:** Outer loop tracks the row number `i` (1 to n); inner loop prints `i` a total of `n` times per row.

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
```

> **Note:** This is a corrected/completed version of the pattern logic — the original notes had an incomplete inner loop, but the row/column nested-loop structure from the star pattern above applies the same way here.