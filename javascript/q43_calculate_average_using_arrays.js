// Program to calculate average using arrays

function calculateAverage(arr) {
  if (arr.length === 0) {
    return 0; // avoid division by zero
  }

  let sum = 0;

  // loop through the array to calculate sum
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }

  // calculate average
  let average = sum / arr.length;
  return average;
}

// Example usage
const numbers = [10, 20, 30, 40, 50];
const avg = calculateAverage(numbers);

console.log("Numbers:", numbers);
console.log("Average:", avg);