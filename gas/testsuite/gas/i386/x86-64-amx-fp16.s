# Check 64bit AMX-FP16 instructions

	.text
_start:
	tdpfp16ps %tmm5, %tmm4, %tmm3

.intel_syntax noprefix
	tdpfp16ps tmm3, tmm4, tmm5
