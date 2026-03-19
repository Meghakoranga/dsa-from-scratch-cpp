import java.util.Scanner;
public class markinput {
    public static void main(String[] args)
    {
        System.out.print("Enter the size of array-");
        Scanner obj=new Scanner(System.in);
        int s=obj.nextInt();
        int sum=0;
        float percent;
        int arr[]= new int[s];
        for(int i=0;i<s;i++)
        {
            System.out.println("marks in subject"+(i+1));
            arr[i]=obj.nextInt();
            sum+=arr[i];
        }
        percent=sum/s;
        System.out.println("percentage is "+percent);
    }
}
