In the C programming language, operations can be performed on a bit level using bitwise operators.

Bitwise operations are contrasted by byte-level operations which characterize the bitwise operators' logical counterparts, the AND, OR, NOT operators. Instead of performing on individual bits, byte-level operators perform on strings of eight bits (known as bytes) at a time. The reason for this is that a byte is normally the smallest unit of addressable memory (i.e. data with a unique memory address).

This applies to bitwise operators as well, which means that even though they operate on only one bit at a time they cannot accept anything smaller than a byte as their input.
