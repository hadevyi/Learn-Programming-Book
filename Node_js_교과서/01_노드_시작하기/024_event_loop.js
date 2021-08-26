function first(){
  second();
  console.log("첫 번째");
}

function second(){
  third();
  console.log("두 번째")
}

function third(){
  console.log("세 번째");
}

first();

/*
 이벤트 기반으로 진행됨
 1. 콜백함수 등록
 2. 이벤트 발생
 3. 콜백 함수 호출
 단계로 이벤트 루프(event loop)가 이 콜백 함수의 순서를 판단한다.
 */