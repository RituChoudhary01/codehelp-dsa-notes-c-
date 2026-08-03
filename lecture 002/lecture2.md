# DSA in C++ (CodeHelp)
## Lecture 2: C++ Basics, Data Types, Typecasting & Operators

---

## ⚙️ Source Code → Machine Code

- **Compiler** translates source code into **binary** (0s and 1s).
- **Role of Compiler:** Translates human-readable C++ source code into machine-executable code.

### IDEs & Online Development Environments
Code can be written in:
- **Local IDEs** – e.g. VS Code
- **Online Compilers** – e.g. Replit

---

## 💻 Writing Your First C++ Program ("Namaste Duniya")

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Namaste Duniya" << endl;
    return 0;
}
```

### Line-by-Line Breakdown

| Line | Meaning |
|---|---|
| `#include <iostream>` | Header file that imports input/output stream capabilities |
| `using namespace std;` | Allows usage of standard names like `cout` without writing `std::cout` |
| `int main()` | The entry point where execution begins |
| `cout <<` | Output stream operator used to print content to the console |
| `endl` / `\n` | Inserts a new line character |
| `;` (semicolon) | Marks the end of a statement |

---

## 🔢 Variables and Data Types

| Description | Typical Size | Example |
|---|---|---|
| Integers | 4 Bytes (32 bits) | `int a = 5` |
| Single characters (enclosed in `' '`) | 1 Byte (8 bits) | `char ch = 'a'` |
| Boolean (true/false, mapped to 1/0) | 1 Byte | `bool flag = true` |
| Floating-point numbers | 4 Bytes | `float f = 1.2` |
| Double-precision floating-point | 8 Bytes | `double d = 1.23` |

### `sizeof()` Operator
Returns the memory size (in bytes) of a variable or data type.  
Example: `sizeof(a)`

---

## 🔡 How Data is Stored & ASCII Table

- Integers are stored directly in binary form.
- Characters are mapped to their corresponding **ASCII integer values** (e.g. `'a' → 97`) before being converted to binary.

### Key ASCII Ranges (Homework: memorize these)

| Char | ASCII | Char | ASCII | Char | ASCII |
|---|---|---|---|---|---|
| 'A' | 65 | 'a' | 97 | '0' | 48 |
| 'B' | 66 | 'b' | 98 | '1' | 49 |
| 'C' | 67 | 'c' | 99 | '2' | 50 |
| ⋮ | ⋮ | ⋮ | ⋮ | ⋮ | ⋮ |
| 'Z' | 90 | 'z' | 122 | '9' | 57 |

**Homework:** Review the full ASCII table and memorize key character ranges (`'A'-'Z'`, `'a'-'z'`, `'0'-'9'`).

---

## 🔄 Typecasting in C++

Typecasting converts a value from one data type to another.

### Implicit Typecasting
Happens automatically, done by the compiler.

```cpp
int a = 'a';     // converts character 'a' to ASCII integer (97)
char ch = 98;    // converts integer 98 to character 'b'
```

### Overflow Warning
Assigning a large integer to a 1-byte `char` variable **truncates the higher-order bits**, leaving only the lower 8 bits.

**Homework Question:** Practice write-ups and edge cases for implicit and explicit typecasting.

---

## ➖ Storage of Negative Numbers & Unsigned Integers

### Most Significant Bit (MSB)
| MSB | Meaning |
|---|---|
| 0 | Positive Number |
| 1 | Negative Number |

### 2's Complement Representation
Negative numbers are stored in memory using **2's Complement**:

1. Ignore the negative sign and convert the number to binary.
2. Find the **1's complement** (invert all bits: 0→1, 1→0).
3. Add 1 to get the **2's complement**.

### Example: Store −5 in binary format

```
① Ignore the -ve sign        → 5
② Binary representation of 5 → 0101 → 000...0101 (29 leading zeros + 0101)
③ 2's Complement = 1's Complement + 1

1's Complement = 111...1010
             +            1
             ------------------
2's Complement = 111...1011
```

### Displaying a Negative Number
Take the 2's complement of the stored number to recover the original value.

```
Stored:        111...1011   ← MSB = 1, so this is negative
1's Complement: 000...0100
2's Complement: 000...0101  = 5   →  so stored value represents -5
```

### Why 2's Complement?
If numbers were stored as-is (without 2's complement), then **+0** and **−0** would end up as two different bit patterns representing the same value:

```
1000...00   (-0)
0000...00   (+0)
```
This would be equal in value but waste a representable state — hence 2's complement avoids this redundancy.

### `unsigned int`
Allows storing only **non-negative** integers, in the range `0` to `2³² - 1`, effectively **doubling** the positive range compared to a signed int.

---

## ➗ C++ Operators

### 1. Arithmetic Operators
`+`  `-`  `*`  `/`  `%`

**Integer Division:** `int / int = int` (decimal part is truncated)

```cpp
2 / 5 = 0
3 / 5 = 0
9 / 4 = 4
```

**Mixed-Type Division Rules:**

| Expression | Result Type |
|---|---|
| `int / float` or `float / int` | `float` |
| `double / int` or `int / double` | `double` |

```cpp
cout << 5.0 / 2 << endl;   // Output: 2.5
```

---

### 2. Relational Operators
`==`  `>=`  `<=`  `>`  `<`  `!=`

> Returns boolean **1** for true or **0** for false.

**Examples:**
```cpp
// Is a == b?
Yes → 1
No  → 0

// Is a greater than or equal to b?
a >= b   Yes → 1
         No  → 0
```

---

### 3. Logical Operators
`&&`  `||`  `!`

**Logical AND (`&&`)** – All conditions must be true for the output to be true.

```cpp
int a = 5, b = 10, c = 15;
cout << ((a > 0) && (b != 0) && (c <= 15));
// Output: 1
```

**Logical OR (`||`)** – At least 1 condition must be true for the output to be true.

```cpp
int a = 5, b = 10, c = 15;
cout << ((a > 5) || (b < 10) || (c >= 15));
// Output: 1
```

**Logical NOT (`!`)** – Inverts the logic.

```
True     → False
Non-Zero → Zero
```

```cpp
int a = 10, b = 0;
cout << (!a) << endl;   // Output: 0
cout << (!b) << endl;   // Output: 1
```

---

## 📌 Homework / Practice

1. Review the ASCII table and memorize key character ranges (`'A'-'Z'`, `'a'-'z'`, `'0'-'9'`).
2. Practice write-ups and edge cases for **implicit** and **explicit** typecasting.