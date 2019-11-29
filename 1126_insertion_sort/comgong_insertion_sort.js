let array = [ 10, 9, 8, 7, 6,5, 4, 3, 2, 1 ];
let box, position;

for (let i = 1; i < array.length; i++) {
    // first item of unsorted items
    position = i;
    box = array[i];
    // compare a value inside box with sorted items and shift items
    while (position > 0 && array[position-1] > box) {
        array[position] = array[position-1];
        position--;
    }
    
    array[position] = box;

}
console.log(array);
