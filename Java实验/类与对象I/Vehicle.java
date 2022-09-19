public class Vehicle {
    private double speed;
    private int power;
    Vehicle(int power){
        this.power = power;
    }
    public void speedUp(int s){
        speed += (s*power) / 2;
        if(speed > 180.0){
            speed = 180.0;
        }
    }
    public void breakDown(float s){
        speed -= s*s;
    }

}
