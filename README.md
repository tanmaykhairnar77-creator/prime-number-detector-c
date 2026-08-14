# Prime Number Detector in C

A simple yet effective C program that determines whether a given number is prime or not. This project demonstrates the use of loops, conditional statements, and basic algorithmic thinking in C programming.

## 📋 Features

- **Input Validation**: Handles edge cases (0, 1, and negative numbers)
- **Efficient Detection**: Uses an optimized loop that checks divisibility up to n/2
- **Clear Output**: Provides user-friendly messages indicating whether the number is prime

## 🚀 How It Works

The program:
1. Takes an integer as input from the user
2. Checks if the number is 0 or 1 (not prime by definition)
3. Iterates from 2 to n/2 to check for divisibility
4. If any divisor is found, the number is not prime
5. Otherwise, the number is prime

## 📝 Algorithm Logic

```
IF n == 0 OR n == 1:
    Print: Not prime
ELSE:
    FOR i = 2 to n/2:
        IF n is divisible by i:
            Print: Not prime
            EXIT
    Print: Prime
```

## 💻 How to Compile and Run

### On Linux/Mac:
```bash
gcc prime_no_detector.c -o prime_detector
./prime_detector
```

### On Windows:
```bash
gcc prime_no_detector.c -o prime_detector.exe
prime_detector.exe
```

## 📥 Example Usage

```
Enter the number: 
17
17 is a prime number.
```

```
Enter the number: 
20
20 is not a prime number.
```

## 🧪 Test Cases

| Input | Output | Status |
|-------|--------|--------|
| 0 | Not a prime number | ✓ |
| 1 | Not a prime number | ✓ |
| 2 | Is a prime number | ✓ |
| 17 | Is a prime number | ✓ |
| 20 | Not a prime number | ✓ |
| 97 | Is a prime number | ✓ |

## 🎯 Learning Outcomes

Through this project, you will learn:
- ✅ How to use loops in C (for loops)
- ✅ Conditional statements (if-else)
- ✅ User input/output operations
- ✅ Logical operators and conditions
- ✅ Basic algorithm design and optimization

## 📚 Concepts Used

- **For Loop**: Iterate through potential divisors
- **If-Else Statements**: Make decisions based on conditions
- **Logical Operators**: Combine multiple conditions
- **Modulo Operator (%)**: Check divisibility

## 🔧 Future Improvements

- Add support for negative numbers
- Implement a more efficient algorithm (e.g., checking up to √n)
- Add a menu to check multiple numbers
- Display all prime numbers up to n

## 👤 Author

Created as a C programming practice project

## 📄 License

This project is open source and available for educational purposes.

---

**Happy Coding! 🎉**
