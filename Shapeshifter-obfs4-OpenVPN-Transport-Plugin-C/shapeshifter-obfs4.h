#ifndef OPENVPN_PLUGIN_shapeshifter_obfs4_H
#define OPENVPN_PLUGIN_shapeshifter_obfs4_H 1

#include "openvpn-plugin.h"
#include "openvpn-vsocket.h"

#define shapeshifter_obfs4_PLUGIN_NAME "shapeshifter-obfs4"

struct shapeshifter_obfs4_context
{
    struct openvpn_plugin_callbacks *global_vtab;
    char *cert_string;
    int iat_mode;
};

extern struct openvpn_vsocket_vtab shapeshifter_obfs4_socket_vtab;
void shapeshifter_obfs4_initialize_socket_vtab(void);
void shapeshifter_obfs4_log(struct shapeshifter_obfs4_context *ctx,
                   openvpn_plugin_log_flags_t flags, const char *fmt, ...);

#endif /* !OPENVPN_PLUGIN_shapeshifter_obfs4_H */
