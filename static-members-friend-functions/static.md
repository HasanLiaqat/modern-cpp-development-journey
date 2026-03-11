# Static Members & Friend Functions in C++

## 📌 Static Data Members

A **static data member** belongs to the class rather than individual objects.

This means:
- Only **one copy exists** for all objects.
- All objects share the same variable.

Example use cases:
- Counting number of objects
- Shared configuration values
- Global class statistics

### Syntax

class ClassName {
    static int variable;
};

Important:
Static variables must be **defined outside the class**.

Example:

int ClassName::variable = 0;

---

## 📌 Static Member Functions

A **static member function** belongs to the class rather than an object.

Characteristics:
- Can access **only static members**
- Called using the **class name**

Example:

ClassName::functionName();

---

## 📌 Friend Functions

A **friend function** is not a member of a class but has access to its private and protected members.

This is useful when:
- Two classes need to cooperate
- External functions need controlled access

### Syntax

friend returnType functionName(parameters);

---

## 📌 Example Use Cases

Static members:
- Object counters
- Shared resources

Friend functions:
- Operator overloading
- Accessing private data for comparisons

---

## ⚠ Important Notes

- Static variables must be defined outside the class.
- Static functions cannot access non-static members directly.
- Friend functions break strict encapsulation but allow controlled access.

---

## 🔍 Reflection

Today I learned:

- How static variables belong to the class instead of objects
- How static functions operate on shared class data
- How friend functions can access private members
- When to use these features in practical programming
