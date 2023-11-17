section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 10 ; %s is a format specifier for a string, and 10 is the ASCII code for newline

section .text
    extern printf
    global main

main:
    push hello ; push the address of the hello string onto the stack
    push format ; push the address of the format string onto the stack
    call printf ; call the printf function
    add esp, 8 ; adjust the stack pointer to clean up the stack (2 * 4 bytes)

    ; Exit the program
    mov eax, 0      ; syscall number for exit
    xor ebx, ebx    ; status 0
    int 0x80        ; make system call

    ret
