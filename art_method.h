#ifndef ART_RUNTIME_ART_METHOD_H_A
#define ART_RUNTIME_ART_METHOD_H_A

typedef unsigned int    uint32_t;
typedef unsigned short  uint16_t;

struct ArtMethod_5;
struct ArtMethod_6;
struct ArtMethod_7;
struct ArtMethod_8;
struct ArtMethod_9;
struct PtrSizedFields_5;
struct PtrSizedFields_6;
struct PtrSizedFields_7;
struct PtrSizedFields_8;
struct PtrSizedFields_9;

// 5.0
struct PtrSizedFields_5 {
    void* entry_point_from_interpreter_;
    void* entry_point_from_jni_;
    void* entry_point_from_quick_compiled_code_;
#if defined(ART_USE_PORTABLE_COMPILER)
    void* entry_point_from_portable_compiled_code_;
#endif
};

// 6.0
struct PtrSizedFields_6 {
    void* entry_point_from_interpreter_;
    void* entry_point_from_jni_;
    void* entry_point_from_quick_compiled_code_;
};

// 7.0
struct PtrSizedFields_7 {
    ArtMethod_7** dex_cache_resolved_methods_;
    void* dex_cache_resolved_types_;
    void* entry_point_from_jni_;
    void* entry_point_from_quick_compiled_code_;
};

// 8.0
struct PtrSizedFields_8 {
    ArtMethod_8** dex_cache_resolved_methods_;
    void* data_;
    void* entry_point_from_quick_compiled_code_;
} ptr_sized_fields_;

// 9.0
struct PtrSizedFields_9 {
    void* data_;
    void* entry_point_from_quick_compiled_code_;
};

struct ArtMethod_7 {
    uint32_t declaring_class_;
    uint32_t access_flags_;
    uint32_t dex_code_item_offset_;
    uint32_t dex_method_index_;
    uint16_t method_index_;
    uint16_t hotness_count_;
    struct PtrSizedFields_7 ptr_sized_fields_;
};
#endif  // ART_RUNTIME_ART_METHOD_H_A