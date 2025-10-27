function factorialRecursion(n) {

    if (n <= 1) {
        return 1
    }
    return n * factorialRecursion(n - 1)
}

const userInput = process.argv[2]
if (!userInput) {
    console.error("Error: No number provided.");
    console.error("Usage: Type command like: node factorial.js [number]");
    process.exit(1);
}

const n = parseInt(userInput)

if (isNaN(n) || n < 0 || n !== parseFloat(userInput) || n > 20) {
    console.error(`Error: Invalid input. PLease enter a non-negative integer (number <= 20)`);
    process.exit(1)
}
console.log(`The factorial of ${n} is`, factorialRecursion(n));
