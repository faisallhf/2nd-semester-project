# 2nd-semester-project
This is my second semester project in c++.
This C++ program appears to be a basic database system for storing information about students, teachers, and employees.
1. **Classes for Data Storage (student, Employee, teacher):**
   - These classes are used to store information about students, employees, and teachers. They have attributes like name, ID, age, mobile number, etc., and methods for setting and displaying this information.

2. **Menu and User Interface (menu, choice):**
   - The `menu` function displays an initial menu with options to enter data for students, teachers, employees, or view data from files.
   - The `choice` function handles user input and directs them to various data entry and viewing functions based on their choice.

3. **Data Entry Functions (studata, tecdata, Empdata):**
   - These functions allow the user to input data for students, teachers, and employees, respectively.
   - User inputs for each category include personal information like name, age, and contact details.
   - Data is then stored in separate text files (`Student Data.txt`, `Teacher Data.txt`, `Employee Data.txt`) and displayed for confirmation.

4. **Manager Functions (manager):**
   - The `manager` function provides options to view data for students, teachers, or employees or return to the main menu.
   - It directs the user to specific viewing functions based on their choice.

5. **Viewing Data Functions (students, teachers, Employeer):**
   - These functions read and display data stored in the corresponding text files.
   - Users can view lists of all students, teachers, or employees as per their selection.

6. **Welcome Screen (Welcome_Screen):**
   - This function displays a decorative welcome screen at the beginning of the program.

7. **File Handling (ifstream, ofstream):**
   - The program uses file handling to read and write data to text files for persistent storage and retrieval.

8. **Error Handling and Navigation:**
   - The program includes error handling to handle incorrect user inputs and provides options to navigate through the menu and submenus.

Overall, this project aims to create a simple database system for managing and viewing information about students, teachers, and employees. Users can input data, view stored data, and return to the main menu for additional actions. The data is stored in text files for future reference.
