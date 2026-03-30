# ✍️ Undo/Redo System (C++)

A robust text editor simulation that demonstrates the practical application of the **Stack** data structure to manage state history. This project applies **Object-Oriented Programming (OOP)** principles to provide a seamless Undo and Redo experience.

---
## 🎥 Video Tutorial

[![Undo/Redo System (C++) Tutorial](https://img.youtube.com/vi/AV8cq2wijvI/0.jpg)](https://youtu.be/AV8cq2wijvI)

*Click the image above to watch a complete walkthrough of the Student Management System!*

## 🚀 Features

* **Write Operations:** Add new text content to the editor.
* **Undo System:** Revert to the previous text state using a LIFO stack.
* **Redo System:** Restore states that were recently undone.
* **OOP Architecture:** Clean separation of concerns between data structures, business logic, and UI.
* **Generic Stack:** A custom-built, template-based Stack class for flexibility.

## 🛠️ How It Works

The system utilizes two internal stacks to manage state transitions:
1.  **Undo Stack:** Every time a new text is written, the current state is pushed onto this stack before updating.
2.  **Redo Stack:** When an "Undo" is performed, the current state is moved here to allow for "Redo" functionality.

## 📂 Project Structure

* `clsStack.h`: A custom template-based implementation of the Stack data structure using `std::vector`.
* `clsTextEditor.h`: The core logic for text manipulation and state management.
* `ShowMainMenu.h`: A static UI class that handles user interaction and menu navigation.
* `Global.h`: Manages global access to the editor instance.
* `undo-redo-stack-cpp.cpp`: The main entry point of the application.

## 💻 Sample Usage

```text
====================================
      UNDO/REDO TEXT EDITOR       
====================================
 [1] Write New Text
 [2] Undo
 [3] Redo
 [4] Display Text
 [5] Exit
====================================
Choose an option: 1
Enter text to add: Hello World!

[Result]:
Current Text:
Hello World!
```

## 🏗️ Technical Implementation

* **Language:** C++
* **Concepts:** Templates, Encapsulation, Static Classes, Enums.
* **Data Structures:** Custom Stack.

## 🤝 Developed By
**Alaa-z17** [GitHub Profile](https://github.com/Alaa-z17)
