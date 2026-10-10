# Sum Reasoning (`sum-reasoning`)

`sum-reasoning` is a robust, modular C++ command-line simulator designed to help candidates prepare for psychotechnical tests that feature three-operand addition exercises (e.g., $A + B + C = ?$). 

Psychotechnical tests under pressure evaluate both your mental calculation speed and your precision. This tool simulates these conditions with strict input handling, modular architecture, and structured performance tracking.

---

## Features

- **Modular Architecture:** Clean separation of concerns following object-oriented design principles (Math generation, User Interface, and Test Flow management).
- **Robust Input Handling:** Gracefully handles invalid inputs or accidental keystrokes without breaking the program loop.
- **Time & Performance Tracking:** Measures speed and accuracy to help you monitor your progression.
- **Extensible:** Easily adjustable difficulty levels (from single-digit to multi-digit addition).

---

## Project Structure

```text
.
├── Makefile
├── inc/
│   ├── TestManager.hpp     # Test workflow, scoring, and timing logic
│   ├── MathGenerator.hpp   # Operand generation and mathematical logic
│   └── Display.hpp         # Terminal Input/Output management
└── src/
    ├── main.cpp            # Entry point
    ├── TestManager.cpp
    ├── MathGenerator.cpp
    └── Display.cpp
```

---

## Getting Started

### Prerequisites

You need a C++ compiler supporting C++98 or higher (e.g., `g++`, `clang++`) and `make`.

### Compiling and Running

Clone the repository and compile using the provided Makefile (or manually compile source files):

```bash
git clone https://github.com/YOUR_USERNAME/sum-reasoning.git
cd sum-reasoning
make
./sum_reasoning
```

---
