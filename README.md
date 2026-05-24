# DSC Smart Lost and Found System

This is a simple C language project for a smart lost and found system. It is made like a basic first year engineering project using the concepts we learned in C programming.

The main idea of this project is that a user can add a lost item request and another user can add a found item report. If the found item matches with any lost item request, the program shows a message with the lost user's contact details.

## What This Project Does

- Takes lost item details from the user.
- Takes found item details from the finder.
- Compares the found item with lost item requests.
- Shows a possible match if item name and category are same.
- Displays lost item requests.
- Displays found item reports.
- Saves the entered data in text files.
- Loads old data when the program starts again.

## Concepts Used

This project uses basic C concepts like:

- structures
- arrays
- strings
- functions
- if conditions
- switch case
- for loop
- do while loop
- #define
- file handling using `.txt` files
- basic input and output

## Files in This Repository

- `main.c` - contains the main menu and calls the functions
- `lost_found.h` - contains structures, constants, and function declarations
- `lost_found.c` - contains lost and found item functions
- `file_storage.c` - contains file saving and loading functions
- `README.md` - information about the project
- `TEAM_WORK.md` - division of work for group members

## Menu Options

When the program runs, it shows these options:

```text
1. Add lost item request
2. Add found item report
3. View lost item requests
4. View found item reports
5. Search lost item
6. Save and exit
```

## How Matching Works

The matching is kept simple. The program checks whether the found item name and category are the same as any lost item request. If both match, it prints a possible match message and shows the lost user's contact details.

This is only a basic console notification, not an email or SMS notification.

## Data Storage

The program stores user input in two text files:

- `lost_items.txt`
- `found_items.txt`

These files are created when the program is compiled and run.

## Note

This project is made for learning purpose. It is not an advanced system and does not use database, internet, email, or SMS. It is a simple C program to understand how a lost and found system can work.