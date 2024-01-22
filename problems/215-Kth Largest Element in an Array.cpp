class Solution {

private:
    void swap(vector<int>& array , int left , int right){

        int temp_val = array[left];

        array[left] =array[right];
        array[right] = temp_val;
    }



    int partition(vector<int>&  array, int low_index , int high_index){
        // select the highest index to be the pivot value 
        int pivot_val = array[high_index];
        high_index--;  // to account for the pivot value

        for( int i = low_index; i <high_index-1; i++){
            
            
            if (pivot_val > array[i]){
                continue;

            }else{
                swap(array, i , high_index-1 );
                high_index--;
            }



        }
        
        swap(array, high_index, array.size()-1);

        return high_index +1;
    }


    int quick_select(vector<int>& nums, int left, int right, int k ){

        int pivot_index = partition(nums, left , right );

        if(k == pivot_index){


            return k ;

        }
        else if( k > pivot_index){

            return quick_select(nums, pivot_index+1 ,right , k ) ; 
        } 
        else {
            return quick_select(nums, left ,pivot_index - 1, k);
        }

    }
    
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        k = nums.size() - k ;
        int result = quick_select(nums, 0 , nums.size()-1 , k );
        return result;

        
    }
};