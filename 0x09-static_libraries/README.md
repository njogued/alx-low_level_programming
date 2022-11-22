# Static Libraries
0. [Task 0](#task0)
1. [Task 1](#task1)

## Task 0.<a name="task0"></a> A library is not a luxury but one of the necessities of life
Create the static library libmy.a containing all the functions listed below:

## Task 1.<a name="task1"></a> Without libraries what have we? We have no past and no future
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

Notes:
Use gcc -c to make c file an object file (o file)
Use ar rc (library(.a file)) (object file) to add object files
ar -t to view object files in the .a file

[Static Libraries - More Info](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
[Dynamic and Static Linking](https://www.youtube.com/watch?v=eW5he5uFBNM)
