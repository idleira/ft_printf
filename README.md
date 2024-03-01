# ft_printf - @42Wolfsburg
## description
this project is pretty straight forward.

we recode printf and learn how to use variadic arguments.

## 

these are some of the **resources** i used:

• [a printf format reference page (cheat sheet) (c, java, scala, etc.)](https://alvinalexander.com/programming/printf-format-cheat-sheet/)

• [mastering the printf function in c: a comprehensive guide](https://medium.com/@z_kiprotich/mastering-the-printf-function-in-c-a-comprehensive-guide-f6b4f52a1b1e)

• printf reference from [cplusplus](https://cplusplus.com/reference/cstdio/printf/)

## 

## usage
1. clone this repository: `git clone git@github.com:idleira/ft_printf.git ft_printf && cd ft_printf`
2. compile the library with `make`;
3. to include ft_printf in your code:
  
   • include the header: `#include "ft_printf.h"`;

   • or complile with the library: `gcc your_file.c libftprintf.a`.
   
## example
source code:

```
int	main(void)
{
int				d;
unsigned int	u;
int				hex;
int				*ptr;

d = 42;
ptr = &d;
hex = 42;
u = 42424242;
ft_printf("my character: %c\n", 'i');
printf("character: %c\n\n", 'i');
ft_printf("my string: %s\n", "bonjour");
printf("string: %s\n\n", "bonjour");
ft_printf("my decimal integer: %d\n", d);
printf("decimal integer: %d\n\n", d);
ft_printf("my decimal integer (with sign): %i\n", -d);
printf("decimal integer (with sign): %i\n\n", -d);
ft_printf("my unsigned integer: %u\n", u);
printf("unsigned integer: %u\n\n", u);
ft_printf("my percent sign: %%\n");
printf("percent sign: %%\n\n");
ft_printf("my hexadecimal (lowercase): %x\n", hex);
printf("hexadecimal (lowercase): %x\n\n", hex);
ft_printf("my hexadecimal (uppercase): %X\n", hex);
printf("hexadecimal (uppercase): %X\n\n", hex);
ft_printf("my pointer: %p\n", ptr);
printf("pointer: %p\n\n", ptr);
return (0);
}
```

output:

```
my character: i
character: i

my string: bonjour
string: bonjour

my decimal integer: 42
decimal integer: 42

my decimal integer (with sign): -42
decimal integer (with sign): -42

my unsigned integer: 42424242
unsigned integer: 42424242

my percent sign: %
percent sign: %

my hexadecimal (lowercase): 2a
hexadecimal (lowercase): 2a

my hexadecimal (uppercase): 2A
hexadecimal (uppercase): 2A

my pointer: 0x7FFD36D6FF14
pointer: 0x7ffd36d6ff14

```

## my final grade
![ft_printf grade](https://github.com/idleira/ft_printf/assets/127216218/fdba572f-78fb-463c-9fe8-b5b51f8b954b)
