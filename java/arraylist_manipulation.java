import java.util.*;
class Sol{
 static Scanner sc=new Scanner(System.in);
 static ArrayList<Integer> arr = new ArrayList<Integer>();
 
 static void search(int a){
 boolean ans = arr.contains(a);
 if(ans)
 {
  System.out.println("Yes");
 }
 else
 {
   System.out.println("No");
 }
 }
 
 static void sort(){
 Collections.sort(arr);
 System.out.println(arr);
 
 }
 
 static void update(int a)
 {
   int newe=sc.nextInt();
   int index=arr.indexOf(a);
   arr.set(index,newe);
 }
 
 static void display()
 {
  System.out.print("Elements are: "+arr);
 }
 
 public static void main(String[] args){
   int size=sc.nextInt();
   int element;
   for(int i=0;i<size;i++)
   {
    int k=sc.nextInt();
    arr.add(k);
   }
   int ch=sc.nextInt();
   if(ch==1)
   {
    element=sc.nextInt();
    search(element);
   }

   else if(ch==2)
   {
    sort();
   }

   else if(ch==3)
   {
    element=sc.nextInt();
    arr.add(element);
    display();
   }

   else if(ch==4)
   {
    element=sc.nextInt();
    arr.remove(element);
   }

   else if(ch==5)
   {
    element=sc.nextInt();
    update(element);
   }

   else if(ch==6)
   {
    display();
   }
 } 
}
