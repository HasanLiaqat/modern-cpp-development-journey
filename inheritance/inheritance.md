# Inheritance in C++

## 📌 What is Inheritance?

Inheritance allows one class (child/derived class)
to acquire properties and behaviors of another class (parent/base class).

It promotes:
- Code reusability
- Hierarchical relationships
- Cleaner design

---

## 🧱 Basic Syntax

class DerivedClass : accessSpecifier BaseClass {
    // additional members
};

Example:
class Dog : public Animal

---

## 🔐 Types of Inheritance (Access Modes)

1. Public Inheritance
   - Public members remain public
   - Protected remain protected

2. Protected Inheritance
   - Public and protected become protected

3. Private Inheritance
   - Public and protected become private

---

## 🧬 Types of Inheritance (Structure)

1. Single Inheritance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance

---

## 🧠 Why Use Inheritance?

- Avoid code duplication
- Extend existing functionality
- Model real-world relationships

Example:
Animal → Dog, Cat

---

## ⚠ Important Notes

- Private members are NOT directly accessible in derived class.
- Use protected if derived classes need access.
- Constructors of base class execute first.
