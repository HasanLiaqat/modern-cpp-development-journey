# Polymorphism in C++

## 📌 What is Polymorphism?

Polymorphism means "many forms".

It allows the same function or method name
to behave differently depending on the object.

---

## 🧠 Types of Polymorphism in C++

1. Compile-Time Polymorphism (Static Binding)
   - Function Overloading
   - Operator Overloading

2. Run-Time Polymorphism (Dynamic Binding)
   - Function Overriding using Virtual Functions

---

# 🔹 1️⃣ Compile-Time Polymorphism

## Function Overloading

Same function name
Different parameters

Example:
add(int, int)
add(double, double)

The compiler decides which function to call.

---

# 🔹 2️⃣ Run-Time Polymorphism

Achieved using:
- Inheritance
- Virtual functions
- Base class pointer/reference

The decision is made at runtime.

---

## 🔑 Virtual Function

A function declared using the keyword `virtual`
in the base class.

This ensures the derived class version is executed
when using a base class pointer.

---

## ⚠ Important Rules

- Base class function must be declared virtual.
- Always use override keyword in derived class (good practice).
- Without virtual, base version is called.

---

## 🎯 Why Polymorphism is Important

- Flexibility
- Extensibility
- Cleaner code
- Supports dynamic behavior
