#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main(){
	int a = 10, b = 20;
	printf("before swapping:");
        printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("after swapping:");
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

/*
Dump of assembler code for function main:
   0x000000000000119a <+0>:	endbr64 
   0x000000000000119e <+4>:	push   %rbp
   0x000000000000119f <+5>:	mov    %rsp,%rbp
   0x00000000000011a2 <+8>:	sub    $0x10,%rsp
   0x00000000000011a6 <+12>:	mov    %fs:0x28,%rax
   0x00000000000011af <+21>:	mov    %rax,-0x8(%rbp)
   0x00000000000011b3 <+25>:	xor    %eax,%eax
   0x00000000000011b5 <+27>:	movl   $0xa,-0x10(%rbp)
   0x00000000000011bc <+34>:	movl   $0x14,-0xc(%rbp)
   0x00000000000011c3 <+41>:	lea    0xe3a(%rip),%rdi        # 0x2004
   0x00000000000011ca <+48>:	mov    $0x0,%eax
   0x00000000000011cf <+53>:	callq  0x1070 <printf@plt>
   0x00000000000011d4 <+58>:	mov    -0xc(%rbp),%edx
   0x00000000000011d7 <+61>:	mov    -0x10(%rbp),%eax
   0x00000000000011da <+64>:	mov    %eax,%esi
   0x00000000000011dc <+66>:	lea    0xe32(%rip),%rdi        # 0x2015
   0x00000000000011e3 <+73>:	mov    $0x0,%eax
   0x00000000000011e8 <+78>:	callq  0x1070 <printf@plt>
   0x00000000000011ed <+83>:	lea    -0xc(%rbp),%rdx
   0x00000000000011f1 <+87>:	lea    -0x10(%rbp),%rax
   0x00000000000011f5 <+91>:	mov    %rdx,%rsi
   0x00000000000011f8 <+94>:	mov    %rax,%rdi
   0x00000000000011fb <+97>:	callq  0x1169 <_Z4swapPiS_>
   0x0000000000001200 <+102>:	lea    0xe1e(%rip),%rdi        # 0x2025
   0x0000000000001207 <+109>:	mov    $0x0,%eax
   0x000000000000120c <+114>:	callq  0x1070 <printf@plt>
   0x0000000000001211 <+119>:	mov    -0xc(%rbp),%edx
   0x0000000000001214 <+122>:	mov    -0x10(%rbp),%eax
   0x0000000000001217 <+125>:	mov    %eax,%esi
   0x0000000000001219 <+127>:	lea    0xdf5(%rip),%rdi        # 0x2015
   0x0000000000001220 <+134>:	mov    $0x0,%eax
   0x0000000000001225 <+139>:	callq  0x1070 <printf@plt>
   0x000000000000122a <+144>:	mov    $0x0,%eax
   0x000000000000122f <+149>:	mov    -0x8(%rbp),%rcx
   0x0000000000001233 <+153>:	xor    %fs:0x28,%rcx
   0x000000000000123c <+162>:	je     0x1243 <main+169>
   0x000000000000123e <+164>:	callq  0x1060 <__stack_chk_fail@plt>
   0x0000000000001243 <+169>:	leaveq 
   0x0000000000001244 <+170>:	retq   
End of assembler dump.
*/

/*
Dump of assembler code for function _Z4swapPiS_:
   0x0000000000001169 <+0>:	endbr64 
   0x000000000000116d <+4>:	push   %rbp
   0x000000000000116e <+5>:	mov    %rsp,%rbp
   0x0000000000001171 <+8>:	mov    %rdi,-0x18(%rbp)
   0x0000000000001175 <+12>:	mov    %rsi,-0x20(%rbp)
   0x0000000000001179 <+16>:	mov    -0x18(%rbp),%rax
   0x000000000000117d <+20>:	mov    (%rax),%eax
   0x000000000000117f <+22>:	mov    %eax,-0x4(%rbp)
   0x0000000000001182 <+25>:	mov    -0x20(%rbp),%rax
   0x0000000000001186 <+29>:	mov    (%rax),%edx
   0x0000000000001188 <+31>:	mov    -0x18(%rbp),%rax
   0x000000000000118c <+35>:	mov    %edx,(%rax)
   0x000000000000118e <+37>:	mov    -0x20(%rbp),%rax
   0x0000000000001192 <+41>:	mov    -0x4(%rbp),%edx
   0x0000000000001195 <+44>:	mov    %edx,(%rax)
   0x0000000000001197 <+46>:	nop
   0x0000000000001198 <+47>:	pop    %rbp
   0x0000000000001199 <+48>:	retq   
End of assembler dump.
*/
