public class Box {
    int height,weight,length;
   static void area(int h,int w){
        int a=h*w;
        System.out.println("area = "+a);
    }
   static void area(int h,int w,int l){
        int a=h*w*l;
       System.out.println("volume = "+a);
    }
    void display(int h,int w,int l){
        System.out.println("Height = "+h);
        System.out.println("Weight = "+w);
        System.out.println("Length = "+l);
    }

    public static void main(String[] args) {
        Box obj =new Box();
        obj.height=10;
        obj.weight=8;
        obj.length=15;
        area(obj.height, obj.weight);
        area(obj.height, obj.weight, obj.length);
        obj.display(obj.height, obj.weight, obj.length);
    }
}
