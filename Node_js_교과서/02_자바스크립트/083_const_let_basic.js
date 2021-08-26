if (true){
  var x = 3;
}
console.log(x); // 3

if (true){
  const y = 3;
}
console.log(y); // Uncaught ReferenceError: y is not defined


/**
 * var는 함수 스코프로 블록과는 관계가 없다.
 * const, let는 블록 스코프로 블록 범위 외에서는 사용할 수 없다.
 */