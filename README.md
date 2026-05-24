# DSC Smart Lost and Found System

A C-based smart lost and found system for registering, searching, claiming, and managing lost and found items. The project is designed for student communities, clubs, classrooms, and campus help desks that need a simple console-based tracking system.

## Features

- Register lost items with name, category, description, location, contact details, and proof details.
- Register found items with the same structured information.
- Smart keyword search across item name, category, location, and description.
- Match score system to show the most relevant results first.
- Claim verification using a secret proof detail.
- Mark items as claimed after successful verification.
- List all registered items.
- Save and load records using a local data file when the C program is run.

## Project Files

- `main.c` - Main C source code for the smart lost and found system.
- `README.md` - Project overview, setup, usage, and contribution guide.
- `CONTRIBUTING.md` - Contributor guidelines for improving the project.

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

## How to Use

1. Run the program.
2. Choose whether to register a lost item or a found item.
3. Enter item details such as name, category, description, location, contact, and secret proof.
4. Use smart search to find matching items.
5. Claim an item by entering its ID and the correct proof detail.
6. Exit the program to save the latest records.

## Data Storage

The program stores records in a file named `lost_found_data.txt` when it runs. This file is generated automatically by the program and is not required to be written manually.

## Example Use Cases

- A student reports a lost ID card.
- Someone finds a notebook and registers it as found.
- The owner searches by keyword such as `notebook`, `ID card`, `library`, or `electronics`.
- The owner claims the item by giving the correct proof detail.

## Contributing

Contributions are welcome. You can improve the system by adding better search, file handling, input validation, sorting, reports, or a graphical interface.

Please read `CONTRIBUTING.md` before opening a pull request.

## License

This project is open for learning and academic contribution. You may add a license file if you want to define formal usage rights.
# DSC-smart-lost-and-found-system
