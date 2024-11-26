/*
    () - method/function

*/

// const employee = {
//   name: "kamlesh",
//   age: 30,
//   workingDays: 25,
//   dailywage: 1000,
//   calculateSalary: function () {
//     return this.workingDays * this.dailywage;
//   },
// };

// console.log(employee);
// console.log(employee.calculateSalary());

var arr = [10, 20, 30, 50, 60, 70];
var s = 0;
arr.forEach((elem) => {
  s = s + elem;
});

console.log(s);
