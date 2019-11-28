// Selection sort
let array = [ 5, 4, 1, 2, 3 ];
let minIndex;
let temp = 0;

for (let i = 0; i < array.length; i++) {

    minIndex = i;

    for (let j = i+1; j < array.length; j++){
        if(array[minIndex] > array[j])
            minIndex = j;
    }

    temp = array[minIndex];
    array[minIndex] = array[i];
    array[i] = temp;
}

console.log(array);
