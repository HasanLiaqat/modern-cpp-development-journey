# Abstraction in C++

## 📌 What is Abstraction?

Abstraction means hiding complex implementation details
and showing only the necessary features of an object.

It focuses on **what an object does instead of how it does it**.

Example:
When driving a car, you use the steering wheel and pedals
without knowing the internal engine mechanism.

---

## 🧠 How Abstraction is Achieved in C++

1. Abstract Classes
2. Pure Virtual Functions

---

## 🔹 Abstract Class

A class that contains at least one **pure virtual function**.

Characteristics:
- Cannot create objects directly
- Designed to be inherited by other classes
- Provides a common interface

---

## 🔹 Pure Virtual Function

A virtual function with no implementation in the base class.

Syntax:

virtual returnType functionName() = 0;

Example:

virtual void display() = 0;

Derived classes must implement this function.

---

## 🎯 Why Use Abstraction?

- Simplifies complex systems
- Improves code maintainability
- Provides clear interface design
- Supports scalable software architecture

---

## ⚠ Important Notes

- Abstract classes cannot be instantiated.
- Derived classes must implement all pure virtual functions.
- If not implemented, the derived class also becomes abstract.
