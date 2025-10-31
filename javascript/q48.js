
function getMatrixInput(rows, cols) {
    let matrix = [];
    for (let i = 0; i < rows; i++) {
        matrix[i] = [];
        for (let j = 0; j < cols; j++) {
            let value = parseFloat(prompt(`Enter element [${i+1}][${j+1}]:`));
            if (isNaN(value)) {
                alert("Please enter a valid number.");
                j--; // ask again for this element
            } else {
                matrix[i][j] = value;
            }
        }
    }
    return matrix;
}


function transposeMatrix(matrix) {
    let rows = matrix.length;
    let cols = matrix[0].length;
    let transpose = [];
    for (let i = 0; i < cols; i++) {
        transpose[i] = [];
        for (let j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    return transpose;
}


function printMatrix(matrix) {
    for (let row of matrix) {
        console.log(row.join(" "));
    }
}


let rows = parseInt(prompt("Enter the number of rows:"));
let cols = parseInt(prompt("Enter the number of columns:"));

if (isNaN(rows) || isNaN(cols) || rows <= 0 || cols <= 0) {
    console.log("Please enter valid positive integers for rows and columns.");
} else {
    let matrix = getMatrixInput(rows, cols);
    console.log("Original Matrix:");
    printMatrix(matrix);

    let transposed = transposeMatrix(matrix);
    console.log("Transposed Matrix:");
    printMatrix(transposed);
}
