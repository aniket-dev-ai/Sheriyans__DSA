let a = [];
let size = 10;

for (let i = 0; i < size; i++) {
  if (Math.floor(Math.random() * 10) % 2 == 0) {
    a[i] = -Math.floor(Math.random() * 100);
  } else {
    a[i] = Math.floor(Math.random() * 100);
  }
}
console.log("Original array:", a);

let j = 0;
for (let i = 0; i < size; i++) {
  if (a[i] < 0) {
    let temp = a[j];
    a[j] = a[i];
    a[i] = temp;
    j++;
  }
}

console.log("Rearranged array:", a);
