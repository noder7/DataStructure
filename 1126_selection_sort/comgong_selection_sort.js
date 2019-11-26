// Selection sort
array = [ 5, 4, 3, 2, 1 ];
let minIndex = 0;
let temp = 0;

for (let i = 1; i < array.length; i++) {
    for (let j = i; j < array.length; j++) {
        if (array[minIndex] > array[j]) {
            temp = array[minIndex];
            array[minIndex] = array[j];
            array[j] = temp;
        }
    }
    minIndex = i;
}
console.log(array);