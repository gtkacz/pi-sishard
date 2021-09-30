// Dump of assembler code for function ex4:
//    0x000000000000011d <+0>:     endbr64
//    0x0000000000000121 <+4>:     mov    $0x0,%ecx
//    0x0000000000000126 <+9>:     cmp    %edx,%ecx
//    0x0000000000000128 <+11>:    jge    0x146 <ex4+41>
//    0x000000000000012a <+13>:    mov    %edx,%eax
//    0x000000000000012c <+15>:    sub    %ecx,%eax
//    0x000000000000012e <+17>:    sub    $0x1,%eax
//    0x0000000000000131 <+20>:    movslq %ecx,%r8
//    0x0000000000000134 <+23>:    movslq %eax,%r9
//    0x0000000000000137 <+26>:    mov    (%rsi,%r9,4),%r10d
//    0x000000000000013b <+30>:    cmp    %r10d,(%rdi,%r8,4)
//    0x000000000000013f <+34>:    jne    0x14b <ex4+46>
//    0x0000000000000141 <+36>:    add    $0x1,%ecx
//    0x0000000000000144 <+39>:    jmp    0x126 <ex4+9>
//    0x0000000000000146 <+41>:    mov    $0xffffffff,%eax
//    0x000000000000014b <+46>:    retq
// End of assembler dump.

int ex4_solucao(int *rdi, int *rsi, int edx){
    int ecx, eax, r10d;
    long r8, r9;

    ecx = 0;

    while(!(ecx >= edx)){
        eax = edx;
        eax -= ecx;
        eax--;

        r8 = ecx;
        r9 = eax;

        r10d = (int) rsi[r8];

        if(!(rdi[r9] != r10d)){
            ecx++;
        }
        else{
            return eax;
        }
    }
    eax = -1;
    return eax;
}