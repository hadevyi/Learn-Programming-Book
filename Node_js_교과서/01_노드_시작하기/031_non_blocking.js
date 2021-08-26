function longRunningTask(){
  // 오래걸리는 작업
  console.log("작업 끝");
}

console.log("시작")
setTimeout(longRunningTask, 0);
console.log("다음 작업");

/**
 * setTimeout는 콜백함수로 을 통해 태스크 큐로 보내지므로 순서대로 실행되지는 않는다.
 * 따라서 실행순서와는 상관없이 오래 걸리는 작업이 나중에 완료된다.
 */