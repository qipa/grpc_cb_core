// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: route_guide.proto

#ifndef PROTOBUF_route_5fguide_2eproto__INCLUDED
#define PROTOBUF_route_5fguide_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace routeguide {
class Feature;
class FeatureDefaultTypeInternal;
extern FeatureDefaultTypeInternal _Feature_default_instance_;
class Point;
class PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class Rectangle;
class RectangleDefaultTypeInternal;
extern RectangleDefaultTypeInternal _Rectangle_default_instance_;
class RouteNote;
class RouteNoteDefaultTypeInternal;
extern RouteNoteDefaultTypeInternal _RouteNote_default_instance_;
class RouteSummary;
class RouteSummaryDefaultTypeInternal;
extern RouteSummaryDefaultTypeInternal _RouteSummary_default_instance_;
}  // namespace routeguide

namespace routeguide {

namespace protobuf_route_5fguide_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_route_5fguide_2eproto

// ===================================================================

class Point : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Point& default_instance();

  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }

  void Swap(Point* other);

  // implements Message ----------------------------------------------

  inline Point* New() const PROTOBUF_FINAL { return New(NULL); }

  Point* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Point* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 latitude = 1;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 1;
  ::google::protobuf::int32 latitude() const;
  void set_latitude(::google::protobuf::int32 value);

  // int32 longitude = 2;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 2;
  ::google::protobuf::int32 longitude() const;
  void set_longitude(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:routeguide.Point)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 latitude_;
  ::google::protobuf::int32 longitude_;
  mutable int _cached_size_;
  friend struct  protobuf_route_5fguide_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Rectangle : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.Rectangle) */ {
 public:
  Rectangle();
  virtual ~Rectangle();

  Rectangle(const Rectangle& from);

  inline Rectangle& operator=(const Rectangle& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Rectangle& default_instance();

  static inline const Rectangle* internal_default_instance() {
    return reinterpret_cast<const Rectangle*>(
               &_Rectangle_default_instance_);
  }

  void Swap(Rectangle* other);

  // implements Message ----------------------------------------------

  inline Rectangle* New() const PROTOBUF_FINAL { return New(NULL); }

  Rectangle* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Rectangle& from);
  void MergeFrom(const Rectangle& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Rectangle* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .routeguide.Point lo = 1;
  bool has_lo() const;
  void clear_lo();
  static const int kLoFieldNumber = 1;
  const ::routeguide::Point& lo() const;
  ::routeguide::Point* mutable_lo();
  ::routeguide::Point* release_lo();
  void set_allocated_lo(::routeguide::Point* lo);

  // .routeguide.Point hi = 2;
  bool has_hi() const;
  void clear_hi();
  static const int kHiFieldNumber = 2;
  const ::routeguide::Point& hi() const;
  ::routeguide::Point* mutable_hi();
  ::routeguide::Point* release_hi();
  void set_allocated_hi(::routeguide::Point* hi);

  // @@protoc_insertion_point(class_scope:routeguide.Rectangle)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::routeguide::Point* lo_;
  ::routeguide::Point* hi_;
  mutable int _cached_size_;
  friend struct  protobuf_route_5fguide_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Feature : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.Feature) */ {
 public:
  Feature();
  virtual ~Feature();

  Feature(const Feature& from);

  inline Feature& operator=(const Feature& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Feature& default_instance();

  static inline const Feature* internal_default_instance() {
    return reinterpret_cast<const Feature*>(
               &_Feature_default_instance_);
  }

  void Swap(Feature* other);

  // implements Message ----------------------------------------------

  inline Feature* New() const PROTOBUF_FINAL { return New(NULL); }

  Feature* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Feature& from);
  void MergeFrom(const Feature& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Feature* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .routeguide.Point location = 2;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 2;
  const ::routeguide::Point& location() const;
  ::routeguide::Point* mutable_location();
  ::routeguide::Point* release_location();
  void set_allocated_location(::routeguide::Point* location);

  // @@protoc_insertion_point(class_scope:routeguide.Feature)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::routeguide::Point* location_;
  mutable int _cached_size_;
  friend struct  protobuf_route_5fguide_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class RouteNote : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.RouteNote) */ {
 public:
  RouteNote();
  virtual ~RouteNote();

  RouteNote(const RouteNote& from);

  inline RouteNote& operator=(const RouteNote& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RouteNote& default_instance();

  static inline const RouteNote* internal_default_instance() {
    return reinterpret_cast<const RouteNote*>(
               &_RouteNote_default_instance_);
  }

  void Swap(RouteNote* other);

  // implements Message ----------------------------------------------

  inline RouteNote* New() const PROTOBUF_FINAL { return New(NULL); }

  RouteNote* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RouteNote& from);
  void MergeFrom(const RouteNote& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RouteNote* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // .routeguide.Point location = 1;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 1;
  const ::routeguide::Point& location() const;
  ::routeguide::Point* mutable_location();
  ::routeguide::Point* release_location();
  void set_allocated_location(::routeguide::Point* location);

  // @@protoc_insertion_point(class_scope:routeguide.RouteNote)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::routeguide::Point* location_;
  mutable int _cached_size_;
  friend struct  protobuf_route_5fguide_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class RouteSummary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.RouteSummary) */ {
 public:
  RouteSummary();
  virtual ~RouteSummary();

  RouteSummary(const RouteSummary& from);

  inline RouteSummary& operator=(const RouteSummary& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RouteSummary& default_instance();

  static inline const RouteSummary* internal_default_instance() {
    return reinterpret_cast<const RouteSummary*>(
               &_RouteSummary_default_instance_);
  }

  void Swap(RouteSummary* other);

  // implements Message ----------------------------------------------

  inline RouteSummary* New() const PROTOBUF_FINAL { return New(NULL); }

  RouteSummary* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RouteSummary& from);
  void MergeFrom(const RouteSummary& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RouteSummary* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 point_count = 1;
  void clear_point_count();
  static const int kPointCountFieldNumber = 1;
  ::google::protobuf::int32 point_count() const;
  void set_point_count(::google::protobuf::int32 value);

  // int32 feature_count = 2;
  void clear_feature_count();
  static const int kFeatureCountFieldNumber = 2;
  ::google::protobuf::int32 feature_count() const;
  void set_feature_count(::google::protobuf::int32 value);

  // int32 distance = 3;
  void clear_distance();
  static const int kDistanceFieldNumber = 3;
  ::google::protobuf::int32 distance() const;
  void set_distance(::google::protobuf::int32 value);

  // int32 elapsed_time = 4;
  void clear_elapsed_time();
  static const int kElapsedTimeFieldNumber = 4;
  ::google::protobuf::int32 elapsed_time() const;
  void set_elapsed_time(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:routeguide.RouteSummary)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 point_count_;
  ::google::protobuf::int32 feature_count_;
  ::google::protobuf::int32 distance_;
  ::google::protobuf::int32 elapsed_time_;
  mutable int _cached_size_;
  friend struct  protobuf_route_5fguide_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Point

// int32 latitude = 1;
inline void Point::clear_latitude() {
  latitude_ = 0;
}
inline ::google::protobuf::int32 Point::latitude() const {
  // @@protoc_insertion_point(field_get:routeguide.Point.latitude)
  return latitude_;
}
inline void Point::set_latitude(::google::protobuf::int32 value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:routeguide.Point.latitude)
}

// int32 longitude = 2;
inline void Point::clear_longitude() {
  longitude_ = 0;
}
inline ::google::protobuf::int32 Point::longitude() const {
  // @@protoc_insertion_point(field_get:routeguide.Point.longitude)
  return longitude_;
}
inline void Point::set_longitude(::google::protobuf::int32 value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:routeguide.Point.longitude)
}

// -------------------------------------------------------------------

// Rectangle

// .routeguide.Point lo = 1;
inline bool Rectangle::has_lo() const {
  return this != internal_default_instance() && lo_ != NULL;
}
inline void Rectangle::clear_lo() {
  if (GetArenaNoVirtual() == NULL && lo_ != NULL) delete lo_;
  lo_ = NULL;
}
inline const ::routeguide::Point& Rectangle::lo() const {
  // @@protoc_insertion_point(field_get:routeguide.Rectangle.lo)
  return lo_ != NULL ? *lo_
                         : *::routeguide::Point::internal_default_instance();
}
inline ::routeguide::Point* Rectangle::mutable_lo() {
  
  if (lo_ == NULL) {
    lo_ = new ::routeguide::Point;
  }
  // @@protoc_insertion_point(field_mutable:routeguide.Rectangle.lo)
  return lo_;
}
inline ::routeguide::Point* Rectangle::release_lo() {
  // @@protoc_insertion_point(field_release:routeguide.Rectangle.lo)
  
  ::routeguide::Point* temp = lo_;
  lo_ = NULL;
  return temp;
}
inline void Rectangle::set_allocated_lo(::routeguide::Point* lo) {
  delete lo_;
  lo_ = lo;
  if (lo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:routeguide.Rectangle.lo)
}

// .routeguide.Point hi = 2;
inline bool Rectangle::has_hi() const {
  return this != internal_default_instance() && hi_ != NULL;
}
inline void Rectangle::clear_hi() {
  if (GetArenaNoVirtual() == NULL && hi_ != NULL) delete hi_;
  hi_ = NULL;
}
inline const ::routeguide::Point& Rectangle::hi() const {
  // @@protoc_insertion_point(field_get:routeguide.Rectangle.hi)
  return hi_ != NULL ? *hi_
                         : *::routeguide::Point::internal_default_instance();
}
inline ::routeguide::Point* Rectangle::mutable_hi() {
  
  if (hi_ == NULL) {
    hi_ = new ::routeguide::Point;
  }
  // @@protoc_insertion_point(field_mutable:routeguide.Rectangle.hi)
  return hi_;
}
inline ::routeguide::Point* Rectangle::release_hi() {
  // @@protoc_insertion_point(field_release:routeguide.Rectangle.hi)
  
  ::routeguide::Point* temp = hi_;
  hi_ = NULL;
  return temp;
}
inline void Rectangle::set_allocated_hi(::routeguide::Point* hi) {
  delete hi_;
  hi_ = hi;
  if (hi) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:routeguide.Rectangle.hi)
}

// -------------------------------------------------------------------

// Feature

// string name = 1;
inline void Feature::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Feature::name() const {
  // @@protoc_insertion_point(field_get:routeguide.Feature.name)
  return name_.GetNoArena();
}
inline void Feature::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:routeguide.Feature.name)
}
#if LANG_CXX11
inline void Feature::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:routeguide.Feature.name)
}
#endif
inline void Feature::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:routeguide.Feature.name)
}
inline void Feature::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:routeguide.Feature.name)
}
inline ::std::string* Feature::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:routeguide.Feature.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Feature::release_name() {
  // @@protoc_insertion_point(field_release:routeguide.Feature.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Feature::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:routeguide.Feature.name)
}

// .routeguide.Point location = 2;
inline bool Feature::has_location() const {
  return this != internal_default_instance() && location_ != NULL;
}
inline void Feature::clear_location() {
  if (GetArenaNoVirtual() == NULL && location_ != NULL) delete location_;
  location_ = NULL;
}
inline const ::routeguide::Point& Feature::location() const {
  // @@protoc_insertion_point(field_get:routeguide.Feature.location)
  return location_ != NULL ? *location_
                         : *::routeguide::Point::internal_default_instance();
}
inline ::routeguide::Point* Feature::mutable_location() {
  
  if (location_ == NULL) {
    location_ = new ::routeguide::Point;
  }
  // @@protoc_insertion_point(field_mutable:routeguide.Feature.location)
  return location_;
}
inline ::routeguide::Point* Feature::release_location() {
  // @@protoc_insertion_point(field_release:routeguide.Feature.location)
  
  ::routeguide::Point* temp = location_;
  location_ = NULL;
  return temp;
}
inline void Feature::set_allocated_location(::routeguide::Point* location) {
  delete location_;
  location_ = location;
  if (location) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:routeguide.Feature.location)
}

// -------------------------------------------------------------------

// RouteNote

// .routeguide.Point location = 1;
inline bool RouteNote::has_location() const {
  return this != internal_default_instance() && location_ != NULL;
}
inline void RouteNote::clear_location() {
  if (GetArenaNoVirtual() == NULL && location_ != NULL) delete location_;
  location_ = NULL;
}
inline const ::routeguide::Point& RouteNote::location() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteNote.location)
  return location_ != NULL ? *location_
                         : *::routeguide::Point::internal_default_instance();
}
inline ::routeguide::Point* RouteNote::mutable_location() {
  
  if (location_ == NULL) {
    location_ = new ::routeguide::Point;
  }
  // @@protoc_insertion_point(field_mutable:routeguide.RouteNote.location)
  return location_;
}
inline ::routeguide::Point* RouteNote::release_location() {
  // @@protoc_insertion_point(field_release:routeguide.RouteNote.location)
  
  ::routeguide::Point* temp = location_;
  location_ = NULL;
  return temp;
}
inline void RouteNote::set_allocated_location(::routeguide::Point* location) {
  delete location_;
  location_ = location;
  if (location) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:routeguide.RouteNote.location)
}

// string message = 2;
inline void RouteNote::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RouteNote::message() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteNote.message)
  return message_.GetNoArena();
}
inline void RouteNote::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:routeguide.RouteNote.message)
}
#if LANG_CXX11
inline void RouteNote::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:routeguide.RouteNote.message)
}
#endif
inline void RouteNote::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:routeguide.RouteNote.message)
}
inline void RouteNote::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:routeguide.RouteNote.message)
}
inline ::std::string* RouteNote::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:routeguide.RouteNote.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RouteNote::release_message() {
  // @@protoc_insertion_point(field_release:routeguide.RouteNote.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RouteNote::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:routeguide.RouteNote.message)
}

// -------------------------------------------------------------------

// RouteSummary

// int32 point_count = 1;
inline void RouteSummary::clear_point_count() {
  point_count_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::point_count() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteSummary.point_count)
  return point_count_;
}
inline void RouteSummary::set_point_count(::google::protobuf::int32 value) {
  
  point_count_ = value;
  // @@protoc_insertion_point(field_set:routeguide.RouteSummary.point_count)
}

// int32 feature_count = 2;
inline void RouteSummary::clear_feature_count() {
  feature_count_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::feature_count() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteSummary.feature_count)
  return feature_count_;
}
inline void RouteSummary::set_feature_count(::google::protobuf::int32 value) {
  
  feature_count_ = value;
  // @@protoc_insertion_point(field_set:routeguide.RouteSummary.feature_count)
}

// int32 distance = 3;
inline void RouteSummary::clear_distance() {
  distance_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::distance() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteSummary.distance)
  return distance_;
}
inline void RouteSummary::set_distance(::google::protobuf::int32 value) {
  
  distance_ = value;
  // @@protoc_insertion_point(field_set:routeguide.RouteSummary.distance)
}

// int32 elapsed_time = 4;
inline void RouteSummary::clear_elapsed_time() {
  elapsed_time_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::elapsed_time() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteSummary.elapsed_time)
  return elapsed_time_;
}
inline void RouteSummary::set_elapsed_time(::google::protobuf::int32 value) {
  
  elapsed_time_ = value;
  // @@protoc_insertion_point(field_set:routeguide.RouteSummary.elapsed_time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace routeguide

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_route_5fguide_2eproto__INCLUDED
