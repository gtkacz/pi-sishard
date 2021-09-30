// Dump of assembler code for function ex3:
//    0x000000000000011d <+0>:     endbr64
//    0x0000000000000121 <+4>:     mov    %rdx,%rcx
//    0x0000000000000124 <+7>:     movzwl (%rdi),%edx
//    0x0000000000000127 <+10>:    movzwl (%rsi),%eax
//    0x000000000000012a <+13>:    mov    %ax,(%rdi)
//    0x000000000000012d <+16>:    mov    %dx,(%rsi)
//    0x0000000000000130 <+19>:    movzwl (%rdi),%eax
//    0x0000000000000133 <+22>:    lea    (%rax,%rax,4),%eax
//    0x0000000000000136 <+25>:    lea    (%rdx,%rdx,2),%edx
//    0x0000000000000139 <+28>:    add    %edx,%eax
//    0x000000000000013b <+30>:    mov    %ax,(%rcx)
//    0x000000000000013e <+33>:    retq
// End of assembler dump.

short ex3_solucao(long *rdi, long *rsi, long rdx){
    long rcx;
    int edx, eax;

    rcx = rdx;
    edx = (long) *rdi;
    eax = (long) *rsi;

    *rdi = (short) eax;
    *rsi = (short) edx;

    eax = (long) *rdi;
    eax = ((long) eax*2)*4;
    edx = ((long) edx*2)*2;
    eax += edx;

    rcx = (short) eax;

    return rcx;
}