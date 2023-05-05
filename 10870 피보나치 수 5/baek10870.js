const fs=require('fs');
const input=fs.readFileSync("/dev/stdin").toString().trim().split(" ");


let f1=1;
let f2=0;
let sum=0;
for(let i=0;i<parseInt(input[0])+1;i++){
    if (i == 0) {
        sum = f2;
    }
    else if (i == 1) {
        sum = f1;
    }
    else {
        sum = f1 + f2;
        f2 = f1;
        f1 = sum;
    }
}
console.log(sum);