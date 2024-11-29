// Reverse a  Number

var n = 12345;
var r = 0;

for (let i = n; i > 0; i = Math.floor(i / 10)) {
  r = r * 10 + Math.floor(i % 10);
}

console.log(r);

// Palindrme

var n = 12321;
var r = 0;

for (let i = n; i > 0; i = Math.floor(i / 10)) {
  r = r * 10 + Math.floor(i % 10);
}

console.log(r == n ? `yes` : `no`);

// Strong Number

function fact(i) {
  if (i == 0 || i == 1) {
    return 1;
  }
  return i * fact(i - 1);
}

var n = 145;
var sum = 0;
for (i = n; i > 0; i = parseInt(i / 10)) {
  sum += fact(i % 10);
}

console.log(n == sum ? `yes` : "no");

// AutoMorphic Number

n = 625;
var r = n * n;
x = 1;
for (i = n; i > 0; i = Math.floor(i / 10)) {
  x *= 10;
}

console.log(r % x == n ? `yes` : `no`);

// make it single digit

function add(i) {
  var sum = 0;
  for (; i > 0; i = Math.floor(i / 10)) {
    sum += i % 10;
  }
  return sum;
}

n = 6758;
l = add(n);

while (l > 9) {
  l = add(l);
}
console.log(l);

// fibonacci series

