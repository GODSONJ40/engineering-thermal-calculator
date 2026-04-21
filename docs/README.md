🔧 Engineering Thermal Process Calculator (C++)

A lightweight engineering computation tool that models thermal energy transfer using fundamental thermodynamic principles. Built in modern C++ with a modular design, this project demonstrates applied engineering problem-solving through software development.

📌 Overview

The Engineering Thermal Process Calculator computes the heat energy required to change the temperature of a material using:

Q=mcΔT

Where:

Q = Heat energy (Joules)
m = Mass (kg)
c = Specific heat capacity (J/kg°C)
ΔT = Temperature change (°C)

The application supports multiple materials with predefined thermal properties and provides instant calculation results through a console-based interface.

⚙️ Features
🧮 Real-time thermodynamic calculations
🧪 Material selection (Water, Steel, Aluminum)
🧱 Modular C++ architecture (separation of logic & interface)
🚨 Input validation and error handling
📊 Clear and structured console output
🔄 Easily extensible for future GUI (Qt) integration

🧰 Technologies Used
C++
Standard Template Library (STL)
Object-Oriented Programming (OOP)
Command-line interface (CLI)
Git version control

📁 Project Structure
EngineeringCalculator/
│
├── src/
│   ├── main.cpp
│   ├── calculator.cpp
│   └── calculator.h
│
├── docs/
│   └── README.md
│
└── calculator.exe (ignored in repo via .gitignore)

▶️ How to Compile & Run
💻 Windows (Using g++ / MinGW)

Open a terminal in the project directory:

g++ src/main.cpp src/calculator.cpp -o calculator
calculator.exe
🍎 Linux / 🖥️ macOS

Open terminal in the project directory:

g++ src/main.cpp src/calculator.cpp -o calculator
./calculator
🧪 Example Output
=== Engineering Thermal Process Calculator ===

Enter mass (kg): 10  
Enter initial temperature (°C): 25  
Enter final temperature (°C): 80  
Select material (water / steel / aluminum): water  

=== RESULTS ===
Material: water  
Temperature Change: 55 °C  
Heat Required: 2302300 Joules  
Calculation complete.

- see screenshots

🧠 Engineering Context
This project simulates real-world engineering calculation tools used in industrial environments such as:
Process engineering
Metallurgical systems
Thermal modeling
Energy balance calculations

It demonstrates the transition from theoretical physics equations into practical software tools.

🚀 Future Improvements
Qt-based graphical user interface (GUI)
Data export (CSV / Excel)
Multi-scenario comparison mode
Visualization of thermal curves
Integration with engineering datasets

👨‍💻 Author
Godson Jean
GitHub: https://github.com/GODSONJ40
LinkedIn: http://www.linkedin.com/in/godson-jean-03854a130

