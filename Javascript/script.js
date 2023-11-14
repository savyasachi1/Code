// printing 
console.log("Hello World!");
console.log("Test");
console.log("Welcome to variables");

//defining and using variables
var variablename = 'Hello India';
console.log(variablename);
let variable2 = 20;
console.log(variable2);
variable2 = 10;
console.log(variable2);
const var2 = 40;
console.log(var2);
console.log('Hello World');

// uses of single and double qoutes
const singleQoutes = 'Hello! ';
const doubleQuotes = "world!! ";

// use of backticks (important)
const backTicks = `Welcome!!!`;
console.log(singleQoutes + doubleQuotes + backTicks);
const name = 'Savya';
const varinsert = `Hello ${name}!`;
console.log(varinsert);
const numinsert = `Age ${10 + 12}!`;
console.log(numinsert);

//use of typeof to determine the variable type
console.log(typeof numinsert);
console.log(typeof variable2);

//use of different variables 
const bull = true;
console.log(typeof bull);
console.log(bull);
let wholenumber = 123456789111315;
console.log(wholenumber);
let decimalNumber = 1.123232321;
console.log(decimalNumber);
let negativenumber = -12345;
console.log(negativenumber);
//null variable
let age = null;
console.log(typeof age);
age = 20;
console.log(typeof age);
// undifinded variable
let a;
console.log(a);

//defining and using object
let person = {
    name: 'Savya',
    age: 20,
}
console.log(person);
console.log(person.name + '. age-' + person.age);

// using strict and loose equality
console.log(10 === '10');
console.log(10 == '10');

//logical operators 
console.log('logical Operators');
// AND &&
console.log(true && false);
// OR  ||
console.log(true || false);
// NOT 
console.log(!true);

//assignment operator
let num = 10;
num += 10;
console.log(num);
let str = 'Hello';
str += ', I am the boss';
console.log(str);

//logic and control flow

//using if statement
const ageif = 15;
if (ageif > 18) {
    console.log('You may enter');
}
else if(ageif >12){
    console.log('parental control on');
}
else{
    console.log('stay away');
}
//falsy values
//false
//0
//''
//null
//undifined
//NaN

console.log('abc' || 0 || 'test' || 999);
console.log(!!5);

//switch statement
const superhero = 'Hulk';
switch (superhero){
    case 'Iron Man':
        console.log('I am Iron Man');
        break;
    case 'Captain America':
        console.log('I am CA');
        break;
    case 'Hulk':
        console.log('I am Hulk');
        break;
    case 'Thor':
        console.log('I am thor');
        break;
    default:
        console.log('No hero');
        break;
}

//ternery operator
//condition ? true : false;
console.log (!!1 ? 'Hello' : 'Not hello');


// Function
// decleration
function square(num){
    return num*num;
}

// function expression
const func2 = function(param){
    console.log(param);
}

// arrow function
const func3 = (params) => {
    console.log(params);
}

// function call
console.log(square(5));
func3('savya');
func2('sachi');

// arrow function shortcut
const sum = (a, b) => a+b;
console.log(sum(2,6));

const anotherfunction = () => {
    console.log('Johnny');
}
anotherfunction();

// Strings character
const name1 = 'SavyaSachi';
console.log(name1[name1.length - 1]);
console.log(name1[0]);

