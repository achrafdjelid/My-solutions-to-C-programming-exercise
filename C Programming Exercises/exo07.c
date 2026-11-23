
#include <stdio.h>

int main() {
    int i, j;
    char c;

    for (i = 4; i >= 1; i--) {

        if (i == 4)
            c = '#';
        else if (i == 3)
            c = '$';
        else if (i == 2)
            c = '*';
        else if (i == 1)
            c = '&';

        for (j = 1; j <= i; j++) {
            printf("%c", c);
        }

        printf("\n");
    }

    return 0;
}







// Algorithm Print_Pattern

// Variables
//     i, j : Integer
//     c : Character

// Begin
//     For i ← 1 To 4 Do

//         If i = 1 Then
        
//             c ← '&'
//         Else If i = 2 Then
//             c ← '*'
//         Else If i = 3 Then
//             c ← '$'
//         Else If i = 4 Then
//             c ← '&'
//         EndIf

//         For j ← 1 To i Do
//             Write("c")
//         EndFor


//     EndFor

// End
