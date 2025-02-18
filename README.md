# **Libft**  

## **📌 Overview**  
**Libft** is a custom implementation of the C standard library functions. The purpose of this project is to recreate commonly used standard functions like `strlen`, `strcpy`, `atoi`, `malloc`, and more, as well as additional utility functions that are useful for C programming.  

## **📁 Project Structure**  
The project consists of multiple functions categorized as follows:  

### **1️⃣ Libc Functions**  
Reimplementation of standard C library functions:  
- `ft_strlen` - Returns the length of a string.  
- `ft_strcpy` - Copies a string from source to destination.  
- `ft_strdup` - Duplicates a string.  
- `ft_atoi` - Converts a string to an integer.  
- `ft_memset` - Fills a block of memory with a specific value.  
- `ft_memcpy` - Copies memory from source to destination.  

### **2️⃣ Additional Functions**  
Extra utility functions for handling strings, memory, and linked lists:  
- `ft_strjoin` - Concatenates two strings.  
- `ft_split` - Splits a string into an array of words based on a delimiter.  
- `ft_strtrim` - Removes leading and trailing whitespace from a string.  
- `ft_substr` - Extracts a substring from a string.  

## **⚙️ Compilation & Usage**  
1. Clone the repository:  
   ```bash
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```  
2. Compile the library:  
   ```bash
   make
   ```  
3. Include it in your project:  
   ```c
   #include "libft.h"
   ```  
4. Link the compiled library when compiling your program:  
   ```bash
   gcc your_program.c -L. -lft -o your_program
   ```  

## **🛠️ Makefile Commands**  
- `make` - Compiles `libft.a`.  
- `make clean` - Removes object files.  
- `make fclean` - Removes object files and `libft.a`.  
- `make re` - Recompiles the library from scratch.  

## **📜 License**  
This project is part of the **42 School Curriculum**

