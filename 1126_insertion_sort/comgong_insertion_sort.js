let array = [ 5, 4, 3, 2, 1 ];
let box, position;
for (let i = 1; i < array.length; i++) {
    position = i;
    box = array[position];

    for (let j = 0; j < i; j++) {
        if ( array[position-1] > box ) {
            array[position] = array[position-1];
            position = position - 1;
            break;
        }
        array[position] = box;
    }
}
console.log(array)
