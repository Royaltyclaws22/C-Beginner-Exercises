# 🧮 Simple Calculator

A simple C console application that performs basic arithmetic operations on two floating-point numbers.


## 🔎 Preview
<img width="1280" height="679" alt="Simple_Calculator" src="https://github.com/user-attachments/assets/849a427d-5d1e-4d5f-8d39-5ac4ebeff94f" />


## ⚙️ Features

- Perform the four basic arithmetic operations:
  - Addition
  - Subtraction
  - Multiplication
  - Division
- Read two floating-point values from the user.
- Select the desired arithmetic operation.
- Validate the selected operation.
- Detect division by zero and display an appropriate error message.
- Organize the program using separate functions for each arithmetic operation.


## 💻 Installation & Running

1. Clone the repository:
```bash
git clone https://github.com/Royaltyclaws22/C-Beginner-Exercises.git
```
2. Navigate to the project folder:
```bash
cd C-Beginner-Exercises/01_Simple_Calculator
```
3. Compile the program:
```bash
gcc Simple_Calculator.c -o Simple_Calculator
```
4. Run the program:

* **Windows (Command Prompt)**
  ```bash
  Simple_Calculator.exe
  ```

* **Linux / macOS**
  ```bash
  ./Simple_Calculator
  ```


## 💡 Usage

Run the program and enter two numbers when prompted.

**Example:**

```text
=====================================
          Simple Calculator
=====================================

Enter the first number: 12.5
Enter the second number: 4

Select an operation (+, -, *, /): *

Result (Multiplication): 50.000
```

The program checks:
- If both input values are valid numbers.
- If the selected operation is supported.
- If division by zero is attempted.

After valid input is provided, the calculated result is displayed in the console.

**Example output:**

```text
Result (Multiplication): 50.000
```
