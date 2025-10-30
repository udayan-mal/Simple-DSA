/**
 * Implementation and comparison of different sorting algorithms
 * Includes:
 * 1. Bubble Sort
 * 2. Selection Sort
 * 3. Insertion Sort
 * 4. Merge Sort
 * 5. Quick Sort
 * 
 * Each algorithm includes time complexity analysis and performance comparison
 */

// Utility function to swap elements
function swap(arr, i, j) {
    const temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Bubble Sort Implementation
// Time Complexity: O(n^2)
function bubbleSort(arr) {
    const n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
            }
        }
    }
    return arr;
}

// Selection Sort Implementation
// Time Complexity: O(n^2)
function selectionSort(arr) {
    const n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        let minIdx = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx !== i) {
            swap(arr, i, minIdx);
        }
    }
    return arr;
}

// Insertion Sort Implementation
// Time Complexity: O(n^2)
function insertionSort(arr) {
    const n = arr.length;
    for (let i = 1; i < n; i++) {
        let key = arr[i];
        let j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return arr;
}

// Merge Sort Implementation
// Time Complexity: O(n log n)
function mergeSort(arr) {
    if (arr.length <= 1) return arr;

    const mid = Math.floor(arr.length / 2);
    const left = arr.slice(0, mid);
    const right = arr.slice(mid);

    return merge(mergeSort(left), mergeSort(right));
}

function merge(left, right) {
    const result = [];
    let leftIndex = 0;
    let rightIndex = 0;

    while (leftIndex < left.length && rightIndex < right.length) {
        if (left[leftIndex] < right[rightIndex]) {
            result.push(left[leftIndex]);
            leftIndex++;
        } else {
            result.push(right[rightIndex]);
            rightIndex++;
        }
    }

    return result.concat(left.slice(leftIndex)).concat(right.slice(rightIndex));
}

// Quick Sort Implementation
// Time Complexity: O(n log n) average case, O(n^2) worst case
function quickSort(arr, low = 0, high = arr.length - 1) {
    if (low < high) {
        const pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
    return arr;
}

function partition(arr, low, high) {
    const pivot = arr[high];
    let i = low - 1;

    for (let j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

// Test function to compare all sorting algorithms
function testSortingAlgorithms() {
    // Test arrays
    const testCases = [
        [],  // Empty array
        [1], // Single element
        [1, 1, 1, 1], // All same elements
        [4, 3, 2, 1], // Reverse sorted
        [1, 2, 3, 4], // Already sorted
        [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5], // Random array
    ];

    const algorithms = [
        { name: 'Bubble Sort', fn: bubbleSort },
        { name: 'Selection Sort', fn: selectionSort },
        { name: 'Insertion Sort', fn: insertionSort },
        { name: 'Merge Sort', fn: mergeSort },
        { name: 'Quick Sort', fn: quickSort }
    ];

    testCases.forEach((testCase, index) => {
        console.log(`\nTest Case ${index + 1}: [${testCase}]`);
        
        algorithms.forEach(algo => {
            const arrCopy = [...testCase];
            const startTime = performance.now();
            const sorted = algo.fn(arrCopy);
            const endTime = performance.now();
            
            console.log(`${algo.name}:`);
            console.log(`Result: [${sorted}]`);
            console.log(`Time taken: ${(endTime - startTime).toFixed(4)}ms`);
            
            // Verify if array is sorted
            const isSorted = sorted.every((num, i) => i === 0 || sorted[i - 1] <= num);
            console.log(`Correctly sorted: ${isSorted}`);
        });
    });
}

// Run the tests
console.log("Starting Sorting Algorithms Comparison Test:");
testSortingAlgorithms();
