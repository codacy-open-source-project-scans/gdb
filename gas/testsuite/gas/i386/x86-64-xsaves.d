#objdump: -dw
#name: x86_64 XSAVES insns
#source: x86-64-xsaves.s

.*: +file format .*


Disassembly of section \.text:

0+ <_start>:
[ 	]*[a-f0-9]+:[ 	]*48 0f c7 29[ 	]*xsaves64 \(%rcx\)
[ 	]*[a-f0-9]+:[ 	]*4a 0f c7 ac f0 23 01 00 00[ 	]*xsaves64 0x123\(%rax,%r14,8\)
[ 	]*[a-f0-9]+:[ 	]*48 0f c7 19[ 	]*xrstors64 \(%rcx\)
[ 	]*[a-f0-9]+:[ 	]*4a 0f c7 9c f0 23 01 00 00[ 	]*xrstors64 0x123\(%rax,%r14,8\)
[ 	]*[a-f0-9]+:[ 	]*48 0f c7 29[ 	]*xsaves64 \(%rcx\)
[ 	]*[a-f0-9]+:[ 	]*4a 0f c7 ac f0 34 12 00 00[ 	]*xsaves64 0x1234\(%rax,%r14,8\)
[ 	]*[a-f0-9]+:[ 	]*48 0f c7 19[ 	]*xrstors64 \(%rcx\)
[ 	]*[a-f0-9]+:[ 	]*4a 0f c7 9c f0 34 12 00 00[ 	]*xrstors64 0x1234\(%rax,%r14,8\)
#pass
