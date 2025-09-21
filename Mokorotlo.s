.data
	prompt: .asciz "Input height(n): "
	invalid: .asciz "Invalid input try again."
	star: .asciz "* "
	space: .asciz " "
	endl: .ascii "\n"
	
.text
.globl _start
_start:
	# Print prompt
	la a0, prompt
	li a7, 4
	ecall
	
	# Get input
	li a0, 0	# To avoid issues
	li a7, 5
	ecall
	
	# Move Input
	mv t0, a0
	
	# Input validation
	bltz t0, Invalid
	# Vertical tracker
	li t1, 0
	loop_1:
		# Increment the loop count; i++
		addi t1, t1, 1
		# Conditional; i < t0
		bgt t1, t0, Exit
		
		# Print line break
		la a0, endl
		li a7, 4
		ecall
		
		# Horizontal tracker
		li t2, 0
		loop_2:
			# Increment loop count; j++
			addi t2, t2, 1
			# Conditional; j < i
			bgt t2, t0, loop_1
			
			li t3, 0
			sub t3, t3, t1
			add t3, t3, t0
			ble t2, t3, if_1
			beq zero, zero, if_2
			
			if_1:
				la a0, space
				li a7, 4
				ecall
				j loop_2
			if_2:
				la a0, star
				li a7, 4
				ecall
				j loop_2
			
			j loop_2
	j Exit

Invalid:
	# Print Invalid prompt
	la a0, invalid
	li a7, 4
	ecall
	j Exit
	
Exit:
	li a7, 10
	ecall
