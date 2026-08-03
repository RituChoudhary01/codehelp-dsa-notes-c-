# DSA in C++ (CodeHelp)
## Lecture 1: Introduction to Programming and Flowcharts

---

## 🧩 How to Solve a Programming Problem?

Given a problem, follow these steps:

| Step | Name | Description |
|------|------|-------------|
| 1 | **Understand the Problem** | Read and analyze what the problem asks |
| 2 | **Identify Given Values** | List all input parameters and constraints |
| 3 | **Formulate an Approach** | Break down the problem into smaller steps to derive a solution strategy |
| 4 | **Draft Rough Solution** | Represent the approach using a flowchart or pseudocode |
| 5 | **Write Code** | Translate the logic into a high-level programming language (source code) |

---

## ⚙️ Execution Pipeline

```
Source Code  ──►  Compiler / Translator  ──►  Execution
```

- **Source Code** – High-level code written by programmers (e.g. C++, Python)
- **Compiler / Translator** – Converts high-level source code into machine code / binary code (0s and 1s), which is the only format computers understand
- **Execution** – The machine executes the binary instructions to deliver the output

---

## 📊 Flowchart and its Components

**Flowchart** – A diagrammatic representation of an approach. It draws out all the steps of your approach in order.

| Component | Shape | Function / Purpose |
|---|---|---|
| **Terminator** | Oval / Pill | Indicates the start or end of a flowchart |
| **Input / Output** | Parallelogram | Used to read input values or display output |
| **Process** | Rectangle | Performs calculations, assignments, or data processing |
| **Decision Box** | Diamond / Rhombus | Evaluates conditions yielding Yes/No (True/False) branches |
| **Flow Lines** | Arrows | Connects components and indicates execution direction |
| **Connector** | Circle | Connects different sections of complex flowcharts |

---

## 📝 What is Pseudocode?

- Pseudocode is an informal, generic, language-agnostic way of representing programming logic using plain English-like statements.
- It focuses entirely on algorithm flow rather than strict language syntax.

---

## 💡 Examples

### Problem 1: Sum of 2 Numbers

**Flowchart:**
```
Start
  ↓
Input a, b
  ↓
Sum = a + b
  ↓
Print (Sum)
  ↓
End
```

**Pseudocode:**
```
i.   Input 2 numbers a and b
ii.  Let Sum = a + b
iii. Print Sum
```

---

### Problem 2: Calculate Simple Interest

**Formula:**  
SI = (P × R × T) / 100

**Flowchart:**
```
Start
  ↓
Read (P, R, T)
  ↓
SI = (P × R × T) / 100
  ↓
Print (SI)
  ↓
End
```

**Pseudocode:**
```
Read P, R and T
Make SI = (P × R × T) / 100
Print SI
```

---

### Problem 3: Average of 3 Numbers

**Formula:**  
Average = (A + B + C) / 3

**Flowchart:**
```
Start
  ↓
Read A, B, C
  ↓
Avg = (A + B + C) / 3
  ↓
Print Avg
  ↓
End
```

**Pseudocode:**
```
Read A, B, C
Avg = (A + B + C) / 3
Print Avg
```

---

### Problem 4: Check if A < B

**Flowchart:**
```
Start
  ↓
Input A, B
  ↓
Is A < B? ──No──► Print "No" ──► End
  │Yes
  ▼
Print "Yes" ──► End
```

**Pseudocode:**
```
Read a and b
if a < b
    then print "Yes"
else
    print "No"
```

---

### Problem 5: Check if a Number is Even or Odd

> **% (Modulo Operator)** – Gives the remainder of division.
> `a % b` = Remainder of a / b

**Examples:**
```
5 % 2 = 1        8 % 4 = 0
6 % 4 = 2        4 % 9 = 4
when a < b, a % b = a
```

**Logic:**
```
If N % 2 == 0  →  Even
If N % 2 != 0  →  Odd
```

**Flowchart:**
```
Start
  ↓
Read N
  ↓
Is N % 2 == 0? ──Yes──► Print "Yes" ──► End
  │No
  ▼
Print "No" ──► End
```

**Pseudocode:**
```
Read N
if (N % 2 == 0)
    print "Yes"
else
    print "No"
End
```

---

### Problem 6: Check Positive, Negative, or Zero

**Flowchart:**
```
Start
  ↓
Read N
  ↓
Is N > 0? ──Yes──► Print "+ve" ──► End
  │No
  ▼
Is N < 0? ──Yes──► Print "-ve" ──► End
  │No
  ▼
Print "0" ──► End
```

**Pseudocode:**
```
Read n
if n > 0
    print "+ve"
else if n < 0
    print "-ve"
else
    print "0"
```

---

### Problem 7: Print Numbers 1 to N

> Repeating a set of statements using a condition is called **Looping**.

**Flowchart:**
```
Start
  ↓
Read N
  ↓
count = 1
  ↓
┌──► Is count <= N? ──No──► End
│      │Yes
│      ▼
│   Print count
│      ↓
└── count = count + 1
```

**Pseudocode:**
```
Read N
count = 1
if (count <= N)
    print count
    count = count + 1
    repeat
else
    End
```

---

### Problem 8: Print All Even Numbers from 1 to N

**Logic:** Start from the first even number (num = 2) and increment by 2 in each iteration.

**Flowchart:**
```
Start
  ↓
Read n
  ↓
num = 2
  ↓
┌──► Is num < n? ──No──► End
│      │Yes
│      ▼
│   Print num
│      ↓
└── num = num + 2
```

**Pseudocode:**
```
Input n
Let num = 2
while num < n
    Print num
    num = num + 2
End
```

---

### Problem 9: Sum of Numbers from 1 to N

**Logic:** Accumulate total in `sum` starting at 0, increment `count` (num) from 1 to N.

**Flowchart:**
```
Start
  ↓
Read n
  ↓
num = 1, sum = 0
  ↓
┌──► Is num <= n? ──No──► Print sum ──► End
│      │Yes
│      ▼
│   sum = sum + num
│      ↓
└── num = num + 1
```

**Pseudocode:**
```
Input (n)
let num = 1 and sum = 0
while num <= n
    sum = sum + num
    num = num + 1
End
```

---

### Problem 10: Find n! (Factorial)

**Formula:**  
n! = n × (n-1) × (n-2) × ... × 2 × 1

**Flowchart:**
```
Start
  ↓
Input n
  ↓
num = 1, ans = 1
  ↓
┌──► Is num <= n? ──No──► Print ans ──► End
│      │Yes
│      ▼
│   ans = ans × num
│      ↓
└── num = num + 1
```

**Pseudocode:**
```
Input (n)
let num = 1 and ans = 1
while num <= n
    ans = ans × num
    num = num + 1
End
```

---

### Problem 11: Check if a Number is Prime

> A number N is **prime** if it is greater than 1 and only divisible by 1 and N itself.

**Approach:** Check for any divisor `d` from 2 to N-1.  
If `N mod d == 0` for any `d`, N is **not** prime.

**Flowchart:**
```
Start
  ↓
Read n
  ↓
div = 2
  ↓
┌──► Is div < n? ──No──► Print "Yes" ──► End
│      │Yes
│      ▼
│   Is n % div == 0? ──Yes──► Print "No" ──► End
│      │No
│      ▼
└── div = div + 1
```

**Pseudocode:**
```
Input (n)
let div = 2
while div < n
    if n % div == 0
        print "No"
        exit
    else
        div = div + 1
print "Yes"
```

---

## 🔑 What is a Programming Language & Compiler?

**Programming Language** – A structured medium through which humans give instructions to a computer to perform tasks. Every language has defined syntax and rules.

**Why Compilers are Required:**
1. Computers only understand Binary/Machine Code (0s and 1s).
2. High-level languages cannot be read directly by hardware.
3. A compiler acts as a translator that converts high-level source code into an executable binary file that the processor runs.