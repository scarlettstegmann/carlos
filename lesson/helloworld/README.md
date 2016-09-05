# C Syntax

## Operators

#### Arithmetic
Operator|Description|Example(a=10, b=20)
--------|-----------|-------------------
+|Adds two operands.|a + b = 30
−|Subtracts second operand from the first.|a − b = -10
*|Multiplies both operands.|a * b = 200
/|Divides numerator by de-numerator.|b / a = 2
%|Modulus Operator and remainder of after an integer division.|b % a = 0
++|Increment operator increases the integer value by one.|a++ = 11
--|Decrement operator decreases the integer value by one.|a-- = 9

#### Comparison
Operator|Description|Example(a=10, b=20)
--------|-----------|-------------------
==|Checks if the values of two operands are equal or not. If yes, then the condition becomes true.|(A == B) is not true.
!=|Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.|(A != B) is true.
>|Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.|(A > B) is not true.
<|Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.|(A < B) is true.
>=|Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.|(A >= B) is not true.
<=|Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.|(A <= B) is true.

#### Logical
Operator|Description|Example(a=1, b=0)
--------|-----------|-------------------
&&|Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.|(A && B) is false.
|||Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true.|(A || B) is true.
!|Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false.|!(A && B) is true.


#### Bitwise
Operator|Description|Example(A=60, B=13)
--------|-----------|-------------------
&|Binary AND Operator copies a bit to the result if it exists in both operands.|(A & B) = 12, i.e., 0000 1100
||Binary OR Operator copies a bit if it exists in either operand.|(A | B) = 61, i.e., 0011 1101
^|Binary XOR Operator copies the bit if it is set in one operand but not both.|(A ^ B) = 49, i.e., 0011 0001
~|Binary Ones Complement Operator is unary and has the effect of 'flipping' bits.|(~A ) = -61, i.e,. 1100 0011 in 2's complement form.
<<|Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.|A << 2 = 240 i.e., 1111 0000
>>|Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.|A >> 2 = 15 i.e., 0000 1111

## Control

`if (condition) { ... }`
`if (condition) { ... } else { ... }`
`if (condition) { ... } else if (condition) { ... } else { ... }`

## Loops

`for (start; condition; change) { ... }`
`while (condition) { ... }`
`do{ ... } while (condition);`
