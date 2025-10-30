function findLargest(arr) {
  if (arr.length === 0) {
    return "Array is empty!";
  }

  let largest = arr[0];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  return largest;
}

let input = prompt("Enter numbers separated by spaces:");
let numbers = input.split(" ").map(Number);

console.log("Largest element:", findLargest(numbers));
