function longRunningTask(){
  // 오래 걸리는 작업
  console.log("작업 끝");
}

console.log("시작");
longRunningTask();
console.log("다음 작업")

/**
 * 작업을 수행하는 데 오래 걸리는 longRunningTask 함수가 있고,
 * 블로킹 방식으로 순서대로 끝나지 않으면 다음이 수행되지 않는다.
 * 
 * 하지만, 작업 순서에 따라 성능이 달라지거나 의미가 퇴색되는 작업이 있으므로, 논 블로킹으로 진행해야한다.
 */