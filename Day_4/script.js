// Reverse a  Number

let n = 12345;
let r = 0;

for (let i = n; i > 0; i = Math.floor(i / 10)) {
  r = r * 10 + Math.floor(i % 10);
}

console.log(r);

