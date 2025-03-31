// Function to find the first peak element
int findFirstPeak(int arr[], int n) {
    // Agar array mein ek hi element hai
    if (n == 1) {
        return 0;
    }

    // Check if all elements in the array are the same
    int allSame = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            allSame = 0;
            break;
        }
    }
    if (allSame) {
        return -1;
    }

    // Pehla element ko check karo (sirf right neighbor ko compare karo)
    if (arr[0] >= arr[1]) {
        return 0;
    }

    // Beech wale elements check karo
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }

    // Aakhri element ko check karo (sirf left neighbor ko compare karo)
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;
    }

    // Agar koi peak nahi mila
    return -1;
}
