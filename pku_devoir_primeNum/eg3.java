//src3=eg3
public class eg3 {
    public static void main(String[] arg) {
        //此函数是用来求1-100的素数
        //用数组来记住我们需要判断的原始数值,直接除去所有的偶数
        int []num = new int[50];
        num[0]=2;
        //把所有的奇数存入数组
        for(int i=1;i<50;i++) {
            num[i]=i*2+1;
        }
        System.out.println("以下是100以内的质数");
        //开始筛选
    
        //===================================================================
        //方法一
        /*  for(int n:num)
         * {
        //n为2和3的时候，特殊处理
        if (n==2||n==3)
        {
            System.out.print(n+"\t");
        }
        //一直找到它的平方根，再没有的话，就是没有了
        //这里的第二个条件，放宽一点，因为要配合结束条件，并且第三个条件为k=k+2，要照顾到可能出现的所有值
        for(int k=3;k<=Math.pow(n, 1.0/2)+2;k=k+2)
        {
            if(n%k==0)break;
            //当k超过最大的可能值，就一定是质数了
            if(k>Math.pow(n, 1.0/2))
            {
                System.out.print(n+"\t");
            }
        }
        }
        */
    
        //==========================================================================
        //方法二
        //外层循环，遍历数组,数组的length：自带长度属性
        for(int i=0;i<num.length;i++)
        {
           for(int k=2;k<(num.length-1);k++) 
            {
            if(num[i]%k==0&&num[i]/k!=1)
            //条件：不是整除自己本身而得到整出结果的
            num[i]=0;
            }
        }
        int index=0;
        
        for(int n:num)
        {
            if(n!=0){
            System.out.print(n+"\t");
            index++;
            }
            //一行存十个
            if (index%10==0)
            {
            System.out.print("\n");
            }
            
        }
    }
}