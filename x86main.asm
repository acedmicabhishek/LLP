section .data
    hello_message db 'Hello, World!', 0  ; Null-terminated string
    hello_len equ $ - hello_message       ; Length of the string
    num_times db 5                        ; The number of times to print "Hello, World!"

section .bss
    result resd 1                        ; Reserve space for a result

section .text
    global _start                        ; Entry point for the program

_start:
    ; Initialize counter (how many times to print "Hello, World!")
    mov al, [num_times]                  ; Load the counter value into al (8-bit register)

print_loop:
    ; Print "Hello, World!"
    mov eax, 4                           ; Syscall number for sys_write (4)
    mov ebx, 1                           ; File descriptor (1 for stdout)
    mov ecx, hello_message               ; Pointer to the message
    mov edx, hello_len                   ; Length of the message
    int 0x80                              ; Call kernel (syscall to print)

    ; Decrement the counter
    dec al                                ; Decrement the counter in al
    jnz print_loop                        ; If counter is not zero, jump to print_loop

    ; Perform basic arithmetic (sum of 5 + 7)
    mov eax, 5                           ; Move 5 into eax
    add eax, 7                           ; Add 7 to eax (result is 12)
    mov [result], eax                    ; Store result in memory (result)

    ; Push a value to the stack (push eax onto stack)
    push eax                              ; Push value of eax (12) onto the stack

    ; Pop the value back from the stack into ecx
    pop ecx                               ; Pop value into ecx

    ; Print the result of the sum (12)
    mov eax, 4                           ; Syscall number for sys_write (4)
    mov ebx, 1                           ; File descriptor (stdout)
    mov ecx, result                      ; Address of the result to print
    mov edx, 4                           ; Assuming the result is 4 bytes
    int 0x80                              ; Call kernel to print the result

    ; Exit the program
    mov eax, 1                           ; Syscall number for sys_exit (1)
    xor ebx, ebx                         ; Exit code (0)
    int 0x80                              ; Call kernel to exit
