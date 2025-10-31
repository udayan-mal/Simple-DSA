// Question 56 : Program to Find the Length of a String
// Author: AaronStark1
// Description: The program finds the length of a user input string without using the length property,instead using a for loop that runs till the end of the string
// Language: JavaScript
/* Instructions while executing: Enter the string in double quotes after the name of the program like->
    Example input->   node q56_string_length.js  "apples and oranges"
            output->  Length of string : "apples and oranges" = 18
*/

const inputString = process.argv[2]
let stringLength = 0
for (let index = 0; inputString[index]!=undefined ; index++) {
    stringLength++
    
}
console.log(`Length of string : "${inputString}" = ${stringLength}`);
