class Rotation{
	void printArray(int[] arr){
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
	}
	int[] rotateArrayByOne(int[] arr){
		int temp=arr[0];
		for(int i=0;i<arr.length-1;i++){
			arr[i]=arr[i+1];
		}
		arr[arr.length-1]=temp;
		return arr;
	} 
	int[] rotationOfByK(int[] arr ,int k){
		int[] res=new int[arr.length-1];
		for(int i=0;i<k;i++){
			res=rotateArrayByOne(arr);
		}
		return res;
	}
	public static void main(String args[]){
		Rotation r1=new Rotation();
		int[] arr={10,20,30,40,50,60};
		System.out.println("before Rotation-->");
		for(int i=0;i<arr.length;i++){
			System.out.print("  "+arr[i]);
		} 
		
		 System.out.println();
		 r1.rotationOfByK(arr,7);
		 for(int i=0;i<arr.length;i++){
			System.out.print("  "+arr[i]);
		} 
		 System.out.println();
	}
}
