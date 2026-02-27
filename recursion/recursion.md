# Day 1 – Recursion

## 📌 What is Recursion?

Recursion is a programming technique where a function calls itself
to solve a smaller version of the same problem.

A recursive function must have:
1. Base Case – Stops the recursion.
2. Recursive Case – Function calls itself.

---

## 🧠 How Recursion Works

Each recursive call is stored in the call stack.
When the base case is reached, the stack starts resolving backward.

---

## 🔢 Example 1: Factorial

Factorial of n:
n! = n × (n-1) × (n-2) × ... × 1

Base Case:
0! = 1
1! = 1

---

## ⏱ Time Complexity
Most simple recursion problems like factorial:
O(n)

---

## ⚠ Important Notes
- Always define a base case.
- Too many recursive calls may cause stack overflow.
- Recursion uses more memory than iteration.
