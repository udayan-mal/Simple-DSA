// Program to Find GCD Using Recursion
const checkGCD = (a, b) => {
    const gcd = (x, y) => {
        if (y === 0) return x; 
        return gcd(y, x % y);  
    };

    return {
        num1: a,
        num2: b,
        gcd: gcd(a, b)
    };
};

// Example usage
console.log(checkGCD(48, 18)); // GCD of 48 and 18
console.log(checkGCD(36, 60)); // GCD of 36 and 60
console.log(checkGCD(101, 103)); // GCD of 101 and 103
