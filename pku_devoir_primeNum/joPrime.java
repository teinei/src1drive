/* src3 
 * Johnny NZ 
 * pku Java week 3 devoir
 * peer to peer review assignment
 */
public class joPrime {
    public static void main(String[] arg) {
        //此函数是用来求素数
        //用数组来记住我们需要判断的原始数值,直接除去所有的偶数
        //int []num = new int[50];
        int l = 5000;
        int []num = new int[l];//all numbers
        num[0]=2;
        //把所有的奇数存入数组
        for(int i=1;i<l;i++) {
            num[i]=i*2+1;
        }
        System.out.println();
        System.out.println();
        System.out.println("以下是"+2*l+"以内的质数");
        //开始筛选   
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
        //loop through int array, print prime numbers only
        int currNum = 2; //currNum to check if the value is 0
        int c = 0; //count how many prime numbers
        boolean nline = false;//print new line or not
        for (int i = 0; i < num.length; ++i) {
            //System.out.print(num[i] + " ");
            currNum = num[i];
            if(currNum!=0){
                //System.out.print("("+(c+1)+")");
                //System.out.print(" num["+i+"]="+num[i] + ", ");
                System.out.print(num[i]+" ");
                c++;
                /* print 10 numbers a line */
                nline = (c%10 == 0)&&(i!=0);
                //nline = (c%5 == 0)&&(i!=0)&&(i%5==0);
                if (nline) {
                    //System.out.print(" ; c="+c+", ");
                    System.out.println();
                }
            }
        }
        //
    }
}
