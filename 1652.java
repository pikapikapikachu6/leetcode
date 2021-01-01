class Solution {
     public int[] decrypt(int[] code, int k) {
         int[] result = new int[code.length];
         int codeSize = code.length;
         for (int i = 0; i < codeSize; i ++) {
             if (k == 0) {
                 result[i] = 0;
             }
             if (k > 0) {
                 for (int j = 1; j <= k; j ++) {
                     if (i + j < codeSize) {
                         result[i] += code[i + j];
                     } else {
                         result[i] += code[i + j - codeSize];
                     }
                 }
             }
             if (k < 0) {
                 for (int j = -1; j >= k; j --) {
                     if (i + j >= 0) {
                         result[i] += code[i + j];
                     } else {
                         result[i] += code[i + j + codeSize];
                     }
                 }
             }
         }
         return result;
     }
 }