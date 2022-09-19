public class PC {
    CPU cpuSocket;
    HardDisk[] sataArray;
    void setCPU(CPU cpu){
        cpuSocket = cpu;
    }
    void setHardDisk(HardDisk ...HD){
        sataArray = HD;
    }
    void showMessage(){
       System.out.println("Basic Configuration of this PC:");
       System.out.println("CPU's Frequency:");
        System.out.println(cpuSocket.getFreq());
        for(HardDisk yin:sataArray){
            System.out.println("HardDisk of this PC:");
            System.out.println(yin.getVendor());
        }
    }

}
