# Day 4 – Constructors & Destructors in C++

## 📌 What is a Constructor?

A constructor is a special member function of a class:
- Has the same name as the class
- Automatically executes when an object is created
- Used to initialize data members

---

## 🧱 Types of Constructors

1. Default Constructor
   - Takes no parameters

2. Parameterized Constructor
   - Takes arguments to initialize values

3. Copy Constructor
   - Creates a new object as a copy of another object

---

## 🔄 Constructor Overloading

Multiple constructors can exist in the same class
with different parameter lists.

---

## 🗑 What is a Destructor?

A destructor:
- Has the same name as the class
- Prefixed with ~
- Automatically executes when an object goes out of scope
- Used to release resources

Syntax:

~ClassName() {
    // cleanup code
}

---

## ⚠ Important Notes

- Constructors do not have a return type.
- Only one destructor per class.
- Destructors cannot be overloaded.
- Useful for memory/resource management.

---

## 🧠 Why This Matters

Constructors and destructors help manage:
- Object lifecycle
- Memory
- Resources (files, dynamic allocation, etc.)
