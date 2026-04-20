_This project has been created as part of the 42 curriculum by vcoevert_

# Libft by Vincent Coevert
This is a library created by me for use in future C projects during my Codam curriculum.
The goal of this project is to learn how to create a library, learn how to use Makefile, learn how the standard libc functions work and how to use them effectively and lastly learn about linked lists.

## Instructions
To make libft.a type `make` in the root of the git.<br>
Typing `make libft.a` and `make all` will also create it.<br>
Typing `make re` will remove the object files and libft.a, then remake it even if no changes were detected.<br>
To remove the object files type `make clean`.<br>
If you also want to also remove libft.a you can type either:<br>
`make fclean`, `make flcean` or `make flcaen`.

## Resources
My peers!! Including but not limited to:<br>
alalimov<br>
biversen<br>
cklos<br>
cpfister<br>
ivan-der<br>
mde-beer<br>
odschreu<br>
olistokes<br>
stehoffm<br>
tvan-haa<br>
varaniba<br>

The man pages of all Libc functions, ar(1), write(2) and open(2).

<https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm><br>
<https://www.tutorialspoint.com/cprogramming/c_type_casting.htm><br>
<https://stackoverflow.com/questions/7109964/creating-your-own-header-file-in-c><br>
<https://linux.die.net/man/1/ar><br>
<https://github.com/tassavarat/holbertonschool-low_level_programming/tree/master/0x1C-makefiles><br>
<https://unix.stackexchange.com/questions/705587/why-does-my-makefile-keep-recompiling-when-there-are-no-changes><br>
<https://www.gnu.org/software/make/manual/html_node/Phony-Targets.html><br>
<https://en.wikipedia.org/wiki/Ternary_conditional_operator><br>
<https://stackoverflow.com/questions/4415910/memcpy-vs-memmove><br>
<https://www.w3schools.com/c/c_random_numbers.php><br>
<https://stackoverflow.com/questions/199333/how-do-i-detect-unsigned-integer-overflow><br>
<https://gcc.gnu.org/onlinedocs/gcc-4.0.0/gcc/Function-Attributes.html><br>
<https://github.com/darsaveli/Readme-Markdown-Syntax><br>
<https://github.com/xicodomingues/francinette/tree/master><br>
<https://www.geeksforgeeks.org/c/linked-list-in-c/><br>
<br>
AI was not used in this project.<br>

## Description of the library:
The library contains reimplentations of the following libc functions, that behave in the same way as the originals. The only functional difference is that all their prototypes start with "ft_"<br>
[isalpha](https://linux.die.net/man/3/isalpha)
[isdigit](https://linux.die.net/man/3/isdigit)
[isalnum](https://linux.die.net/man/3/isalnum)
[isascii](https://linux.die.net/man/3/isascii)
[isprint](https://linux.die.net/man/3/isprint)
[strlen](https://linux.die.net/man/3/strlen)
[memset](https://linux.die.net/man/3/memset)
[bzero](https://linux.die.net/man/3/bzero)
[memcpy](https://linux.die.net/man/3/memcpy)
[memmove](https://linux.die.net/man/3/memmove)
[strlcpy](https://linux.die.net/man/3/strlcpy)
[strlcat](https://linux.die.net/man/3/strlcat)
[toupper](https://linux.die.net/man/3/toupper)
[tolower](https://linux.die.net/man/3/tolower)
[strchr](https://linux.die.net/man/3/strchr)
[strrchr](https://linux.die.net/man/3/strrchr)
[strncmp](https://linux.die.net/man/3/strncmp)
[memchr](https://linux.die.net/man/3/memchr)
[memcmp](https://linux.die.net/man/3/memcmp)
[strnstr](https://www.daemon-systems.org/man/strnstr.3.html)
[atoi](https://linux.die.net/man/3/atoi)
[calloc](https://linux.die.net/man/3/calloc)
[strdup](https://linux.die.net/man/3/strdup)

My version of the library also has these extra libc functions because i thought they'd be useful.<br>
[islower](https://linux.die.net/man/3/islower)
[isspace](https://linux.die.net/man/3/isspace)
[isupper](https://linux.die.net/man/3/isupper)
[strcmp](https://linux.die.net/man/3/strcmp)
[strndup](https://linux.die.net/man/3/strndup)

It also contains these additional functions:<br><br>
#### Function Name: ```ft_substr```<br>
Prototype: ```char *ft_substr(char const *s, unsigned int start, size_t len);```<br>
Parameters:
```
s: The original string from which to create the
substring.
start: The starting index of the substring within
’s’.
len: The maximum length of the substring.
```
Return Value: 
```
The substring.
NULL if the allocation fails.
```
Description:
```
Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.
```
#### Function Name: ```ft_strjoin```<br>
Prototype: ```char *ft_strjoin(char const *s1, char const *s2);```<br>
Parameters:
```
s1: The prefix string.
s2: The suffix string.
```
Return Value: 
```
The new string.
NULL if the allocation fails.
```
Description:
```
Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.
```
#### Function Name: ```ft_strtrim```<br>
Prototype: ```char *ft_strtrim(char const *s1, char const *set);```<br>
Parameters:
```
s1: The string to be trimmed.
set: The string containing the set of characters
to be removed.
```
Return Value: 
```
The trimmed string.
NULL if the allocation fails.
```
Description:
```
Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
```
#### Function Name: ```ft_split```<br>
Prototype: ```char **ft_split(char const *s, char c);```<br>
Parameters:
```
s: The string to be split.
c: The delimiter character.
```
Return Value: 
```
The array of new strings resulting from the split.
NULL if any allocation fails.
The returned structure will be released using: 1)
free() on each string in the array; 2) free() the
array itself.
```
Description:
```
Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.
```
#### Function Name: ```ft_itoa```<br>
Prototype: ```char *ft_itoa(int n);```<br>
Parameters:
```
n: The integer to convert
```
Return Value: 
```
The string representing the integer.
NULL if the allocation fails.
```
Description:
```
Allocates memory (using malloc(3)) and returns
a string representing the integer received as an
argument. Negative numbers must be handled.
```
#### Function Name: ```ft_strmapi```<br>
Prototype: ```char *ft_strmapi(char const *s, char (*f)(unsigned int, char));```<br>
Parameters:
```
s: The string to iterate over.
f: The function to apply to each character.
```
Return Value: 
```
The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
```
Description:
```
Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f.
```
#### Function Name: ```ft_striteri```<br>
Prototype: ```void ft_striteri(char *s, void (*f)(unsigned int, char*));```<br>
Parameters:
```
s: The string to iterate over.
f: The function to apply to each character.
```
Return Value: 
```
None
```
Description:
```
Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.
```
#### Function Name: ```ft_putchar_fd```<br>
Prototype: ```void ft_putchar_fd(char c, int fd);```<br>
Parameters:
```
c: The character to output.
fd: The file descriptor on which to write.
```
Return Value: 
```
None
```
Description:
```
Outputs the character ’c’ to the specified file
descriptor.
```
#### Function Name: ```ft_putstr_fd```<br>
Prototype: ```void ft_putstr_fd(char *s, int fd);```<br>
Parameters:
```
s: The string to output.
fd: The file descriptor on which to write.
```
Return Value: 
```
None
```
Description:
```
Outputs the string ’s’ to the specified file
descriptor.
```
#### Function Name: ```ft_putendl_fd```<br>
Prototype: ```void ft_putendl_fd(char *s, int fd);```<br>
Parameters:
```
s: The string to output.
fd: The file descriptor on which to write.
```
Return Value: 
```
None
```
Description:
```
Outputs the string ’s’ to the specified file
descriptor followed by a newline.
```
#### Function Name: ```ft_putnbr_fd```<br>
Prototype: ```void ft_putnbr_fd(int n, int fd);```<br>
Parameters:
```
n: The integer to output.
fd: The file descriptor on which to write.
```
Return Value: 
```
None
```
Description:
```
Outputs the integer ’n’ to the specified file
descriptor.
```
#### Function Name: ```ft_lstnew```<br>
Prototype: ```t_list *ft_lstnew(void *content);```<br>
Parameters:
```
content: The content to store in the new node.
```
Return Value: 
```
A pointer to the new node
```
Description:
```
Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.
```
#### Function Name: ```ft_lstadd_front```<br>
Prototype: ```void ft_lstadd_front(t_list **lst, t_list *new);```<br>
Parameters:
```
lst: The address of a pointer to the first node of
a list.
new: The address of a pointer to the node to be
added.
```
Return Value: 
```
None
```
Description:
```
Adds the node ’new’ at the beginning of the list.
```
#### Function Name: ```ft_lstsize```<br>
Prototype: ```int ft_lstsize(t_list *lst);```<br>
Parameters:
```
lst: The beginning of the list.
```
Return Value: 
```
The length of the list
```
Description:
```
Counts the number of nodes in the list.
```
#### Function Name: ```ft_lstlast```<br>
Prototype: ```t_list *ft_lstlast(t_list *lst);```<br>
Parameters:
```
lst: The beginning of the list.
```
Return Value: 
```
Last node of the list
```
Description:
```
Returns the last node of the list.
```
#### Function Name: ```ft_lstadd_back```<br>
Prototype: ```void ft_lstadd_back(t_list **lst, t_list *new);```<br>
Parameters:
```
lst: The address of a pointer to the first node of
a list.
new: The address of a pointer to the node to be
added.
```
Return Value: 
```
None
```
Description:
```
Adds the node ’new’ at the end of the list.
```
#### Function Name: ```ft_lstdelone```<br>
Prototype: ```void ft_lstdelone(t_list *lst, void (*del)(void *));```<br>
Parameters:
```
lst: The node to free.
del: The address of the function used to delete
the content.
```
Return Value: 
```
None
```
Description:
```
Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.
```
#### Function Name: ```ft_lstclear```<br>
Prototype: ```void ft_lstclear(t_list **lst, void (*del)(void *));```<br>
Parameters:
```
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
```
Return Value: 
```
None
```
Description:
```
Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.
```
#### Function Name: ```ft_lstiter```<br>
Prototype: ```void ft_lstiter(t_list *lst, void (*f)(void *));```<br>
Parameters:
```
lst: The address of a pointer to a node.
f: The address of the function to apply to each
node’s content.
```
Return Value: 
```
None
```
Description:
```
Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
```
#### Function Name: ```ft_lstmap```<br>
Prototype: ```t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));```<br>
Parameters:
```
lst: The address of a pointer to a node.
f: The address of the function applied to each
node’s content.
del: The address of the function used to delete a
node’s content if needed.
```
Return Value: 
```
The new list.
NULL if the allocation fails.
```
Description:
```
Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
```
