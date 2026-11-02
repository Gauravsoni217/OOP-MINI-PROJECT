# Case Study: Student Record Management System

## 1. Background
Educational institutions maintain student information such as roll numbers, names, and marks. For a small demonstration, this information can be managed using a simple console program.

## 2. Problem
Manual handling of records can make searching and updating information repetitive. A small program can organize common operations in one menu.

## 3. Proposed solution
The application stores student objects in a vector and provides options to add, display, search, update, and delete records. Each student is represented by an object of the `Student` class.

## 4. Design
- `Student` class: holds roll number, name, and marks.
- `findStudent`: searches the collection by roll number.
- `main`: presents the menu and calls the required operations.
- `vector<Student>`: stores the records while the program is running.

## 5. OOP mapping
| Concept | Use in project |
|---|---|
| Class | `Student` defines a student record |
| Object | Each entry is a `Student` object |
| Encapsulation | Data members are private |
| Constructor | Initializes each object |
| Abstraction | Menu gives a simple interface |
| Member functions | `display()` and `update()` operate on student data |

## 6. Workflow
1. Start and show the menu.
2. Read the user's choice.
3. Validate input where required.
4. Run the selected operation.
5. Return to the menu until Exit is selected.

## 7. Test approach
Manually test adding a record, listing records, finding an existing and a missing roll number, updating a record, deleting a record, rejecting a duplicate roll number, and rejecting marks outside 0–100.

## 8. Results
The program supports the required basic record operations in a single execution. The data is held in memory, so it is not retained after the program closes.

## 9. Limitations and future work
The current version has no database, permanent file storage, authentication, or graphical interface. These can be added later if the project scope permits.

## 10. Conclusion
This case study demonstrates how introductory C++ OOP concepts can be applied to a practical record-management problem. It is suitable as a small educational project and can be extended as programming skills improve.
