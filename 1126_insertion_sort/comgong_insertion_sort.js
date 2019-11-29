let array = [ 10, 9, 8, 7, 6,5, 4, 3, 2, 1 ];
let box, start;

for (let i = 1; i < array.length; i++) {
    // first item of unsorted items
    start = i-1;
    box = array[i];
    // compare a value inside box with sorted items and shift items
    while (start >= 0 && array[start] > box) {
        array[start+1] = array[start];
        start--;
    }
    
    array[start+1] = box;

}
console.log(array);
