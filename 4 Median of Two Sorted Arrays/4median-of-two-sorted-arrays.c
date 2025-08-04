double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i, j, k, p, temp, a;

    int totalSize = nums1Size + nums2Size;
    int* arr = (int*)malloc(sizeof(int) * totalSize); 

    
    for (i = 0; i < nums1Size; i++) {
        arr[i] = nums1[i];
    }

    for (a = 0; a < nums2Size; a++) {
        arr[i++] = nums2[a];  // i continues from nums1Size
    }

    for (k = 0; k < totalSize - 1; k++) {
        for (p = 0; p < totalSize - k - 1; p++) {
            if (arr[p] > arr[p + 1]) {
                temp = arr[p];
                arr[p] = arr[p + 1];
                arr[p + 1] = temp;
            }
        }
    }

    
    double s;
    if (totalSize % 2 == 0) {
        s = (arr[totalSize / 2] + arr[(totalSize / 2) - 1]) / 2.0;  
    } else {
        s = arr[totalSize / 2];
    }

    free(arr);  // ✅ Always free malloc-ed memory
    return s;
}
