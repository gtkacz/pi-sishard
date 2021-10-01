// Dump of assembler code for function func1:
//    0x0000000000001189 <+0>:     endbr64
//    0x000000000000118d <+4>:     cmp    $0xff,%di       #0xff = 255
//    0x0000000000001192 <+9>:     sete   %al
//    0x0000000000001195 <+12>:    movzbl %al,%eax
//    0x0000000000001198 <+15>:    retq
// End of assembler dump.


int func1(int edi){
    return edi == 255;
}


// Dump of assembler code for function func2:
//    0x0000000000001199 <+0>:     endbr64
//    0x000000000000119d <+4>:     cmp    %edi,0x2e71(%rip)        # 0x4014 <chave1> -> 4000
//    0x00000000000011a3 <+10>:    jg     0x11b3 <func2+26>
//    0x00000000000011a5 <+12>:    cmp    %edi,0x2e65(%rip)        # 0x4010 <chave2> -> -6
//    0x00000000000011ab <+18>:    jge    0x11b9 <func2+32>
//    0x00000000000011ad <+20>:    mov    $0x0,%eax
//    0x00000000000011b2 <+25>:    retq
//    0x00000000000011b3 <+26>:    mov    $0x0,%eax
//    0x00000000000011b8 <+31>:    retq
//    0x00000000000011b9 <+32>:    mov    $0x1,%eax
//    0x00000000000011be <+37>:    retq
// End of assembler dump.

int global1 = 4000;
int global2 = -6;

int func2(int edi){
    int eax;

    if(!(global1 > edi)){
        eax = 0;
        return eax;
    }
    else if(!(global2 >= edi)){
        eax = 1;
        return eax;
    }

    eax = 0;
    return eax;
}


// Dump of assembler code for function func3:
//    0x00000000000011bf <+0>:     endbr64
//    0x00000000000011c3 <+4>:     sub    $0x3e,%edi -> $0x3e = 62 
//    0x00000000000011c6 <+7>:     cmp    $0x1,%edi
//    0x00000000000011c9 <+10>:    setbe  %al
//    0x00000000000011cc <+13>:    movzbl %al,%eax
//    0x00000000000011cf <+16>:    retq
// End of assembler dump.

int func3(int edi){
    int eax;

    edi -= 62;
    eax = (edi <= 1);

    return eax;
}