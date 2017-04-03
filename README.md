# text2hex
Program to convert ASCII text to HEX and vice versa

## About  
Text2Hex (t2h) is a program developed with C++ to convert ASCII text to HEX and vice versa.

## Usage  
    Text2Hex <output_format> [<input_string>]

output_format cant be either 't' for Text and 'h' for Hex.
This parameter is necessary.
If 't' is specified then the given HEX code will be converted to its corresponding ASCII text.
If 'h' is specified then the given ASCII text will be converted to its corresponding HEX code.

If input_string is specified then this will be considered as the source string.
But if input_string is not specified then the user will be prompted to enter one.
