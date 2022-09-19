public class Test {
    public static void main(String args[]){
        CPU intel,amd;
        intel = new CPU(3600);
        amd = new CPU(3800);
        HardDisk SSD,GuTai;
        SSD = new HardDisk("samsung");
        GuTai = new HardDisk("Kingston");
        PC Victus = new PC();
        Victus.setCPU(intel);
        Victus.setHardDisk(SSD,GuTai);
        Victus.showMessage();
    }
}
