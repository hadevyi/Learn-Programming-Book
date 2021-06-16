import time

fseconds = time.time()

clock = int((fseconds // 3600) % 24)
minute = int((fseconds // 60) % 60)

print("현재 시간(영국 그리니치 시각) : ", clock, "시 ", minute, "분")