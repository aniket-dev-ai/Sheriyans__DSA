let n = 6;

// for (let i = 1; i <= n; i++) {
//   for (let j = 1; j <= i; j++) {
//     process.stdout.write("* ");
//     if (j == i) console.log();
//   }
// }
// for (let i = n; i >= 1; i--) {
//   for (let j = 1; j <= i; j++) {
//     process.stdout.write("* ");
//     if (j == i) console.log();
//   }
// }
// for (let i = 1; i <= n; i++) {
//   for (let j = 1; j <= i; j++) {
//     process.stdout.write(String.fromCharCode(64 + j) + " ");
//   }
//   console.log();
//   console.log();
// }

for (let i = 1; i <= n; i++) {
  for (let j = 1; j <= n; j++) {
    if (j > n - i) {
      process.stdout.write("* ");
    } else {
      process.stdout.write("  ");
    }
  }
  console.log();
}
