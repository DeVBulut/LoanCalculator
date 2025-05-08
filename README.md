# 💰 Loan Calculator – C Console Application

This project is a simple C-based console program that calculates your **maximum loan amount** based on your monthly income and living expenses. It applies basic financial logic including interest rate and loan term to determine what a user could potentially afford.

---

## 🧠 How It Works

1. The user inputs their:
   - Annual salary
   - Monthly housing, car, grocery, and utility expenses

2. The program calculates:
   - Monthly income
   - Remaining disposable income
   - Suggested monthly loan payment (10% of disposable income)
   - Maximum loan amount based on fixed interest and term

3. Output includes:
   - Your estimated monthly loan payment
   - The maximum loan amount you can afford

---

## 📈 Financial Assumptions

- **Interest Rate**: 3% annually (0.25% monthly)
- **Loan Term**: 10 years (120 months)
- **Loan Payment Budget**: 10% of leftover monthly income after expenses

The formula used is based on the standard annuity loan model:

```
Loan = (P / r) * (1 - 1 / (1 + r)^n)
```

Where:
- `P` = monthly payment
- `r` = monthly interest rate
- `n` = number of payments (loan term in months)

---

## 🖥️ How to Run

1. Compile with any C compiler:
   ```bash
   gcc loan_calculator.c -o loan_calculator -lm
   ```

2. Run the executable:
   ```bash
   ./loan_calculator
   ```

> Make sure to link with `-lm` for math functions like `pow()`.

---

## 💡 Example

```
Annual Salary: $60000
Housing: $1200
Car: $350
Grocery: $400
Utilities: $250

Monthly payment budget: $115.00
Max Loan: $10892
```

---

## 📜 License

MIT — free to use, modify, and distribute.
This is a learning-focused utility and does not constitute financial advice.
