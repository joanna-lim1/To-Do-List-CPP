# To-Do List (C++ Project)

## Overview
This is a simple command-line To-Do List application built in C++. The program allows users to add, view, and remove tasks, storing them persistently in a file (`tasks.txt`).

## Features
- Add new tasks
- View tasks
- Remove tasks
- Persistent storage using a text file (`tasks.txt`)

## Installation & Usage
### 1. Clone the Repository
```sh
git clone https://github.com/joanna-lim1/To-Do-List-CPP.git
cd To-Do-List-CPP
```

### 2. Compile the Program
Use the following command to compile the program with C++11 support:
```sh
g++ -std=c++11 src/main.cpp -o todo
```

### 3. Run the Program
```sh
./todo
```

### 4. Program Menu
When you run the program, you'll see the following menu:
```
To-Do List
1. View Tasks
2. Add Task
3. Remove Task
4. Exit
Enter your choice:
```
- **Option 1:** View all saved tasks.
- **Option 2:** Add a new task to the list.
- **Option 3:** Remove a task by selecting its number.
- **Option 4:** Exit the program.

## File Structure
```
To-Do-List-CPP/
│-- src/
│   ├── main.cpp      # Main C++ program
│-- tasks.txt         # Stores tasks (auto-generated)
│-- README.md         # Project documentation
│-- .gitignore        # Ignores tasks.txt file
```

## Author
Created by Joanna Lim (@joanna-lim1)

