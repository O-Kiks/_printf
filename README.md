printf is a C function belonging to the ANSI C standard library, and included in the file stdio.h.

Its purpose is to print formatted text to the standard output stream. Hence the "f" in the name stands for "formatted".

It takes the following unusual syntax:

   printf(string format, items-to-format)


It can take one or more arguments, where the first argument is a string to be written. This string can contain special formatting codes which are replaced by items from the remainder of the arguments. For example, an integer can be printed using the "%d" formatting code, e.g.:

   printf("%d", 42);


This formats the integer "42" as text and prints it to the standard output.


printf is typically the first function any C programmer encounters, because it is the only function which appears in the standard Hello world program:

   #include <stdio.h>

   int main(void)
   {
       printf("Hello, world!\n");
       return 0;
   }


The "Hello world" program uses printf in its simplest form: by simply passing it a string with no special formatting codes, and no extra arguments.
The input text is simply printed to the screen. (Note that the "\n" special escape sequence is converted into a newline character.)
