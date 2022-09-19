public class Test {
    public static void main(String args[]){
        Vehicle audi = new Vehicle(25);
        audi.speedUp(10);
        audi.speedUp(10);
        audi.speedUp(1);
        audi.breakDown(5);
        audi.breakDown(10);
        audi.breakDown(10);
        audi.breakDown(10);
    }
}
