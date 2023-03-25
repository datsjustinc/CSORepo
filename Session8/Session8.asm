section .data

section .text
	global _start

_start:
	; initialize loop counter to 1
	move eax, 1

loop:

	; write the value of the loop counter to standard output
	move ebx, 1 ; file descripter 1 (standard ouput)
	move ecx, eax ; pointer to the value of the loop counter
	move edx, 4 ; size of the value (4 bytes for the integer
	int 0x80 ; system call to write to a file descripter

	add eax, 1 ; incrememnt loop counter
	
	cmp eax, 10
	jl loop ; check if loop counter is less than 10

	; exit program with status code 0
	move eax, 1 ; system call for exit
	xor ebx, ebx ; exit status code (0 = success)
	int 0x80 ; system call to exit
