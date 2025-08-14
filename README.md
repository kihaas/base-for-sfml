# Base for SFML — CLion Starter Template

A minimal, working **starter template** for setting up **SFML** in **CLion** (C++ IDE). This repository stems from the author's own frustrating experience with CLion's SFML integration—but now it's simplified and made functional.

---

##  Why This Template Exists

I struggled to integrate SFML into CLion—issues with linking, configuration, and IDE settings were common blockers. This repository serves as a **reliable base** that "just works" in CLion across platforms. Use it to save time and eliminate setup friction.

---

##  Features

- Fully configured **CMakeLists.txt** for:
  - Finding and linking SFML (Graphics, Window, System modules)
  - Compatible with both standalone SFML and `FetchContent` setup
- Simple `main.cpp` to demonstrate a working SFML window
- Cross-platform support (Windows, macOS, Linux)

---

##  Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/kihaas/base-for-sfml.git
cd base-for-sfml
