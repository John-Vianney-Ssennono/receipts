# Grocery Receipt & Tax Calculator

A simple C program that prompts the user for item quantities, performs basic input validation, and calculates the subtotal, sales tax, and gross total for a grocery purchase.

---

## Features

- **Itemized Pricing**: Calculates costs for pre-defined store items (Bread, Soda, Spices, and Farm Produce).
- **Input Validation**: Checks for negative quantity entries before running calculations.
- **Tax Calculation**: Calculates sales tax based on a fixed 4.25% rate.

---

## Pricing Overview

| Item | Price per Unit |
| :--- | :--- |
| **Bread** | $9.99 |
| **Farm Produce** | $5.99 |
| **Soda** | $1.99 |
| **Spices** | $1.00 |

---

## How to Build and Run

### Prerequisites
- A C compiler such as `gcc` or `clang`.

### Compilation
Run the following command in your terminal:

```bash
gcc -o grocery_calculator main.c -lm
