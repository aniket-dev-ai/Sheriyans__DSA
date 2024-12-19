// var a = [];
// var size = 10;

// for (let i = 0; i < size; i++) {
//   if (Math.floor(Math.random() * 10) % 2 == 0) {
//     a[i] = -Math.floor(Math.random() * 100);
//   } else {
//     a[i] = Math.floor(Math.random() * 100);
//   }
// }
// console.log("Original array:", a);

// var j = 0;
// for (let i = 0; i < size; i++) {
//   if (a[i] < 0) {
//     let temp = a[j];
//     a[j] = a[i];
//     a[i] = temp;
//     j++;
//   }
// }

// console.log("Rearranged array:", a);

// var b = [];
// var sizeb = 10;

// for (let i = 0; i < sizeb; i++) {
//   b[i] = Math.floor(Math.random() * 10) % 2;
// }
// console.log("Original array:", b);

// var j = 0;
// for (let i = 0; i < sizeb; i++) {
//   if (b[i] == 0) {
//     let temp = b[j];
//     b[j] = b[i];
//     b[i] = temp;
//     j++;
//   }
// }

// console.log("Rearranged array:", b);

// var a = [];
// var sizeb = 10;

// for (let i = 0; i < sizeb; i++) {
//   a[i] = Math.floor(Math.random() * 10) % 2;
// }
// console.log("Original array:", a);

// var c = 0;
// var bc = 0;

// for (let i = 0; i < sizeb; i++) {
//   if (a[i] == 1) {
//     c++;
//     if (c > bc) bc = c;
//   } else {
//     c = 0;
//   }
// }

// console.log("Maximum consecutive ones:", bc);

var a = Array.from({ length: 10 }, () => Math.floor(Math.random() * 100)); // Create the array directly
console.log("Original array:", a);

var f = Math.floor(Math.random() * 100); // Generate the search value
console.log("Search value:", f);

if (a.includes(f)) { // Use `includes` for direct search
  console.log("Found");
} else {
  console.log("Not found");
}


