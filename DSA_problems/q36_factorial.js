// Q 36: Program to find the factorial of a number using recursion

function factorial(n) {
  if (n < 0) {
    return "Factorial not defined for negative numbers";
  } else if (n === 0 || n === 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

// Example usage
const number = 5;
console.log(`The factorial of ${number} is: ${factorial(number)}`);
