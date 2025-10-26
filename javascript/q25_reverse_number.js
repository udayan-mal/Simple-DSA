// Q25: Reverse a Number
// Category: Loops, Functions & Recursion (17–42)

function reverseNumber(num) {
  let reversed = 0;
  let number = Math.abs(num); // handle negatives

  while (number > 0) {
    const digit = number % 10;
    reversed = reversed * 10 + digit;
    number = Math.floor(number / 10);
  }

  return num < 0 ? -reversed : reversed; // restore sign if negative
}

const input = parseInt(prompt("Enter a number: "));
console.log("Reversed number:", reverseNumber(input));
