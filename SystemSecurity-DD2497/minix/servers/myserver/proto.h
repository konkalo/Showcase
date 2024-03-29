#ifndef _MYSERVER_PROTO_H
#define _MYSERVER_PROTO_H

/* Function prototypes. */

/* main.c */
int main(int argc, char **argv);

/* myserver.c */
int do_sys1(message *m_ptr);
int32_t do_sys2(message *m_ptr);
int do_sys3(message *m_ptr);
int do_check_code(message *m_ptr);
int sef_cb_init_fresh(int type, sef_init_info_t *info);
uid_t getuid(void);
#endif
