# DSA in C++ (CodeHelp)
## Lecture 4: Pattern Printing with Nested Loops

---

All patterns below are built using **nested `while` loops** — the outer loop controls rows, the inner loop(s) control columns/characters/spaces printed in each row.

---

### Q1: Repeated Row Pattern

For `n = 4`:
```
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q2: Reverse Repeated Row Pattern

For `n = 4`:
```
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = n;
        while (j >= 1) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q3: Continuous Number Fill

For `n = 3`:
```
1 2 3
4 5 6
7 8 9
```

```cpp
int main() {
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q4: Reverse Continuous Number Fill

For `n = 3`:
```
9 8 7
6 5 4
3 2 1
```

```cpp
int main() {
    int n;
    cin >> n;
    int count = n * n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q5: Star Triangle

For `n = 4`:
```
*
* *
* * *
* * * *
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q6: Repeated Row-Number Triangle

For `n = 4`:
```
1
2 2
3 3 3
4 4 4 4
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q7: Continuous Increasing Number Triangle

For `n = 4`:
```
1
2 3
4 5 6
7 8 9 10
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q8: Row-Starting Increasing Triangle

For `n = 4`:
```
1
2 3
3 4 5
4 5 6 7
```

**With extra variable:**
```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        int count = i;
        while (j <= i) {
            cout << count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

**Without extra variable:**
```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << j + i - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q9: Descending Triangle

For `n = 4`:
```
1
2 1
3 2 1
4 3 2 1
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q10: Repeated Alphabet Rows

For `n = 4`:
```
A A A A
B B B B
C C C C
D D D D
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= n) {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q11: Same Alphabet Sequence Every Row

For `n = 4` (Note: sequence starts at 'B' each row, since `ch` is incremented before printing):
```
B C D E
B C D E
B C D E
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A';
        while (j <= n) {
            ch = ch + 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q12: Continuous Alphabet Fill

For `n = 3`:
```
A B C
D E F
G H I
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << ch << " ";
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q13: Diagonal Shifted Alphabet Pattern

For `n = 3`:
```
A B C
B C D
C D E
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q14: Repeated Alphabet Triangle

For `n = 3`:
```
A
B B
C C C
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i) {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q15: Continuous Alphabet Triangle

For `n = 4`:
```
A
B C
D E F
G H I J
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q16: Row-Starting Alphabet Triangle

For `n = 4`:
```
A
B C
C D E
D E F G
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i) {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q17: Reverse Row-Starting Alphabet Triangle

For `n = 4`:
```
D
C D
B C D
A B C D
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i) {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q18: Right-Aligned Star Triangle

For `n = 4`:
```
   *
  **
 ***
****
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // print spaces
        int space = n - i;
        while (space >= 1) {
            cout << " ";
            space--;
        }
        // print stars
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q19: Inverted Star Triangle

For `n = 4`:
```
* * * *
* * *
* *
*
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i + 1) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q20: Right-Aligned Inverted Star Triangle

For `n = 4`:
```
* * * *
  * * *
    * *
      *
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // print spaces
        int space = 1;
        while (space <= i - 1) {
            cout << "  ";
            space++;
        }
        // print stars
        int j = 1;
        while (j <= n - i + 1) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q21: Right-Aligned Inverted Number Triangle

For `n = 4`:
```
1 1 1 1
  2 2 2
    3 3
      4
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // print spaces
        int space = 1;
        while (space <= i - 1) {
            cout << "  ";
            space++;
        }
        // print numbers
        int j = 1;
        while (j <= n - i + 1) {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q22: Left-Aligned Number Triangle (Reversed Spacing)

For `n = 4`:
```
      1
    2 2
  3 3 3
4 4 4 4
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // print spaces
        int space = 1;
        while (space <= n - i) {
            cout << "  ";
            space++;
        }
        // print numbers
        int j = 1;
        while (j <= i) {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q23: Increasing Number Pyramid

For `n = 4`:
```
      1
    2 3
  4 5 6
7 8 9 10
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n) {
        // print spaces
        int space = 1;
        while (space <= n - i) {
            cout << "  ";
            space++;
        }
        // print numbers
        int j = 1;
        while (j <= i) {
            cout << count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q24: Pascal-Style Number Pyramid

For `n = 4`:
```
        1
       121
      12321
     1234321
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // print spaces
        int space = 1;
        while (space <= n - i) {
            cout << "  ";
            space++;
        }
        // ascending half
        int j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        // descending half
        j = j - 2;
        while (j >= 1) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```

---

### Q25: Number-Star Hourglass Diamond

For `n = 5`:
```
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
```

```cpp
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // left numbers
        int j = 1;
        while (j <= n - i + 1) {
            cout << j;
            j++;
        }
        // stars
        int star = 1;
        while (star <= 2 * (i - 1)) {
            cout << "*";
            star++;
        }
        // right numbers
        j = n - i + 1;
        while (j >= 1) {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
```