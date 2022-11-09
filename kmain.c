   #include "drivers/frame_buffer.h"
   #include "drivers/serial_port.h"

    void kmain()
    {
       char arr[] = "Welcome to My OS";
       fb_write(arr, sizeof(arr));
       serial_configure(SERIAL_COM1_BASE, Baud_115200);
       serial_write(SERIAL_COM1_BASE, arr, sizeof(arr));

       //serial_write(0x3F8, arr, 4);
       

       // fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);
       //fb_move_cursor(00);
    }
    
    
