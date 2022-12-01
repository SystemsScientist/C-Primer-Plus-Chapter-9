# C Primer Plus - Chapter 9 Exercises and Solutions

This repository contains the Listings, Exercises, and Solutions
for Chapter 9 of C Primer Plus, 5th edition, by Stephen Prata,
which covers Functions.

I created this repository for two reasons. First, I wanted to
incorporate Git and GitHub into my workflow, so I could give
myself an opportunity to practice the technologies. Second, I 
wanted to show my work. That is, I used C and Vim on a Fedora
36 system in a VirtualBox environment to create, use, and manage
directories and files as I work through Prata's C Primer Plus
textbook.

Please feel free to reach out to me if you have any questions
or comments. In addition, feel free to utilize the solutions 
for your consumption and edification.

~ Matt

Technical Notes and Considerations
------------------------------------------------------------------

To compile and execute the Chapter 9 files,

    (1) copy the code directly into your preferred
        Integrated Development Environment (IDE), CLion, CodeLite,
        or Code::Blocks, for example, or your preferred text editor,
        Vim, Nano, or Emacs, for example
    (2) and either build and run the files in your IDE
    (3) or use the following command-line scripts:

            $ gcc file1.c file2.c ... filen.c -o main
            $ ./main

Note:

Programs can have one file, two files, three files, and so and
so forth. Just follow the pattern. In addition, programs can use
any name. For example, in most Chapter 9 programs, main is used
as the program name and thus ./main is used to execute the 
program. Another example is that a program can use foo for a
program name and ./foo to execute a program:

    (1) foo and ./foo

            $ gcc main.c func1.c func2.c -o foo
            $ ./foo

    (2) daffy_duck and ./daffy_duck

            $ gcc main.c func1.c func2.c -o daffy_duck
            $ ./daffy_duck



