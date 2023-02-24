## 0x1C - Makefiles in C

### Task 0. make -f 0-Makefile
Create your first Makefile.
```
Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: none
```

### Task 1. make -f 1-Makefile
```
Requirements:

name of the executable: school
rules: all
- The all rule builds your executable
variables: CC, SRC
- CC: the compiler to be used
- SRC: the .c files
```

### Task 2. make -f 2-Makefile
Create your first useful Makefile.
```
Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files
```
