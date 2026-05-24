# DSC Smart Lost and Found System

The main idea of this project is that a user can add a lost item request and another user can add a found item report. If the found item matches with any lost item request, the program shows a message with the lost user's contact details.

## What This Project Does

- Takes lost item details from the user.
- Takes found item details from the finder.
- Compares the found item with lost item requests.
- Shows a possible match if item name and category are same.
- Displays lost item requests.
- Displays found item reports.
- Shows a simple notification message on the screen.

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
- basic input and output

## Files in This Repository

- `main.c` - C program code
- `README.md` - Information about the project

## Menu Options

When the program runs, it shows these options:

```text
1. Add lost item request
2. Add found item report
3. View lost item requests
4. View found item reports
5. Exit
```

## How Matching Works

The matching is kept simple. The program checks whether the found item name and category are the same as any lost item request. If both match, it prints a possible match message and shows the lost user's contact details.

This is only a basic console notification, not an email or SMS notification.

## Example

If one user enters a lost item like:

```text
Item name: wallet
Category: accessories
```

And another user reports a found item like:

```text
Item name: wallet
Category: accessories
```

Then the program will show that a possible match is found.

