class Solution {
public:

    bool isPossible(vector<int>& arr, int students, int maxPages) {

        int studentCount = 1;
        int pages = 0;

        for(int i = 0; i < arr.size(); i++) {

            if(pages + arr[i] <= maxPages) {
                pages += arr[i];
            }
            else {
                studentCount++;
                pages = arr[i];
            }
        }

        return studentCount <= students;
    }


    int findPages(vector<int>& arr, int students) {

        if(students > arr.size()) {
            return -1;
        }

        int low = 0;
        int high = 0;

        for(int i = 0; i < arr.size(); i++) {
            low = max(low, arr[i]);
            high += arr[i];
        }

        int answer = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(isPossible(arr, students, mid)) {

                answer = mid;

                // Try to find an even smaller answer
                high = mid - 1;
            }
            else {

                // Need more pages per student
                low = mid + 1;
            }
        }

        return answer;
    }
};