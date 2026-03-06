# Operator Overloading in C++

## 📌 What is Operator Overloading?

Operator overloading allows us to redefine how operators
work with user-defined data types (classes).

It makes objects behave like built-in data types.

Example:
Instead of writing:

add(obj1, obj2)

We can write:

obj1 + obj2

---

## 🧠 Why Use Operator Overloading?

- Improves code readability
- Makes classes easier to use
- Allows natural syntax for objects

Example:
Complex numbers
Vectors
Matrices

---

## 🧱 Basic Syntax

returnType operator symbol(parameters) {
    // code
}

Example:

Complex operator + (Complex c)

---

## 🔹 Example

If we overload `+`, we can add two objects.

obj1 + obj2

instead of calling a function.

---

## ⚠ Rules of Operator Overloading

- Only existing operators can be overloaded.
- Cannot create new operators.
- Some operators cannot be overloaded.

Examples that cannot be overloaded:
- ::
- .
- ?:
- sizeof

---

## 🎯 Commonly Overloaded Operators

+  Addition  
-  Subtraction  
*  Multiplication  
== Comparison  
<< Output stream  
>> Input stream
