let array = [ 5, 4, 3, 2, 1 ];
let box, position;
for (let i = 1; i < array.length; i++) {
    position = i;
    box = array[position];

    for (let j = 0; j < i; j++) {
        if ( array[position-1] > array[position] ) {

            array[position] = array[position-1];
            array[position-1] = box;
            position = position - 1;
        }
    }
}
console.log(array)