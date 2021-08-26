const a = 0;
a = 1; // Uncaught TypeError: Assignment to constant variable

let b = 0;
b = 1; // 1

const c; // Uncaught SyntaxError: Missing initializer in const declaration

/**
 * 일반적으로 const를 사용하고, 다른 값을 할당해야할 상황이 생겼을때 let을 사용한다.
 */