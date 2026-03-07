# File Handling in C++

## 📌 What is File Handling?

File handling allows programs to:
- Store data permanently
- Read data from files
- Write data to files

This is useful for saving program data such as
records, logs, and user information.

---

## 🧠 File Streams in C++

C++ uses the `<fstream>` library for file operations.

Main classes:

- ifstream → input file stream (read from file)
- ofstream → output file stream (write to file)
- fstream → input + output operations

---

## 🔹 Writing to a File

Use `ofstream`.

Example steps:
1. Create file stream object
2. Open the file
3. Write data
4. Close the file

---

## 🔹 Reading from a File

Use `ifstream`.

Steps:
1. Open file
2. Read data
3. Close file

---

## 🧱 Basic Syntax

ofstream file("filename.txt");
file << "Hello World";
file.close();

ifstream file("filename.txt");
file >> data;
file.close();

---

## ⚠ Important Notes

- Always close files after operations.
- Use `ios::app` to append data instead of overwriting.
- Check if the file opened successfully.
