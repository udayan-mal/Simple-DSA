function findClosestToZero(nums) {
  let closest = nums[0];

  for (let num of nums) {
    if (Math.abs(num) < Math.abs(closest)) {
      closest = num;
    } else if (Math.abs(num) === Math.abs(closest) && num < closest) {
      closest = num; 
    }
  }

  return closest;
}

console.log(findClosestToZero([-4, -2, 1, 4, 8])); 
console.log(findClosestToZero([-5, 5]));           
console.log(findClosestToZero([7, -10, 13, 8, 4, -7])); 
