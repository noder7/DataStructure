let n = 37;
// const a = [ 1, 2, 3, 4, 5, 6, 7 ];
const a = [ 1, 2, 22, 35, 37, 60, 99 ];

let center = parseInt(a.length/2);
let len = a.length;
let start=0, end=len-1;
let flag = false;

while(start <= end){
  if(n == a[center]){
    flag = true;
    break;
  }
  else if(n < a[center]){
    end = center - 1;
    center = parseInt((start+end)/2);
    // console.log(start + " " + end + " " + center + "왼쪽 검색")
  }
  else{
    start = center + 1;
    center = parseInt((start+end)/2);
    // console.log(start + " " + end + " " + center + "오른쪽 검색")
  }
}
if(flag == false)
  console.log("찾는 값이 없습니다.");
else
    console.log(n + ": " + (center+1) + "번째 값");