class eg1{
    public static void main(String[] args)
    {
        int a []= new int[4];
        a[0]=10;
        a[1]=20;
        a[2]=30;
        a[3]=40;
        for (int i=0;i<4;i++)
        {
            System.out.println(a[i]+",");
        }
        int [][] arr={{1,2,3,4},{5,6,7}};
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                System.out.println("2-D array value arr["+i+"]["+j+"]="+arr[i][j]);
            }
        }
}}