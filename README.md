# 🎓 NTI × Gestell — Embedded Systems Diploma

### National Telecommunication Institute × Gestell | Hosted at Alamein International University (AIU)

---

<p align="center">

**ATmega32 | Embedded C | AVR | Layered Architecture | Driver Development**

</p>

---

# 📖 About This Repository

This repository is the official workspace for the **Embedded Systems Diploma** offered by the **National Telecommunication Institute (NTI)** & **Gestell**, hosted at **Alamein International University (AIU)**, Summer 2026.

It contains all training content, weekly session materials, hands-on code labs, and the final graduation projects developed by the student teams throughout the program.

---

# 📂 Repository Structure

```text
NTI_AIU-SU26-ES-01
│
├── 📁 Content/                         # Weekly training material & session code
│   ├── Week1/
│   ├── Week2/
│   ├── Week3/
│   └── Week4/
│
├── 📁 Projects/                        # Graduation Projects
│   ├── Smart Home Controller/
│   ├── Automated Parking Lot System/
│   ├── Weather Monitoring & Data Logging Station/
│   └── Greenhouse Climate Control System/
│
└── 📁 Books & DataSheet/               # References & Technical Documentation
```

---

# 🛠️ Training Content Overview

|       Week       | Topics Covered                                                          |
| :--------------: | :---------------------------------------------------------------------- |
| **Week 1** | C Programming Fundamentals, Data Types, Operators, Control Flow         |
| **Week 2** | Functions, Pointers, Arrays, Structs, Enums, File Organization          |
| **Week 3** | Embedded C, Register-level programming, GPIO (DIO Driver), Build System |
| **Week 4** | ADC, Timers, UART, EXTI, EEPROM, LCD, Keypad — Full Driver Suite       |

---

# 🚀 Graduation Projects

Each team was assigned a real-world embedded systems project to implement from scratch, following professional **Layered Architecture** and **Doxygen documentation** standards.

| # | Project                                                                                                                          | Team Leader                 |
| :-: | :------------------------------------------------------------------------------------------------------------------------------- | :-------------------------- |
| 1 | 🏠[Smart Home Controller](<./Projects/Smart%20Home%20Controller/Readme.md>)                                                       | Yasseen Ahmed ELSayed       |
| 2 | 🅿️[Automated Parking Lot System](<./Projects/Automated%20Parking%20Lot%20System/Readme.md>)                                     | Abdalrhman Akl              |
| 3 | 🌦️[Weather Monitoring &amp; Data Logging Station](<./Projects/Weather%20Monitoring%20%26%20Data%20Logging%20Station/Readme.md>) | Abdelrahman Mohamed Ibrahim |
| 4 | 🌱[Greenhouse Climate Control System](<./Projects/Greenhouse%20Climate%20Control%20System/Readme.md>)                             | Sama Mohamed Mahmoud        |

---

# ⚙️ Technical Standards

All projects in this repository must follow these unified standards:

* **Microcontroller:** ATmega32 (AVR 8-bit)
* **Language:** Embedded C (AVR-GCC)
* **Architecture:** Layered Architecture (MCAL → HAL → APP)
* **IDE:** Vs Code 
* **Simulation:** Proteus Professional
* **Documentation:** Doxygen Comment Style (File headers, `@param`, `@return`)
* **Version Control:** Git & GitHub

---

# 🏗️ Project Folder Structure

Every project follows the same standard folder layout:

```text
ProjectName/
│
├── 📁 Src/                  # All source code
│   ├── APP/                 # Application Layer (State Machine, Logic)
│   ├── HAL/                 # Hardware Abstraction Layer
│   ├── MCAL/                # Microcontroller Abstraction Layer
│   ├── LIB/                 # Standard types & bit manipulation
│   └── main.c               # Application Entry Point
│
├── 📁 HardwareDesign/       # Proteus simulation files (.pdsprj)
├── 📁 Presention/           # Project presentation slides
├── 📁 Demo video/           # Demo & testing video recordings
└── 📄 Readme.md             # Full project documentation
```

---

<p align="center">
Diploma offered by <b>National Telecommunication Institute (NTI)</b> & <b>Gestell</b><br>
Hosted at <b>Alamein International University (AIU)</b> — Summer 2026
</p>
