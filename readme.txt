question_a:

	compile:
		compile:g++ -o main.cpp
------------------------------------------------------------------
question_b:

result:

Size:1000
sort():0seconds
v1/v2 are different.
insertion_sort():0.02seconds
v1/v2 are the same.

Size:10000
sort():0seconds
v1/v2 are different.
insertion_sort():1.33seconds
v1/v2 are the same.

Size:100000
sort():0.04seconds
v1/v2 are different.
insertion_sort():128.2seconds
v1/v2 are the same.

Size:1000000
sort():0.5seconds
v1/v2 are different.



explain:

若有N個數排要排大小
函數sort比序次數為nlogn次 
用insertsort比序次數為n^2次

用100000個亂數排序 
用Insertsort 比序次數約是用sort比序的2000倍
所以花費時間也約為2000倍
 128 / 0.05 = 2560 合理

然後用1000000個亂數排序
用Insertsort 比序次數約是用sort比序的166666.67倍
所以花費時間也約為166666倍
資料測試結果以sort排列需0.53秒
  0.53*166666.67 / (60*60) = 24.5...
Insertsort大約需要24.5小時.......
