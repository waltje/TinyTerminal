/* interface for extension
 *
 * (c) 2015 Martin Boekhoff
 */
#ifndef TT_H
# define TT_H


typedef void (*KeyHandler_t)(int key);
typedef void (*Recv_t)(char recvByte);

typedef struct {
    char	name[20];
    int		comDcb;
    int		comBps;
    int		comData;
    int		comStop;
    int		comParity;
    BOOL	comCtsflow;
    int		comPol;
    KeyHandler_t eventHandler;
    Recv_t	receiveFunc;
} extension_data_t;


extern char	registerExtension(extension_data_t extData);


#endif	/*TT_H*/
