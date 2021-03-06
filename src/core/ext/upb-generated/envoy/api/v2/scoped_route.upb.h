/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/scoped_route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_SCOPED_ROUTE_PROTO_UPB_H_
#define ENVOY_API_V2_SCOPED_ROUTE_PROTO_UPB_H_

#include "upb/generated_util.h"
#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_ScopedRouteConfiguration;
struct envoy_api_v2_ScopedRouteConfiguration_Key;
struct envoy_api_v2_ScopedRouteConfiguration_Key_Fragment;
typedef struct envoy_api_v2_ScopedRouteConfiguration envoy_api_v2_ScopedRouteConfiguration;
typedef struct envoy_api_v2_ScopedRouteConfiguration_Key envoy_api_v2_ScopedRouteConfiguration_Key;
typedef struct envoy_api_v2_ScopedRouteConfiguration_Key_Fragment envoy_api_v2_ScopedRouteConfiguration_Key_Fragment;
extern const upb_msglayout envoy_api_v2_ScopedRouteConfiguration_msginit;
extern const upb_msglayout envoy_api_v2_ScopedRouteConfiguration_Key_msginit;
extern const upb_msglayout envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_msginit;


/* envoy.api.v2.ScopedRouteConfiguration */

UPB_INLINE envoy_api_v2_ScopedRouteConfiguration *envoy_api_v2_ScopedRouteConfiguration_new(upb_arena *arena) {
  return (envoy_api_v2_ScopedRouteConfiguration *)upb_msg_new(&envoy_api_v2_ScopedRouteConfiguration_msginit, arena);
}
UPB_INLINE envoy_api_v2_ScopedRouteConfiguration *envoy_api_v2_ScopedRouteConfiguration_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_ScopedRouteConfiguration *ret = envoy_api_v2_ScopedRouteConfiguration_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_ScopedRouteConfiguration_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_ScopedRouteConfiguration_serialize(const envoy_api_v2_ScopedRouteConfiguration *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_ScopedRouteConfiguration_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_ScopedRouteConfiguration_name(const envoy_api_v2_ScopedRouteConfiguration *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE upb_strview envoy_api_v2_ScopedRouteConfiguration_route_configuration_name(const envoy_api_v2_ScopedRouteConfiguration *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)); }
UPB_INLINE const envoy_api_v2_ScopedRouteConfiguration_Key* envoy_api_v2_ScopedRouteConfiguration_key(const envoy_api_v2_ScopedRouteConfiguration *msg) { return UPB_FIELD_AT(msg, const envoy_api_v2_ScopedRouteConfiguration_Key*, UPB_SIZE(16, 32)); }

UPB_INLINE void envoy_api_v2_ScopedRouteConfiguration_set_name(envoy_api_v2_ScopedRouteConfiguration *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_ScopedRouteConfiguration_set_route_configuration_name(envoy_api_v2_ScopedRouteConfiguration *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE void envoy_api_v2_ScopedRouteConfiguration_set_key(envoy_api_v2_ScopedRouteConfiguration *msg, envoy_api_v2_ScopedRouteConfiguration_Key* value) {
  UPB_FIELD_AT(msg, envoy_api_v2_ScopedRouteConfiguration_Key*, UPB_SIZE(16, 32)) = value;
}
UPB_INLINE struct envoy_api_v2_ScopedRouteConfiguration_Key* envoy_api_v2_ScopedRouteConfiguration_mutable_key(envoy_api_v2_ScopedRouteConfiguration *msg, upb_arena *arena) {
  struct envoy_api_v2_ScopedRouteConfiguration_Key* sub = (struct envoy_api_v2_ScopedRouteConfiguration_Key*)envoy_api_v2_ScopedRouteConfiguration_key(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_ScopedRouteConfiguration_Key*)upb_msg_new(&envoy_api_v2_ScopedRouteConfiguration_Key_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_ScopedRouteConfiguration_set_key(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.ScopedRouteConfiguration.Key */

UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key *envoy_api_v2_ScopedRouteConfiguration_Key_new(upb_arena *arena) {
  return (envoy_api_v2_ScopedRouteConfiguration_Key *)upb_msg_new(&envoy_api_v2_ScopedRouteConfiguration_Key_msginit, arena);
}
UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key *envoy_api_v2_ScopedRouteConfiguration_Key_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_ScopedRouteConfiguration_Key *ret = envoy_api_v2_ScopedRouteConfiguration_Key_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_ScopedRouteConfiguration_Key_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_ScopedRouteConfiguration_Key_serialize(const envoy_api_v2_ScopedRouteConfiguration_Key *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_ScopedRouteConfiguration_Key_msginit, arena, len);
}

UPB_INLINE const envoy_api_v2_ScopedRouteConfiguration_Key_Fragment* const* envoy_api_v2_ScopedRouteConfiguration_Key_fragments(const envoy_api_v2_ScopedRouteConfiguration_Key *msg, size_t *len) { return (const envoy_api_v2_ScopedRouteConfiguration_Key_Fragment* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key_Fragment** envoy_api_v2_ScopedRouteConfiguration_Key_mutable_fragments(envoy_api_v2_ScopedRouteConfiguration_Key *msg, size_t *len) {
  return (envoy_api_v2_ScopedRouteConfiguration_Key_Fragment**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key_Fragment** envoy_api_v2_ScopedRouteConfiguration_Key_resize_fragments(envoy_api_v2_ScopedRouteConfiguration_Key *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_ScopedRouteConfiguration_Key_Fragment**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_ScopedRouteConfiguration_Key_Fragment* envoy_api_v2_ScopedRouteConfiguration_Key_add_fragments(envoy_api_v2_ScopedRouteConfiguration_Key *msg, upb_arena *arena) {
  struct envoy_api_v2_ScopedRouteConfiguration_Key_Fragment* sub = (struct envoy_api_v2_ScopedRouteConfiguration_Key_Fragment*)upb_msg_new(&envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.api.v2.ScopedRouteConfiguration.Key.Fragment */

UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_new(upb_arena *arena) {
  return (envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *)upb_msg_new(&envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_msginit, arena);
}
UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *ret = envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_serialize(const envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_type_string_key = 1,
  envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_type_NOT_SET = 0
} envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_type_oneofcases;
UPB_INLINE envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_type_oneofcases envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_type_case(const envoy_api_v2_ScopedRouteConfiguration_Key_Fragment* msg) { return (envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_type_oneofcases)UPB_FIELD_AT(msg, int32_t, UPB_SIZE(8, 16)); }

UPB_INLINE bool envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_has_string_key(const envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(8, 16), 1); }
UPB_INLINE upb_strview envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_string_key(const envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 1, upb_strview_make("", strlen(""))); }

UPB_INLINE void envoy_api_v2_ScopedRouteConfiguration_Key_Fragment_set_string_key(envoy_api_v2_ScopedRouteConfiguration_Key_Fragment *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 1);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_SCOPED_ROUTE_PROTO_UPB_H_ */
