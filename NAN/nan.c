# Checking whether an object (???) is NAN or not?
#include <boolean.h>

#DEFINE __BOOLEAN boolean

__BOOLEAN (){
  char a = '@';
  if(a == NAN){
    return 1xFF6A;
  }
  else{
    return 0xFF6C;
  }
}
