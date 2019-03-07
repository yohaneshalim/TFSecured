// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/rewriter_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/protobuf/rewriter_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {
class RewriterConfigDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<RewriterConfig> {
} _RewriterConfig_default_instance_;

namespace protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewriterConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewriterConfig, optimize_tensor_layout_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(RewriterConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_RewriterConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/protobuf/rewriter_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _RewriterConfig_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _RewriterConfig_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n.tensorflow/core/protobuf/rewriter_conf"
      "ig.proto\022\ntensorflow\"0\n\016RewriterConfig\022\036"
      "\n\026optimize_tensor_layout\030\001 \001(\010B5\n\030org.te"
      "nsorflow.frameworkB\024RewriterConfigProtos"
      "P\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 173);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/rewriter_config.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RewriterConfig::kOptimizeTensorLayoutFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RewriterConfig::RewriterConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.RewriterConfig)
}
RewriterConfig::RewriterConfig(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.RewriterConfig)
}
RewriterConfig::RewriterConfig(const RewriterConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  optimize_tensor_layout_ = from.optimize_tensor_layout_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.RewriterConfig)
}

void RewriterConfig::SharedCtor() {
  optimize_tensor_layout_ = false;
  _cached_size_ = 0;
}

RewriterConfig::~RewriterConfig() {
  // @@protoc_insertion_point(destructor:tensorflow.RewriterConfig)
  SharedDtor();
}

void RewriterConfig::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void RewriterConfig::ArenaDtor(void* object) {
  RewriterConfig* _this = reinterpret_cast< RewriterConfig* >(object);
  (void)_this;
}
void RewriterConfig::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void RewriterConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RewriterConfig::descriptor() {
  protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::file_level_metadata[0].descriptor;
}

const RewriterConfig& RewriterConfig::default_instance() {
  protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

RewriterConfig* RewriterConfig::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<RewriterConfig>(arena);
}

void RewriterConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.RewriterConfig)
  optimize_tensor_layout_ = false;
}

bool RewriterConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.RewriterConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool optimize_tensor_layout = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &optimize_tensor_layout_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.RewriterConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.RewriterConfig)
  return false;
#undef DO_
}

void RewriterConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.RewriterConfig)
  // bool optimize_tensor_layout = 1;
  if (this->optimize_tensor_layout() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->optimize_tensor_layout(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.RewriterConfig)
}

::google::protobuf::uint8* RewriterConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.RewriterConfig)
  // bool optimize_tensor_layout = 1;
  if (this->optimize_tensor_layout() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->optimize_tensor_layout(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.RewriterConfig)
  return target;
}

size_t RewriterConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.RewriterConfig)
  size_t total_size = 0;

  // bool optimize_tensor_layout = 1;
  if (this->optimize_tensor_layout() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RewriterConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.RewriterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const RewriterConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RewriterConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.RewriterConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.RewriterConfig)
    MergeFrom(*source);
  }
}

void RewriterConfig::MergeFrom(const RewriterConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.RewriterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.optimize_tensor_layout() != 0) {
    set_optimize_tensor_layout(from.optimize_tensor_layout());
  }
}

void RewriterConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.RewriterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RewriterConfig::CopyFrom(const RewriterConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.RewriterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RewriterConfig::IsInitialized() const {
  return true;
}

void RewriterConfig::Swap(RewriterConfig* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    RewriterConfig* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void RewriterConfig::UnsafeArenaSwap(RewriterConfig* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void RewriterConfig::InternalSwap(RewriterConfig* other) {
  std::swap(optimize_tensor_layout_, other->optimize_tensor_layout_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RewriterConfig::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorflow_2fcore_2fprotobuf_2frewriter_5fconfig_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RewriterConfig

// bool optimize_tensor_layout = 1;
void RewriterConfig::clear_optimize_tensor_layout() {
  optimize_tensor_layout_ = false;
}
bool RewriterConfig::optimize_tensor_layout() const {
  // @@protoc_insertion_point(field_get:tensorflow.RewriterConfig.optimize_tensor_layout)
  return optimize_tensor_layout_;
}
void RewriterConfig::set_optimize_tensor_layout(bool value) {
  
  optimize_tensor_layout_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.RewriterConfig.optimize_tensor_layout)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)