# \_printf :pencil2:
## A printf clone function that prints formatted strings to standard output 

### **Usage**
```c
 int _printf(const char *format, ...);
```

### Files

##### Parent Function

File | Description
-------|----------------------
\_printf.c | Prints formatted string to standard output

##### Manager Functions

File | Description
-------|----------------------
fmt_mngr.c | Retrieves the appropriate function pointer and passes an argument; returns converted string
li_fp_mngr.c | Selects appropriate long integer conversion function
lu_fp_mngr.c | Selects appropriate unsigned long integer conversion function
ptr_fp_mngr.c | Selects appropriate pointer conversion function
cpy_fmt_spec.c | Validates format specifier and copies isolated specifier a new string
\_print_string.c | Prints formatted text from buffer
arg_type_identifier.c | Identifies data type according to format specifier
##### Conversion Functions

File | Description
-------|----------------------
r_reverse_cnvrt.c | Reverses a string
R_rot13_cnvrt.c | Encodes a string in rot13
s_string_cnvrt.c | Copies string argument to new buffer
c_char_cnvrt.c | Converts a character to a string
d_decimal_cnvrt.c | Converts a decimal to a string
i_int_cnvrt.c | Converts an integer to a string
u_unsigned_cnvrt.c | Converts an unsigned integer to a string

##### Helper Functions

File | Description
-------|----------------------
helper_functions.c | File containing the following helper functions:
- [x] \_strlen - A function that finds the length of a string
- [x] \_itoa - A function that converts a number to a string
- [x] \_strncpy - A function that copies n bytes of src to dest string
- [x] \_revstr - A function that reverses a string

##### Accessory Files

File | Description
-------|----------------------
main.h | header file
man_3_printf | \_printf manual page
README.md | project description

## Specifier Usage

#### Conversion Specifiers
Format specifiers are implemented as follows: `%[flags][width][.precision][length]type`.

Type | Description
-------|----------------------
% | Signifies format specifier
s | Convert character pointer (string)
c | Convert character
d | Convert decimal
i | Convert integer
u | Convert unsigned integer
r | Reverse string
R | Encodes string into rot13

#### Length modifiers
Length | d i | u o x X
-------|----------|----------------------
l |long int | unsigned long int
h |short int | unsigned short int

## printf()
The printf project is a collaboration between Ogwugwa Chuks and Abdulqoyyum Aileru, actual students of Software Engineering at Holberton School, were a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	  int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

    %[flags][length]specifier
    
If the program runs successfully, the **return value** is the amount of chars printed.
   
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
| %  | Character  |

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| +  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |
| #  | Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero | o, x, X |

| Length | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| l | Prints a long int or unsigned long int | i, d, o, u, x and X |
| h | Prints a short int or unsigned short int | i, d, o, u, x and X |

------------

## Examples

1. Printing the string of chars "Hello, Holberton":
   + Use: `_printf("Hello Hol%s.", "berton");`
   + Output: `Hello Holberton.`
   
2. Printing an integer number:
   + Use: `_printf("10 + 10 is equal to %d.", 20);`
   + Output: `10 + 10 is equal to 20.`
   
3. Printing a binary, octal and hexadecimal:
   + Use: `_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);`
   + Output: `10 in binary is [1010], in octal is [12] and in hexadecimal is [A]`
   
4. Printing a string codified in ROT13:
   + Use: `_printf("Hello in ROT13 is %R", "Hello");`
   + Output: `Hello in ROT13 is Urybb`

Using flags and length tags:

5. Printing the string of chars "Hello, Holberton":
   + Use: `_printf("2 * 2 = %+d and 5 * -5 = %+i", 4, -25);`
   + Output: `2 * 2 = +4 and 5 * -5 = -25`
   
6. Printing a long integer number and short integer number:
   + Use: `_printf("1 million as a long int is %ld, but as a short int is %hd", 1000000, 1000000);`
   + Output: `1 million as a long int is 1000000, but as a short int is 16960`


------------

#### Return value
If successful, \_printf will return the number of characters printed, excluding the null byte, else if \_printf encounters an error, the return value will be -1.

#### Authors
[Abdulqoyyum Aileru](https://github.com/olagold-hackxx)
[Chuks Ogwugwa](https://github.com/Chuks2121)