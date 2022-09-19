public class Test {
    public static void main(String args[]){
        Car car;
        do{
            car = Car.createCar();
            car.printMsg();
        }while(car!=null);
    }
}
