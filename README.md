# Student Record Management System (C++ OOP)

A beginner-friendly, menu-driven C++ mini-project for managing basic student records. This project is designed for a BCA Object-Oriented Programming (OOP) submission and a GitHub repository.

## Features
- Add a student record
- Display all records
- Search by roll number
- Update a student's name and marks
- Delete a record
- Reject duplicate roll numbers
- Validate marks between 0 and 100
- Simple console interface

## Detailed case study
The detailed case study is included in `docs/Complete_Case_Study.docx` (editable) and `docs/Complete_Case_Study.pdf` (printable). It covers requirements, feasibility, module design, algorithms, OOP concepts, testing, complexity, data integrity, limitations, and future enhancements.

## Front page
The supplied university cover page has been added to the beginning of both PDF reports and recreated in the editable Word documents. The original supplied PDF is preserved as `docs/Supplied_Front_Page.pdf`.

## Complete case study
The full case study is available as an editable Word document (`docs/Complete_Case_Study.docx`) and a printable PDF (`docs/Complete_Case_Study.pdf`). A concise Markdown version is also included as `docs/Case_Study.md`.

## OOP concepts demonstrated
- **Class and object:** `Student` models each record.
- **Encapsulation:** data members are private and accessed through public methods.
- **Constructor:** initializes a student's data.
- **Abstraction:** menu options hide implementation details from the user.
- **Member functions:** display and update student details.

## Requirements
- C++ compiler supporting C++17 (GCC/G++, Clang, or a compatible compiler)
- Terminal or an IDE such as VS Code, Code::Blocks, or Xcode command-line tools

No external libraries or database are required.

## Compile and run

### macOS / Linux
From the project root:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o student_records
./student_records
```

### Windows (MinGW-w64)
```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o student_records.exe
student_records.exe
```

In VS Code, open the project folder, open `src/main.cpp`, and run the commands in the integrated terminal.

## Example session

```text
===== STUDENT RECORD MANAGEMENT SYSTEM =====
1. Add Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
6. Exit
Enter your choice: 1
Enter Roll Number: 101
Enter Name: Rahul Sharma
Enter Marks (0-100): 85
Student added successfully!
```

Records are stored in memory only. They disappear after the program closes. Permanent file/database storage is listed as a future enhancement.

## Project structure

```text
Student_Record_Management_System/
├── src/
│   └── main.cpp
├── docs/
│   ├── Project_Report.docx
│   ├── Project_Report.pdf
│   ├── Case_Study.md
│   ├── Complete_Case_Study.docx
│   ├── Complete_Case_Study.pdf
│   ├── Viva_Questions.md
│   └── Test_Cases.md
├── screenshots/
│   └── README.txt
├── tests/
│   └── manual_test_plan.txt
├── .gitignore
├── README.md
└── LICENSE
```

## GitHub upload instructions
1. Sign in at https://github.com and click **New repository**.
2. Use a repository name such as `student-record-management-cpp`.
3. Set it to Public or Private according to your faculty's instructions.
4. Do not initialize it with a second README if you will upload this folder as-is.
5. On your Mac, open Terminal and move into this project folder.
6. Run:

```bash
git init
git add .
git commit -m "Add C++ OOP student record management project"
git branch -M main
git remote add origin https://github.com/YOUR-USERNAME/student-record-management-cpp.git
git push -u origin main
```

Replace `YOUR-USERNAME` with your GitHub username. If Git is not configured, GitHub may ask you to sign in or configure your identity first. Alternatively, use GitHub's **Add file → Upload files** option in the browser.

## Suggested screenshots for submission
Capture real screenshots after running the program:
1. Main menu
2. Add student success message
3. Display all students
4. Search result
5. Update result
6. Delete result

Save screenshots in the `screenshots/` folder. Do not label sample text as a real execution screenshot.

## Academic note
Personalize the cover page with your actual details and follow your faculty's formatting requirements. Make sure you understand the code and can explain the OOP concepts during viva.

## Author
**Student:** Gaurav Soni  
**Course:** BCA  
**Subject:** Object-Oriented Programming Using C++  
**College:** Chandigarh University  
**Faculty:** Add faculty name
