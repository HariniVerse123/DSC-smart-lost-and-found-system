# DSC Smart Lost and Found System

A beginner-friendly C project for managing lost and found items. This project is written at a basic first-year engineering level using simple C concepts such as structures, arrays, functions, loops, conditions, and strings.

## Features

- Add a lost item request from a user.
- Add a found item report from a finder.
- Match a found item with lost item requests using item name and category.
- Show a simple console notification when a possible match is found.
- Display all lost item requests.
- Display all found item reports.

## Project Files

- `main.c` - Main C source code for the lost and found system.
- `README.md` - Project overview, setup, usage, and features.
- `CONTRIBUTING.md` - Guidelines for contributors.

## C Concepts Used

- `struct`
- arrays
- functions
- `if` conditions
- `switch` statement
- loops
- strings using `char` arrays
- basic input and output

## Requirements

You need a C compiler such as GCC.

## Compile and Run

### Windows with GCC

```bash
gcc main.c -o lost_found.exe
./lost_found.exe
```

### Linux or macOS

```bash
gcc main.c -o lost_found
./lost_found
```

## How It Works

1. A user can create a lost item request.
2. Another user can create a found item report.
3. When a found item is added, the program checks existing lost item requests.
4. If the item name and category match, the program prints the lost user's contact details.
5. This printed message acts as a basic notification.

## Menu Options

```text
1. Add lost item request
2. Add found item report
3. View lost item requests
4. View found item reports
5. Exit
```

## Note

This is a simple console-based beginner project. It does not use a database, email, SMS, or advanced file handling. The notification is shown on the console screen.

## Contributing

Contributions are welcome. Please keep changes simple and beginner-friendly so the project stays easy for students to understand.