section .data
    msg    db    "Hello World!",0x0a    ; string hello world
    len    equ    $-msg                 ; calcula o tamanho da string msg
 
section .text       ; inicio da seccao de texto
    global _start   ; onde deve comecar a execucao
 
_start:             ; label start - a execucao comeca aqui
    ; write
    mov ebx, 1      ; ficheiro de saida - stdin
    mov ecx, msg    ; apontador para o buffer
    mov edx, len    ; tamanho do buffer
    mov eax, 4      ; chamada write ao sistema
    int 0x80
 
    ; exit
    mov eax, 1      ; move o valor 1 para o registo eax
    mov ebx, 0      ; move o valor 0 para o registo ebx
    int 0x80        ; chamada de sistema para a kernel
