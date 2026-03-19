public class marks {
    public static void main(String[] args)
    {
        System.out.print("The marks obtained in all subjects are -");
        int sum=0;
        float percent;
        int[] marks={99,85,12,96,100};
        for(int i=0;i<marks.length;i++)
        {
        System.out.print(marks[i]+",");
         sum=sum+marks[i];
        }
        percent=sum/5;
        System.out.println();
        System.out.println("percentage="+percent);
    }
}
