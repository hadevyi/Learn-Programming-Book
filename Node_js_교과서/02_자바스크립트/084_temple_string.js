// 기본적으로 사용하는 방법 : 작성에 불편하고 코드가 지저분함
var num1 = 1;
var num2 = 2;
var result = 3;
var string1 = num1 + " 더하기 " + num2 + "는 \"" + result + "\"";
console.log(string1); // 1 더하기 2는 "3"

// ES2015부터 다음이 가능하다.
const num3 = 1;
const num4 = 2;
const result2 = 3;
const string2 = `${num2} 더하기 ${num4}는 ${result2}`;
console.log(string2); // 1 더하기 2는 "3"