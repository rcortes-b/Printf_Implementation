<div align="center">
<h1 align="center">
<img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/ft_printfe.png" alt="ft_printf 42 project badge"/>
<br>ft_printf</h1>
<h3>◦ An implementation of the well-known Printf function </h3>

---

## 📖 Table of Contents
- [📍 Overview 📍](#-overview-)
- [📍 Rules 📍](#-rules-)
- [🔎 What is implemented?](#-what-is-implemented)
- [🚀 Getting Started](#-getting-started--)
    - [🔧 Installation](#-installation)
    - [🤖 Use ft_printf](#-use-ft_printf)
- [Extra: Check out my profile on the Intranet](#--check-out-my-profile-on-the-intra-of-42-school-%EF%B8%8F)

---

## 📍 Overview 📍

This project is about creating a function that replicates the behaviour of the printf function in C.  


---

## 📍 Rules 📍

The functions have to follow a strict rule. For example, you cannot intitialize a variable in the line where you declare it.


---


## 🔎 _What is implemented?_

➤ This function supports the following conversions: *cspiduxX%*

➡️ %c: Print a single character.

➡️ %s: Print a null-terminated string.

➡️ %d or %i: Print a signed integer.

➡️ %X or %x: Print an unsigned integer in hexadecimal format.

➡️ %p: Print the address of a pointer in hexadecimal format.

➡️ %u: Print an unsigned integer in decimal format.
 
➡️ %%: Print a percent sign '%'.

➤ Parameters

➡️ " *s " – A pointer to a null-terminated string containing the format control string. This string may contain ordinary characters and format specifications.

➡️ " … "  – A variable number of arguments that correspond to the values to be formatted and printed based on the placeholders in the format string.

➤ Return Value

➡️ The total number of characters printed, excluding the null-terminating byte. If an error occurs or an unsupported conversion specifier is encountered, it returns -1.

---

## 🚀 Getting Started  🚀 

### 🔧 Installation

1. Clone the Printf_Implementation repository:
```sh
git clone https://github.com/rcortes-b/Printf_Implementation.git
```

2. Change to the project directory:
```sh
cd Printf_Implementation
```

3. Compile the dependencies:
```sh
make
```

### 🤖 Use ft_printf
Once the library is successfully compiled, you can use it in your projects. Link the `libftprintf.a` file to your program.
To compile your program with Printf, use:
```sh
gcc -o my_file.c libftprintf.a && ./a.out
```
### - Check out my profile on the intra of 42 school ↙️
[https://profile.intra.42.fr/users/rcortes-]

---

[**Return**](#Top)

---
