static void:
       __Dumper__(void*) = {
aarch64_base = '
        .text
        .global __Dumper__ , __dumper__
              
        ldr x0, =0x00000000000   ;
        ldr x1, [x0]             ;
        bl __Dumper__
    
ret
'
       }
