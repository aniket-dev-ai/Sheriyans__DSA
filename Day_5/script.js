// // // Fibonacci Serires

// // let a = 0,
// //   b = 1;
// // n = 10;
// // s = "";
// // s += a + " " + b + " ";
// // for (i = 2; i <= n; i++) {
// //   c = a + b;
// //   s += zc + " ";
// //   a = b;
// //   b = c;
// // }
// // console.log(s);

// function calculator() {
//   let operation;

//   do {
//     operation = prompt(
//       "Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square Root\n6. Exponentiation\n7. Trigonometry (sin, cos, tan)\nType 'exit' to quit"
//     );

//     if (operation.toLowerCase() === "exit") {
//       alert("Calculator closed. Bye!");
//       break;
//     }

//     switch (operation) {
//       case "1": // Addition
//         var num1 = parseFloat(prompt("Enter first number:"));
//         var num2 = parseFloat(prompt("Enter second number:"));
//         alert(`Result: ${num1 + num2}`);
//         break;

//       case "2": // Subtraction
//         var num1 = parseFloat(prompt("Enter first number:"));
//         var num2 = parseFloat(prompt("Enter second number:"));
//         alert(`Result: ${num1 - num2}`);
//         break;

//       case "3": // Multiplication
//         var num1 = parseFloat(prompt("Enter first number:"));
//         var num2 = parseFloat(prompt("Enter second number:"));
//         alert(`Result: ${num1 * num2}`);
//         break;

//       case "4": // Division
//         var num1 = parseFloat(prompt("Enter first number:"));
//         var num2 = parseFloat(prompt("Enter second number:"));
//         if (num2 === 0) {
//           alert("Division by zero is not allowed!");
//         } else {
//           alert(`Result: ${num1 / num2}`);
//         }
//         break;

//       case "5": // Square Root
//         var num = parseFloat(prompt("Enter the number:"));
//         if (num < 0) {
//           alert("Square root of negative number is not real!");
//         } else {
//           alert(`Result: ${Math.sqrt(num)}`);
//         }
//         break;

//       case "6": // Exponentiation
//         var base = parseFloat(prompt("Enter the base:"));
//         var exp = parseFloat(prompt("Enter the exponent:"));
//         alert(`Result: ${Math.pow(base, exp)}`);
//         break;

//       case "7": // Trigonometry
//         var angle = parseFloat(prompt("Enter angle in degrees:"));
//         var radian = (angle * Math.PI) / 180; // Convert to radians
//         let trigFunction = prompt("Choose:\n1. sin\n2. cos\n3. tan");

//         switch (trigFunction) {
//           case "1":
//             alert(`sin(${angle}) = ${Math.sin(radian)}`);
//             break;
//           case "2":
//             alert(`cos(${angle}) = ${Math.cos(radian)}`);
//             break;
//           case "3":
//             alert(`tan(${angle}) = ${Math.tan(radian)}`);
//             break;
//           default:
//             alert("Invalid trigonometric function!");
//         }
//         break;

//       default:
//         alert("Invalid operation. Please try again.");
//     }
//   } while (operation.toLowerCase() !== "exit");
// }

// // Call the calculator function
// calculator();

// print v 
// n=10
// for (i = 1; i < n * 2; i++) {
//   s = "";
//   for (j = 1; j < n * 2; j++) {
//     if (j == i || j == n * 2 - i) {
//       s += "*";
//     } else {
//       s += " ";
//     }
//   }
//   if (i <= n) {
//     console.log(s);
//   }
// }

// n = 5
// function fact(j){
//   if(j==0 || j == 1){
//     return 1;
//   }
// return j * fact(j-1);
// }
// console.log(fact(n));

// str = 0
// m =121
// function pal(n){
//   if(n<=0){
//     return str === m
//   }
//   str = str*10+n%10 
//   return pal(Math.floor(n/10))
// }

// console.log(pal(m));

// fibonacci Series
 
// function fact(a,b,n , str){
//   if(n==0){
//     return str;
//   }
  
//   c = a+b;
//   str += c + " "
//   return fact(b,c,n-1,str)
// }

// console.log(fact(0,1,10 , " 0 1 "));

let temp = [];
let num = [];

function sub(arr) {
  if (arr.length === 0) {
    return num;   
  }
  
  num.push(...arr);  // Add all elements of arr to num
  temp.push(arr[arr.length - 1]);  // Add the last element of arr to temp
  num.push(...temp);  // Add the elements of temp to num

  // Call sub recursively with the array minus the last element
  return sub(arr.slice(0, -1));
}

console.log(sub([1, 2, 3, 4, 5]));  // Output will be the modified array


