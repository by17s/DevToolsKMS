#Syscall function table (x86)
---
| *%eax* | Name     | Entry point  | File               |
|------|----------|--------------|--------------------|
| 0    | read     | sys_read     | driver/fs/fread.h  |
| 1    | write    | sys_write    | driver/fs/fwrite.h |
| 2    | open     | sys_open     | driver/fs/fopen.h  |
| 3    | close    | sys_close    | driver/fs/fclose.h |
| 4    | write    | sys_stat     | driver/fs/stat.h   |
| ...  | ...      | ...          | ...                |
| 9    | mmap     | sys_mmap     | system/mem/mem.h   |
| 10   | mprotect | sys_mprotect | system/mem/mprot.h |
| 11   | munmap   | sys_munmap   | system/mem/mem.h   |
| 11   | brk      | sys_brk      | system/mem/mem.h   |
| ...  | ...      | ...          | ...                |

#0x9 function table
---
| *%ebx* | Name     | Description  | out |
|------|----------|--------------|-----|
| 0    | mmap     | get_mmap     |  *%esi*  ptr |
| 1    | malloc   | sys_malloc   |  *%esi*  ptr |
| 2    | calloc   | sys_calloc   |  *%esi*  ptr |
| 3    | realloc  | sys_realloc  |  *%esi*  ptr |
| 4    | meminf   | *%ecx* = 0 : get free memory ; *%ecx* = 1 : get used memory |  *%esi*  size|

#0xB function table
---
| *%ebx* | Name     | Description  | out |
|------|----------|--------------|-----|
| 0    | -        | -            | - |
| 1    | kfree    | free memory in *%ecx* (ptr)   | - |
| 2    | kcfree   | free  and clear memory in *%ecx* (ptr)   | - |