// Algorithm: Insert(LA, N, K, ITEM)

// Step 1: Set J := N
// Step 2: Repeat Steps 3 and 4 while J >= K
// Step 3: Set LA[J + 1] := LA[J]
// Step 4: Set J := J - 1
// Step 5: Set LA[K] := ITEM
// Step 6: Set N := N + 1
// Step 7: Exit



#include <stdio.h>

int main() {
    int LA[10] = {0, 10, 20, 30, 40}; // সুবিধার জন্য 1-based index ধরছি (LA[1]=10, LA[2]=20...)
    int N = 4;                        // মোট উপাদান ৪টি
    int K = 2;                        // ২ নম্বর অবস্থানে নতুন মান বসাবো
    int ITEM = 99;                    // নতুন মান

    
    int J = N;                         // Step 1: Set J := N
    
    while (J >= K) {                    // Step 2: Repeat Steps 3 and 4 while J >= K
        LA[J + 1] = LA[J];              // Step 3: Set LA[J + 1] := LA[J]
        J = J - 1;                    // Step 4: Set J := J - 1
    }


    LA[K] = ITEM;                    // Step 5: Set LA[K] := ITEM
    N = N + 1;                      // Step 6: Set N := N + 1

    int i = 1;                    // ফলাফল প্রিন্ট করা (1 থেকে N পর্যন্ত)
    while (i <= N) {
        printf("%d ", LA[i]);
        i++;
    }

    return 0;                       // Step 7: Exit
}