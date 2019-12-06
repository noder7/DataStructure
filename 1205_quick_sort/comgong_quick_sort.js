function quickSort(array, low, high){
    if( high - low > 0 ) {
       let i = low-1;
       let pivot = array[high];

       for (let j = low; j <= high; j++) {
           if(array[j] < pivot){
               i += 1;
               [array[j], array[i]] = [array[i], array[j]];
           } 
       }
       [array[i+1], array[high]] = [array[high], array[i+1]];
       // divide and conquer left hand
       quickSort(array, low , i);
       // divide and conquer right hand
       quickSort(array, i+2, high);
   }
}
// Unsorted array
let array = [ 7, 8, 10, 9, 2, 3, 5, 4, 1, 6 ];
let len = array.length;

quickSort(array, 0, len-1);

console.log(array);
// Sorted array, [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]