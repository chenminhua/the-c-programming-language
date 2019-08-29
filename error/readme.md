在 C 语言中，有一个全局变量 errno 用于存放错误码。
为了防止和正常的返回值混淆，系统调用一般不直接返回错误码，而是将错误码放到 errno 的全局变量中。

errno 不同数值所代表的错误消息定义在 <errno.h> 文件中。比如

```
#define	EBUSY		16		/* Device / Resource busy */
#define	EEXIST		17		/* File exists */
#define	EXDEV		18		/* Cross-device link */
#define	ENODEV		19		/* Operation not supported by device */
#define	ENOTDIR		20		/* Not a directory */
#define	EISDIR		21		/* Is a directory */
#define	EINVAL		22		/* Invalid argument */
#define	ENFILE		23		/* Too many open files in system */
#define	EMFILE		24		/* Too many open files */
#define	ENOTTY		25		/* Inappropriate ioctl for device */
#define	ETXTBSY		26		/* Text file busy */
#define	EFBIG		27		/* File too large */
#define	ENOSPC		28		/* No space left on device */
#define	ESPIPE		29		/* Illegal seek */
#define	EROFS		30		/* Read-only file system */
#define	EMLINK		31		/* Too many links */
#define	EPIPE		32		/* Broken pipe */
```

如果系统调用出错了，可以通过读 errno 的值来确定问题所在。

### perror 和 strerror 函数

perror 在 <stdio.h> 中，用于打印错误码及其消息描述。

strerror 在 <string.h> 中，用于获取错误码对应的消息描述。

### 不是所有的库函数都适合用 errno 全局变量

### 调用（出错了会写 errno 的）函数之前必须先将 errno 清零
