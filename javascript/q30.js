
let input = prompt("Enter any number:");


let num = Number(input);


if (isNaN(num)) {
    alert("Please enter a valid number.");
} else if (num === 0) {
    alert("Zero has infinitely many factors.");
} else {
    let absNum = Math.abs(num);
    let factors = [];

    for (let i = 1; i <= absNum; i++) {
        if (absNum % i === 0) {
            factors.push(i, -i); 
        }
    }

    
    factors = [...new Set(factors)];

    alert(`Factors of ${num} are: ${factors.join(', ')}`);
}
