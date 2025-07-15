_start:
    addi x1, x0, 10
    addi x2, x0, 1
    addi x3, x0, 0

_loop:
    add x3, x3, x2
    addi x2, x2, 1
    addi x1, x1, -1
    bne x1, x0, _loop

j .
