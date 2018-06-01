
int getCollatzSequenceLength(int n){
	int count = 1;
	while(n != 1){
		if(n%2==0){
			n = n/2;
		}
		else{
			n = 3*n + 1;
		}
		count+=1;
		
	}
	return count;
}
