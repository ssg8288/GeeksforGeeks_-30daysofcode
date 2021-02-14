Class Solution:
    def recreationalSpot(self,arr,n):
    
    fi = 999999999
    
    for i in range(n):
        fi=min(fi,arr[i])
        if i!=n-1:
        if arr[i+1]<arr[i] and  arr[i+1]>fi:
            return True
    return False
