public class Car {
    static int oil = 6;
    static long serial = 0;
    public String name;
    Car(){
        if(oil>=3){
            name = "È¼ÓÍ³µ"+serial;
        }
        else{
            name = "»ì¶¯³µ"+serial;
        }
        oil--;
        serial++;
    }
    void printMsg(){
        System.out.println(name);
    }
    static Car createCar(){
        if(oil>0){
            return new Car();
        }
        return null;
    }
}
