

class JniClass {

    public native void print_hello();

    static {
	System.loadLibrary("native_hello");
    }
}


class JniExample {
    
    public static void main(String[] args){
	JniClass jni_class = new JniClass();
	jni_class.print_hello();
    }

}
