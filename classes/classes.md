# Classes in C++

## 📌 What is a Class?

A class is a user-defined data type that combines
data members (variables) and member functions (methods)
into a single unit.

It is the foundation of Object-Oriented Programming (OOP).

---

## 🧱 Basic Syntax

class ClassName {
private:
    // data members

public:
    // member functions
};

---

## 🆚 Class vs Structure

| Class | Structure |
|--------|------------|
| Members are private by default | Members are public by default |
| Used in OOP design | Used for simple data grouping |

In C++, both are almost identical except for default access.

---

## 🔐 Access Specifiers

- private → Accessible only inside the class
- public → Accessible outside the class
- protected → Used in inheritance

---

## 🏗 Constructor

A constructor:
- Has the same name as the class
- Initializes object data
- Runs automatically when object is created

---

## 🎯 Object

An object is an instance of a class.

Example:
Class → Blueprint  
Object → Real-world entity created from blueprint

---

## ⚠ Key OOP Concepts Introduced

- Encapsulation
- Data Hiding
- Abstraction (basic idea)

---

## ⏱ Time Complexity

Depends on method implementation.
Classes themselves do not affect time complexity.
