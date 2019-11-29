// Selection sort
let array = [ 5, 4, 1, 2, 3 ];
let minIndex;

// last element is always a sorted value when i = n-1
for (let i = 0; i < array.length-1; i++) {

    minIndex = i;

    for (let j = i+1; j < array.length; j++){
        if(array[minIndex] > array[j])
            minIndex = j;
    }

    if(minIndex != i)
        [array[minIndex], array[i]] = [array[i], array[minIndex]];
}

console.log(array);
