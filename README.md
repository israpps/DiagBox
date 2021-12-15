# DiagBox

the purpose of this app is to change the text color in the windows command prompt partially (instead of changing all the text color like the command "color" does)
this can only be done by the CMD.EXE on it's own in windows 10 (its horrible since it makes the .BAT harder to read) 

Useful tip:
> Add a color macro at the beginning of the program to enforce a specific text color (in case the user changes the default color on program properties)

## USAGE

```bash
DiagBox.EXE gd <HEX_COLOR_CODE> 
```
 

the "HEX_COLOR_CODE' refers to a pair of HEX digits.
    it works the same way that color command, you must pass two HEX digits, the first one will be the BG and the second one will be the Text color

 code | color
 ---- | -----
0|Black
1|blue 
2|green 
3|light blue  
4|red   
5|purple
6|yellow 
7|white
8|grey
9|blue (bright)
A|green (bright)
B|light blue (bright)
C|red (bright)
D|purple (bright)
E|yellow (bright)
F|white (bright)

> If the table was not enough, see all the combinations in action!
![Examples](https://github.com/israpps/DiagBox/blob/main/gitimages/CMD_COLORS.PNG)



--- 

in adition:
with diagbox you can use the same foreground and background (`color` didn't allow this)
# lib

if you want to use this inside your program simply #include "[__diagbox.h__](https://github.com/israpps/DiagBox/blob/main/diagbox.h)" on your program and use one of the macros declared inside

