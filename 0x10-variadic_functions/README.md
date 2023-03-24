C provides a special mechanism for defining functions that take a variable number of arguments. printf() and scanf() are typical examples of these variadic functions. A variadic function must take at least one named argument (usually, a format string), but the rest of the arguments are optional. A special mechanism detects the number of unnamed arguments and their types, as we will shortly see. A variadic function is declared as follows:

void printf(const char * fmt,...);
