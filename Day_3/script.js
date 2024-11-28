// Area of Triangle
 var s1 = 5, s2 = 7, s3 = 9
    console.log(Math.sqrt(s1*(s1-s2)*(s1-s3)));

    
// Greatest between 
var a = 5, b = 7
console.log((a>b)? `a = ${a} is larger` : ` b = ${b} is larger`)


// Even or Odd
var b = 7
console.log((b%2 == 0 )? ` ${b} is even` : ` ${b} is odd`)


//  Leap Year
var year = 2020
console.log((year%4 == 0 && year%100 != 0) || year%400 == 0)? `${year} is a leap year` : `${year} is not a leap year`

// Electricity Bill

var units = prompt("Enter the number of units consumed:");
units = parseFloat(units);
var bill = 0;

if (units <= 100) {
    bill = units * 4.2;
} else if (units <= 200) {
    bill = (100 * 4.2) + ((units - 100) * 6);
} else if (units <= 400) {
    bill = (100 * 4.2) + (100 * 6) + ((units - 200) * 8);
} else {
    bill = (100 * 4.2) + (100 * 6) + (200 * 8) + ((units - 400) * 13);
}

console.log(`The total electricity bill is: ${bill} rupees`);

// Shop Discount

var totalPrice = prompt("Enter the total price of items purchased:");
totalPrice = parseFloat(totalPrice);
var discount = 0;

if (totalPrice > 9000) {
    discount = 0.20;
} else if (totalPrice > 7000) {
    discount = 0.10;
} else if (totalPrice > 5000) {
    discount = 0.05;
} else {
    discount = 0;
}

var discountedPrice = totalPrice - (totalPrice * discount);
console.log(`The total price after discount is: ${discountedPrice} rupees`);

// N times “hello world

var n = 5;
for(i = 0 ; i < n ; i++){
    console.log("Hello World");
}

// N natural numbers
var n = 10;
for(i = 1 ; i <= n ; i++){
    console.log(i);
}

// Sum of first N numbers
var n = 10, sum = 0;
for(i = 1 ; i <= n ; i++){
    sum += i;
}

console.log(`The sum of first ${n} numbers is: ${sum}`);

// Factorial of a number
var n =5;
var fact = 1;
for(i=n;i>0;i--){
    fact *= i;
}
console.log(`The factorial of ${n} is: ${fact}`);

// Sum of digit

var n = 1234 

for(i=n;i>0;i=parseInt(i/10)){
    sum += i%10;
}

console.log(`The sum of digits of ${n} is: ${sum}`);

// Reverse of a number
var n = 1234 
var rev = 0;
for(i=n;i>0;i=parseInt(i/10)){
    rev = rev*10 + i%10;
}

console.log(`The reverse of ${n} is: ${rev}`);

// Palindrome number
var n = 1234, rev = 0;
for(i=n;i>0;i=parseInt(i/10)){
    rev = rev*10 + i%10;
}

console.log((n==rev)?`yes`:"no");

// Strong number
function fact(i){
    if(i == 0 || i == 1){
        return 1;
    }
    return i*fact(i-1);
}

var n = 145, sum = 0;
for(i=n;i>0;i=parseInt(i/10)){
    sum += fact(i%10);
}

console.log((n==sum)?`yes`:"no");

