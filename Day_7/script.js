let a = [];
let size = 10;
for (let i = 0; i < size; i++) {
  a[i] = Math.floor(Math.random() * 100);
}
console.log(a);
console.log();
let s = 0;
for (let i = 0; i < size; i++) {
  s += a[i];
}
console.log(s);
console.log();

for (let i = 0; i < size; i++) {
  for (let j = i; j < size; j++) {
    if (a[i] > a[j]) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
}
console.log();
console.log(a);
