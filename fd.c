#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	int fd, len;
	char write_buf[50] = "Hi, How are you?";
	char read_buf[50];
	
	fd = open("linux_kernel1.txt", O_CREAT| O_RDWR, 777);
	
	len = write(fd, write_buf, 50);
	
	printf("\nReturn value from write optn = %d", len);
	
	//lseek(fd,4,SEEK_SET);
	
	lseek(fd,0,SEEK_CUR);
	
	read(fd,read_buf,len);
	
	printf("\nData from buffer (read optn) = %s", read_buf);
	
	close(fd);
	
	return 0;
}

/*
---> Current file offset is a measurment that measures number of offsets

---> <unistd.h> --> header file for read and write

---> One a file with O_CREATE option, take 2 buffer ->write with data and read with emplty buffer
Call write
final read

---> lseek sys calls performs repositiong of current file offset position

interpretaton of lseek operation depends on 

SEEK_END
SEEK_CLR
SEEK_SET
*/
